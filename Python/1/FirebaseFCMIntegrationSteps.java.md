Here's the rewritten article in point-wise format with code and examples:

**Step 1: Save FCM Token to Firebase Realtime Database**

When the app starts or when the user logs in, you need to store the FCM token in the Firebase Realtime Database. Here's how you can do it:

* Get the user ID from Firebase Authentication:
```java
private void saveTokenToDatabase(String token) {
    String userId = FirebaseAuth.getInstance().getUid();
    // ...
}
```
* Store the token in the Realtime Database under the user's ID:
```java
FirebaseDatabase.getInstance().getReference()
    .child("users")
    .child(userId)
    .child("token")
    .setValue(token);
```

### Step 2: Create a Firebase Instance and Get the FCM Token

Before you can use Firebase Cloud Messaging (FCM), you need to create a Firebase instance and get the FCM token. Here's how you can do it:

* Implement the `FirebaseMessagingService` in your app.
* In the `onNewToken` method, get the FCM token and store it in the Realtime Database:
```java
public class MyFirebaseMessagingService extends FirebaseMessagingService {
    @Override
    public void onNewToken(String token) {
        // ...
    }
}
```

### Step 3: Create a Firebase Messaging Service

Create a service to handle the receipt of FCM messages:

* Extend the `FirebaseMessagingService` class and override the `onMessageReceived` method:
```java
public class MyFirebaseMessagingService extends FirebaseMessagingService {
    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) {
        // ...
    }
}
```
* Handle the FCM message by sending a notification:
```java
private void sendNotification(String title, String messageBody) {
    // ...
}
```

### Step 4: Update `AndroidManifest.xml`

Register your `MyFirebaseMessagingService` in the `AndroidManifest.xml` file:

```xml
<service
    android:name=".MyFirebaseMessagingService"
    android:exported="true">
    <intent-filter>
        <action android:name="com.google.firebase.MESSAGING_EVENT"/>
    </intent-filter>
</service>
```

### Step 5: Sending Notifications from Your Server

You can use the following Java code to send notifications from your server:

```java
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;

public class FCMNotificationSender {
    public void sendNotification(String to, String message) {
        // ...
    }
}
```

Note: The above code is just an example and needs to be modified according to your server-side implementation.