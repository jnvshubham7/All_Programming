**Implement Real-Time Notifications in Your Chat Application using Firebase Cloud Messaging**

**Step 1: Obtain Your FCM Server Key**

To send notifications via the Firebase Cloud Messaging (FCM) REST API, you'll need to obtain your FCM server key. Here's a step-by-step guide to follow:

* Go to the Firebase Console
* Select your project
* Click on the gear icon next to "Project Overview" and select "Project settings"
* Navigate to the "Cloud Messaging" tab
* Copy the "Server key" under the "Project credentials" section

**Step 2: Get the Device Token**

To receive notifications, each device needs a unique token. Here's an example of how to get and save the device token:

```java
import com.google.firebase.messaging.FirebaseMessaging;

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
        // Save the token to your server or database
        FirebaseDatabase.getInstance().getReference()
                .child("users")
                .child(FirebaseAuth.getInstance().getUid())
                .child("token")
                .setValue(token);
    });
```

**Step 3: Send Notifications via the FCM REST API**

To send a notification, you'll need to use an HTTP POST request to the FCM endpoint. Here's an example using `curl` from the command line:

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

**Step 4: Automate Notification Sending from Your Server**

Here is an example in Java using `HttpURLConnection` to send notifications from your server:

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
```

This is the basic steps to send real-time notifications in your chat application using Firebase Cloud Messaging.