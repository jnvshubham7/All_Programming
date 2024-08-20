To implement Firebase Cloud Messaging (FCM) notifications in your Android app, you can follow these steps, complete with code examples and points to note:

### Step 1: Add Firebase Dependencies
Ensure that your `build.gradle` (app-level) file includes the necessary Firebase dependencies:
```gradle
dependencies {
    implementation 'com.google.firebase:firebase-messaging:23.0.0'
    implementation 'com.google.firebase:firebase-database:20.0.0'
    implementation 'com.google.firebase:firebase-auth:21.0.1'
}
```

### Step 2: Retrieve and Save the FCM Token
Retrieve the device token in your main activity and save it to Firebase Realtime Database:
```java
FirebaseMessaging.getInstance().getToken()
    .addOnCompleteListener(task -> {
        if (!task.isSuccessful()) {
            Log.w("FCM", "Fetching FCM registration token failed", task.getException());
            return;
        }

        // Get new FCM registration token
        String token = task.getResult();
        Log.d("FCM", "Token: " + token);

        // Save token to Firebase Database
        String userId = FirebaseAuth.getInstance().getUid();
        if (userId != null) {
            FirebaseDatabase.getInstance().getReference()
                .child("users")
                .child(userId)
                .child("token")
                .setValue(token);
        }
    });
```

### Step 3: Create a Firebase Messaging Service
Create a service to handle FCM messages:
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
        Intent intent = new Intent(this, MainActivity.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
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
                    "Default Channel", NotificationManager.IMPORTANCE_DEFAULT);
            notificationManager.createNotificationChannel(channel);
        }

        notificationManager.notify(0, notificationBuilder.build());
    }
}
```

### Step 4: Register the Service in `AndroidManifest.xml`
Register the messaging service in your manifest:
```xml
<service
    android:name=".MyFirebaseMessagingService"
    android:exported="true">
    <intent-filter>
        <action android:name="com.google.firebase.MESSAGING_EVENT"/>
    </intent-filter>
</service>
```

### Step 5: Send Notifications from Your Server
To send notifications, use the FCM REST API or Firebase Admin SDK. Here's an example using the REST API with `curl`:
```bash
curl -X POST -H "Authorization: key=YOUR_SERVER_KEY" -H "Content-Type: application/json" -d '{
  "to": "USER_DEVICE_TOKEN",
  "notification": {
    "title": "New Message",
    "body": "You have received a new message"
  },
  "data": {
    "key1": "value1",
    "key2": "value2"
  }
}' https://fcm.googleapis.com/fcm/send
```

Alternatively, use Java to automate notification sending from your server:
```java
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;

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

### Final Notes
- Ensure your app handles incoming notifications correctly.
- Securely manage your FCM server key to prevent unauthorized access.
- Implement error handling and retries for failed notification attempts.