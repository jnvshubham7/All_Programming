**Android Firebase Cloud Messaging (FCM) Tutorial: Receiving Push Notifications**

### Handling Push Notifications in Your Android App

In this step-by-step guide, you will learn how to integrate Firebase Cloud Messaging (FCM) in your Android app and receive push notifications.

### Step 1: Create a Firebase Project

Create a Firebase project by following these steps:

1. Create a new Firebase project from the Firebase console.
2. Add your Google account to the project.
3. Enable the Firebase Cloud Messaging (FCM) feature.

### Step 2: Add Firebase to Your Android App

**Add the Firebase SDK to Your Project**

In your Android project, add the Firebase SDK by following these steps:

1. Add the Firebase SDK to your project by adding the following dependencies to your `build.gradle` file:
```groovy
dependencies {
    implementation 'com.google.firebase:firebase-messaging:22.0.1'
}
```
**Register Your Firebase Configuration**

In your `AndroidManifest.xml` file, add the following code to register your Firebase configuration:
```xml
<application>
    <!-- Other application settings -->
    <service
        android:name=".MyFirebaseInstanceIDService"
        android:enabled="true"
        android:exported="true">
        <intent-filter>
            <action android:name="com.google.firebase.INSTANCE_ID_EVENT"/>
        </intent-filter>
    </service>
    <service
        android:name=".MyFirebaseMessagingService"
        android:enabled="true"
        android:exported="true">
        <intent-filter>
            <action android:name="com.google.firebase.MESSAGING_EVENT"/>
        </intent-filter>
    </service>
</application>
```
### Step 3: Implement FirebaseMessagingService

**Implement the FirebaseMessagingService**

In your Android app, create a new class that extends `FirebaseMessagingService` and handles incoming FCM messages. In this class, override the `onMessageReceived` method to receive and handle FCM messages:
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
}
```
### Step 4: Update `AndroidManifest.xml`

**Register Your FirebaseMessagingService**

In your `AndroidManifest.xml` file, register your `MyFirebaseMessagingService` as follows:
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

**Send Notifications from Your Server**

When a new message is sent in your chat activity, trigger a notification to the recipient. To do this, use the FCM API to send a notification to the recipient's device. Below is an example of how you can send a notification from your server:
```java
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;
import com.google.gson.Gson;

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
```
This concludes the Firebase Cloud Messaging (FCM) tutorial. By following these steps, you have successfully integrated FCM in your Android app and received push notifications.