Here is the rewritten article in point-wise format with code and examples:

**Sending Push Notifications using Firebase Cloud Messaging (FCM)**

### Introduction

In this article, we will discuss how to send push notifications using Firebase Cloud Messaging (FCM) in Java. We will create a Java class that sends a POST request to the FCM server with a JSON payload containing the notification details.

### Step 1: Initialize FCM Server Key and URL

First, we initialize the FCM server key and URL:
```java
private static final String SERVER_KEY = "YOUR_SERVER_KEY";
private static final String FCM_URL = "https://fcm.googleapis.com/fcm/send";
```
Replace `YOUR_SERVER_KEY` with your actual FCM server key.

### Step 2: Create a Method to Send Notification

Next, we create a method `sendNotification` that takes three parameters: `userDeviceToken`, `title`, and `body`:
```java
public static void sendNotification(String userDeviceToken, String title, String body) throws Exception {
    // ...
}
```
### Step 3: Create a JSON Payload for Notification

In this method, we create a JSON payload using the `createNotificationJson` method:
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
### Step 4: Send POST Request to FCM Server

We then send a POST request to the FCM server with the JSON payload:
```java
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
```
### Step 5: Process Response

Finally, we check the response code and throw an exception if it's not 200:
```java
if (responseCode != 200) {
    throw new RuntimeException("Failed to send notification. HTTP response code: " + responseCode);
}
```
### Step 6: Trigger Notifications on Message Send

When sending a message in your `Chat_Activity`, trigger a server-side notification to the recipient:
```java
private void sendMessage(String messageTxt) {
    // ...

    String userDeviceToken = getUserDeviceToken(receiverUid);
    if (userDeviceToken != null) {
        sendNotificationToUser(userDeviceToken, "New Message", messageTxt);
    }
}

private void sendNotificationToUser(String userDeviceToken, String title, String message) {
    sendNotification(userDeviceToken, title, message);
}
```
In this example, when a message is sent, we retrieve the recipient's device token and trigger a notification using the `sendNotification` method.

That's it! With this tutorial, you have successfully implemented FCM push notifications in your Android app.