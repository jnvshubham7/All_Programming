To send Firebase Cloud Messaging (FCM) notifications from a server in a Java-based chat application, you can follow these steps:

### Step 1: Add Firebase Dependencies

Ensure your project includes necessary Firebase dependencies in the `build.gradle` file.

```gradle
dependencies {
    implementation 'com.google.firebase:firebase-messaging:23.0.0'
    implementation 'com.google.firebase:firebase-database:20.0.0'
    implementation 'com.google.firebase:firebase-auth:21.0.1'
    implementation 'com.google.firebase:firebase-storage:20.0.0'
}
```

### Step 2: Retrieve and Store FCM Token

In `Main_Activity.java`, retrieve and store the FCM token when the user logs in.

```java
FirebaseMessaging.getInstance().getToken()
    .addOnCompleteListener(task -> {
        if (!task.isSuccessful()) {
            Log.w("FCM", "Fetching FCM registration token failed", task.getException());
            return;
        }
        String token = task.getResult();
        saveTokenToDatabase(token);
    });

private void saveTokenToDatabase(String token) {
    String userId = FirebaseAuth.getInstance().getUid();
    if (userId != null) {
        FirebaseDatabase.getInstance().getReference()
            .child("users")
            .child(userId)
            .child("token")
            .setValue(token);
    }
}
```

### Step 3: Create a Firebase Messaging Service

Create a service to handle incoming FCM messages in `MyFirebaseMessagingService.java`.

```java
public class MyFirebaseMessagingService extends FirebaseMessagingService {

    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) {
        super.onMessageReceived(remoteMessage);

        if (remoteMessage.getNotification() != null) {
            String title = remoteMessage.getNotification().getTitle();
            String message = remoteMessage.getNotification().getBody();
            sendNotification(title, message);
        }
    }

    private void sendNotification(String title, String messageBody) {
        Intent intent = new Intent(this, Main_Activity.class);
        PendingIntent pendingIntent = PendingIntent.getActivity(this, 0, intent,
                PendingIntent.FLAG_ONE_SHOT | PendingIntent.FLAG_IMMUTABLE);

        String channelId = "default_channel_id";
        NotificationCompat.Builder notificationBuilder =
                new NotificationCompat.Builder(this, channelId)
                        .setSmallIcon(R.drawable.ic_notification)
                        .setContentTitle(title)
                        .setContentText(messageBody)
                        .setAutoCancel(true)
                        .setContentIntent(pendingIntent);

        NotificationManager notificationManager =
                (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            NotificationChannel channel = new NotificationChannel(channelId,
                    "Channel human readable title",
                    NotificationManager.IMPORTANCE_DEFAULT);
            notificationManager.createNotificationChannel(channel);
        }

        notificationManager.notify(0, notificationBuilder.build());
    }
}
```

### Step 4: Register the Service in `AndroidManifest.xml`

Register your messaging service in the `AndroidManifest.xml`.

```xml
<service
    android:name=".MyFirebaseMessagingService"
    android:exported="true">
    <intent-filter>
        <action android:name="com.google.firebase.MESSAGING_EVENT"/>
    </intent-filter>
</service>
```

### Step 5: Send Notifications from Server

Implement a server-side method to send FCM notifications in `FCMNotificationSender.java`.

```java
public class FCMNotificationSender {

    private static final String SERVER_KEY = "YOUR_SERVER_KEY";
    private static final String FCM_URL = "https://fcm.googleapis.com/fcm/send";

    public static void sendNotification(String userDeviceToken, String title, String body) throws Exception {
        URL url = new URL(FCM_URL);
        HttpURLConnection conn = (HttpURLConnection) url.openConnection();
        conn.setUseCaches(false);
        conn.setDoInput(true);
        conn.setDoOutput(true);

        conn.setRequestMethod("POST");
        conn.setRequestProperty("Authorization", "key=" + SERVER_KEY);
        conn.setRequestProperty("Content-Type", "application/json");

        String notificationJson = createNotificationJson(userDeviceToken, title, body);

        try (OutputStream os = conn.getOutputStream()) {
            byte[] input = notificationJson.getBytes("utf-8");
            os.write(input, 0, input.length);
        }

        int responseCode = conn.getResponseCode();
        if (responseCode != 200) {
            throw new RuntimeException("Failed to send notification. HTTP response code: " + responseCode);
        }
    }

    private static String createNotificationJson(String userDeviceToken, String title, String body) {
        Map<String, Object> notificationMessage = new HashMap<>();
        notificationMessage.put("to", userDeviceToken);

        Map<String, String> notification = new HashMap<>();
        notification.put("title", title);
        notification.put("body", body);

        notificationMessage.put("notification", notification);

        Map<String, String> data = new HashMap<>();
        data.put("key1", "value1");
        data.put("key2", "value2");

        notificationMessage.put("data", data);

        return new Gson().toJson(notificationMessage);
    }

    public static void main(String[] args) {
        try {
            sendNotification("USER_DEVICE_TOKEN", "New Message", "You have received a new message");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

### Step 6: Trigger Notifications on Message Send

Modify the message sending logic in `Chat_Activity.java` to trigger a notification.

```java
private void sendMessage(String messageTxt) {
    Date date = new Date();
    Message message = new Message(messageTxt, senderUid, date.getTime());
    binding.messageBox.setText("");

    String randomKey = database.getReference().push().getKey();

    HashMap<String, Object> lastMsgObj = new HashMap<>();
    lastMsgObj.put("lastMsg", message.getMessage());
    lastMsgObj.put("lastMsgTime", date.getTime());

    database.getReference().child("chats").child(senderRoom).updateChildren(lastMsgObj);
    database.getReference().child("chats").child(receiverRoom).updateChildren(lastMsgObj);

    if (randomKey != null) {
        database.getReference().child("chats").child(senderRoom).child("messages").child(randomKey).setValue(message)
            .addOnSuccessListener(aVoid -> {
                database.getReference().child("chats").child(receiverRoom).child("messages").child(randomKey).setValue(message);

                String userDeviceToken = getUserDeviceToken(receiverUid);
                if (userDeviceToken != null) {
                    sendNotificationToUser(userDeviceToken, "New Message", messageTxt);
                }
            });
    }
}

private String getUserDeviceToken(String userId) {
    return FirebaseDatabase.getInstance().getReference()
            .child("users")
            .child(userId)
            .child("token")
            .get().getResult().getValue(String.class);
}

private void sendNotificationToUser(String userDeviceToken, String title, String message) {
    new Thread(() -> {
        try {
            FCMNotificationSender.sendNotification(userDeviceToken, title, message);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }).start();
}
```

### Key Points

1. **Replace `YOUR_SERVER_KEY`:** Use your actual FCM server key in the `FCMNotificationSender` class.
2. **Token Storage:** Ensure you securely store and retrieve FCM tokens.
3. **Error Handling:** Implement appropriate error handling and security measures.
4. **Service Registration:** Ensure your messaging service is correctly registered in the `AndroidManifest.xml`.