**Sending Push Notifications using Firebase Cloud Messaging and Spring Boot**

**Integrating Firebase Cloud Messaging with Spring Boot**

### Creating the FCM Notification Sender

To send push notifications using Firebase Cloud Messaging (FCM), you need to create a class that sends the notification request to the FCM server. The following code snippet demonstrates how to create the `FCMNotificationSender` class:

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

public static void sendNotification(String userDeviceToken, String title, String body) {
    String notificationJson = createNotificationJson(userDeviceToken, title, body);
    httpPost.setEntity(new StringEntity(notificationJson));

    try (CloseableHttpResponse response = httpClient.execute(httpPost)) {
        if (response.getCode() != 200) {
            throw new HttpResponseException(response.getCode(), "Failed to send notification");
        }
    }
}
```

### Creating the REST Controller

To send the notification request to the FCM server, you need to create a REST controller that accepts the notification request and sends it to the FCM server. The following code snippet demonstrates how to create the `NotificationController` class:

```java
@RestController
public class NotificationController {

    @PostMapping("/sendNotification")
    public void sendNotification(@RequestBody NotificationRequest request) {
        try {
            FCMNotificationSender.sendNotification(request.getToken(), request.getTitle(), request.getBody());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

class NotificationRequest {
    private String token;
    private String title;
    private String body;

    // Getters and Setters
    public String getToken() {
        return token;
    }

    public void setToken(String token) {
        this.token = token;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getBody() {
        return body;
    }

    public void setBody(String body) {
        this.body = body;
    }
}
```

### Running the Spring Boot Application

To run the Spring Boot application, you can use the following code snippet:

```java
public static void main(String[] args) {
    try {
        sendNotification("USER_DEVICE_TOKEN", "New Message", "You have received a new message");
    } catch (Exception e) {
        e.printStackTrace();
    }
}
```

**Note:** Replace `USER_DEVICE_TOKEN` with your actual FCM device token.

By following these steps, you can successfully send push notifications using Firebase Cloud Messaging and Spring Boot.