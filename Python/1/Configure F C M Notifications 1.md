Here is the rewritten article in point-wise form with code and examples:

**Step 6: Trigger Notifications on Message Send**

Modify your message sending logic in your chat activity to trigger a notification to the recipient.

### Sending Notifications

* Create a `HashMap` to store the notification message:
	+ `Map<String, Object> notificationMessage = new HashMap<>();`
	+ Set the `to` field to the recipient's device token:
		```java
		notificationMessage.put("to", userDeviceToken);
		```
* Create another `HashMap` to store the notification data:
	+ `Map<String, String> notification = new HashMap<>();`
	+ Set the `title` and `body` fields:
		```java
		notification.put("title", title);
		notification.put("body", body);
		```
	+ Add the notification data to the notification message:
		```java
		notificationMessage.put("notification", notification);
		```
* Create a third `HashMap` to store additional data:
	+ `Map<String, String> data = new HashMap<>();`
	+ Add key-value pairs to the data:
		```java
		data.put("key1", "value1");
		data.put("key2", "value2");
		```
	+ Add the data to the notification message:
		```java
		notificationMessage.put("data", data);
		```
* Convert the notification message to a JSON string using Gson:
	+ `return new Gson().toJson(notificationMessage);`

### Example Code

```java
public static String SendMessage(String userDeviceToken, String title, String body) {
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

### Triggering Notifications

In your chat activity, call the `SendMessage` method whenever a new message is sent:
```java
private void sendMessage(String messageTxt) {
    // ...
    sendNotificationToUser(userDeviceToken, title, body);
    // ...
}

private void sendNotificationToUser(String userDeviceToken, String title, String body) {
    // Call your server-side method to send the notification
    new Thread(() -> {
        try {
            // Replace with your actual FCM server key
            FCMNotificationSender.sendNotification(userDeviceToken, title, body);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }).start();
}
```

### Server-Side Application

To send notifications from your server, you'll need to create a server-side application. This application will listen for new messages in your Firebase database and send notifications via Firebase Cloud Messaging (FCM). Here's an example using Java:

```java
import org.json.JSONObject;

// Replace with your actual FCM server key
private static final String FCM_SERVER_KEY = "YOUR_SERVER_KEY";

public class FCMNotificationSender {
    public static void sendNotification(String userDeviceToken, String title, String body) {
        // Create a JSON payload
        JSONObject jsonPayload = new JSONObject();
        jsonPayload.put("to", userDeviceToken);
        jsonPayload.put("notification", new JSONObject()
            .put("title", title)
            .put("body", body));
        // Send the notification to FCM
        HttpsURLConnection connection = null;
        try {
            URL url = new URL("https://fcm.googleapis.com/v1/apps/YOUR_APP_ID/messages:send");
            connection = (HttpsURLConnection) url.openConnection();
            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/json");
            connection.setRequestProperty("Authorization", "Bearer " + FCM_SERVER_KEY);
            connection.setDoOutput(true);
            OutputStream out = connection.getOutputStream();
            out.write(jsonPayload.toString().getBytes());
            out.flush();
            out.close();
            int responseCode = connection.getResponseCode();
            if (responseCode == 200) {
                Log.d("FCM", "Notification sent successfully!");
            } else {
                Log.e("FCM", "Failed to send notification: " + responseCode);
            }
        } catch (Exception e) {
            Log.e("FCM", "Error sending notification: " + e.getMessage());
        } finally {
            if (connection != null) {
                connection.disconnect();
            }
        }
    }
}
```

Replace `YOUR_APP_ID` with your actual Firebase app ID and `YOUR_SERVER_KEY` with your actual FCM server key.