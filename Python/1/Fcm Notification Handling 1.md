Here is the article rewritten in point-wise with code and example:

**Sending Real-time Notifications to Users in Chat App using Firebase Cloud Messaging**

**Step 1: Add Dependencies**

To start using Firebase Cloud Messaging, you need to add the required dependencies in your `build.gradle` (app-level) file:
```gradle
dependencies {
    implementation 'com.google.firebase:firebase-messaging:23.0.0'
    implementation 'com.google.firebase:firebase-database:20.0.0'
    implementation 'com.google.firebase:firebase-auth:21.0.1'
    // other dependencies
}
```
**Step 2: Create a Notification JSON Message**

Create a method to create a notification JSON message:
```java
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
```
**Step 3: Send Notification Request**

Create a method to send a notification request:
```java
if (responseCode != 200) {
    throw new RuntimeException("Failed to send notification. HTTP response code: " + responseCode);
}
```
**Step 4: Handle Notification Response**

Handle the notification response by checking if the request was successful:
```java
public static void main(String[] args) {
    try {
        sendNotification("USER_DEVICE_TOKEN", "New Message", "You have received a new message");
    } catch (Exception e) {
        e.printStackTrace();
    }
}
```
**Step 5: Handle Notifications in Your App**

Ensure your app handles incoming notifications by setting up your `MyFirebaseMessagingService`:
```java
// MyFirebaseMessagingService.java

public class MyFirebaseMessagingService extends FirebaseMessagingService {
    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) {
        // Handle incoming message
    }
}
```
**Final Notes**

* Always ensure you handle errors gracefully and retry sending notifications if they fail.
* Consider using a backend framework or service to manage sending notifications, especially as your user base grows.
* Securely manage and store your FCM server key to prevent unauthorized access.

By following these steps, you can send real-time notifications to users in your chat app using Firebase Cloud Messaging.