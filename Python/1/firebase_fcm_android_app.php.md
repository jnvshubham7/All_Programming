**Implementing Firebase Cloud Messaging (FCM) in Android App**

**Handling Firebase Cloud Messaging (FCM) in Android App**

In this step-by-step guide, we will explore the process of implementing Firebase Cloud Messaging (FCM) in an Android app.

### Step 1: Register the Firebase Instance ID Service

**[Java Code Snippet]**
```java
public class MyFirebaseInstanceIdService extends FirebaseInstanceIdService {
    private static final String TAG = "FCM";

    @Override
    public void onTokenRefresh() {
        super.onTokenRefresh();
        String refreshedToken = FirebaseInstanceId.getInstance().getToken();
        Log.d(TAG, "Refreshed token: " + refreshedToken);
        // If you want to send messages to this application instance or
        // manage this apps subscriptions on the server side, send the
        // Instance ID token to your app server.
    }
}
```

### Step 2: Initialize the FirebaseMessagingService

**[Java Code Snippet]**
```java
public class MyFirebaseMessagingService extends FirebaseMessagingService {
    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) {
        Log.d(TAG, "From: " + remoteMessage.getFrom());

        // Check if message contains a data payload.
        if (remoteMessage.getData().size() > 0) {
            Log.d(TAG, "Message data payload: " + remoteMessage.getData());
        }

        // Check if message contains a notification payload.
        if (remoteMessage.getNotification() != null) {
            Log.d(TAG, "Message Notification Body: " + remoteMessage.getNotification().getBody());
            showNotification(remoteMessage.getNotification().getTitle(), remoteMessage.getNotification().getBody());
        }
    }

    private void showNotification(String title, String body) {
        Intent intent = new Intent(this, MainActivity.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        PendingIntent pendingIntent = PendingIntent.getActivity(this, 0, intent, PendingIntent.FLAG_ONE_SHOT);

        String channelId = "default_channel";
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, channelId)
                .setSmallIcon(R.drawable.ic_notification)
                .setContentTitle(title)
                .setContentText(body)
                .setAutoCancel(true)
                .setContentIntent(pendingIntent);

        NotificationManager manager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            NotificationChannel channel = new NotificationChannel(channelId, "Default channel", NotificationManager.IMPORTANCE_DEFAULT);
            manager.createNotificationChannel(channel);
        }

        manager.notify(0, builder.build());
    }

    @Override
    public void onNewToken(String token) {
        super.onNewToken(token);
        Log.d(TAG, "Refreshed token: " + token);
        // If you want to send messages to this application instance or
        // manage this apps subscriptions on the server side, send the
        // Instance ID token to your app server.
    }
}
```

### Register the service in the `AndroidManifest.xml` file:

**[XML Code Snippet]**
```xml
<service
    android:name=".MyFirebaseMessagingService"
    android:exported="false">
    <intent-filter>
        <action android:name="com.google.firebase.MESSAGING_EVENT"/>
    </intent-filter>
</service>
```

### Step 3: Send Notifications from Your Server

**Send a message via Firebase Cloud Messaging:**

To send a message, you can use the Firebase Admin SDK or directly call the FCM REST API. Here’s an example using the REST API:

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

**Server-side logic:**

- When a user sends a message, your server should detect this event.
- Fetch the device token of the recipient from your database.
- Use the FCM REST API or Firebase Admin SDK to send a notification to the recipient's device.

### Step 4: Save Device Tokens in Firebase

**Store the device token when the user logs in or signs up:**

```java
FirebaseInstanceId.getInstance().getInstanceId()
        .addOnCompleteListener(task -> {
            if (!task.isSuccessful()) {
                Log.w(TAG, "getInstanceId failed", task.getException());
                return;
            }

            // Get new Instance ID token
            String token = task.getResult().getToken();

            // Log and save the token
            Log.d(TAG, "Token: " + token);
```

By following these steps, you can successfully implement Firebase Cloud Messaging (FCM) in your Android app and send notifications to your users.