**Integrating Firebase Cloud Messaging (FCM) into Your Chat Application**

### **Configure Firebase and Retrieve Device Token**

To integrate FCM notifications into your chat app, you need to make modifications in several places in your project. This article will guide you through the steps to achieve this.

#### **Step 1: Add Firebase Dependencies**

Ensure you have the necessary Firebase dependencies in your `build.gradle` (app-level) file:

```gradle
dependencies {
    implementation 'com.google.firebase:firebase-messaging:23.0.0'
    implementation 'com.google.firebase:firebase-database:20.0.0'
    implementation 'com.google.firebase:firebase-auth:21.0.1'
    implementation 'com.google.firebase:firebase-storage:20.0.0'
    // other dependencies
}
```

#### **Step 2: Initialize Firebase and Retrieve Device Token**

In your `Main_Activity.java`, add the following code to retrieve and store the FCM token when the user logs in.

```java
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.FirebaseDatabase;

public class Main_Activity extends AppCompatActivity {

    // Other existing code...

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Existing code...

        FirebaseMessaging.getInstance().getToken()
            .addOnCompleteListener(task -> {
                if (!task.isSuccessful()) {
                    Log.w("FCM", "Fetching FCM registration token failed", task.getException());
                    return;
                }

                // Get new FCM registration token
                String token = task.getResult();

                // Log and save the token
                Log.d("FCM", "Token: " + token);
                saveTokenToDatabase(token);
            });
    }

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

    // Other existing code...
}
```

### **Create a Firebase Messaging Service**

Create a service to handle the receipt of FCM messages.

```java
import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.RemoteMessage;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import androidx.core.app.NotificationCompat;

public class MyFirebaseMessagingService extends FirebaseMessagingService {

    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) {
        // Process the received message
        String title = remoteMessage.getNotification().getTitle();
        String message = remoteMessage.getNotification().getMessage();

        // Display a notification with the title and message
        notifyUser(title, message);
    }

    private void notifyUser(String title, String message) {
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this)
            .setSmallIcon(R.drawable.ic_notification)
            .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.ic_launcher))
            .setContentTitle(title)
            .setContentText(message)
            .setPriority(NotificationCompat.PRIORITY_HIGH);

        NotificationManager manager = getSystemService(NotificationManager.class);
        manager.notify(Integer.parseInt(System.currentTimeMillis() + ""), builder.build());
    }
}
```

### **Call the Server-Side Method to Send the Notification**

Call your server-side method to send the notification. This is just a placeholder method for demonstration purposes.

```java
// Call your server-side method to send the notification
FCMNotificationSender.sendNotification(userDeviceToken, title, message);
```

### **Notes**

- Replace `YOUR_SERVER_KEY` with your actual FCM server key.
- Replace placeholder methods with actual implementations for fetching device tokens and sending notifications from your server.
- Ensure proper error handling and security measures are in place when dealing with user data and notifications.

By following these steps, you can integrate FCM notifications into your chat app, similar to WhatsApp, to notify users of new messages.