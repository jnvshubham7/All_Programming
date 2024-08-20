**Integrating Firebase Cloud Messaging (FCM) with Java: A Step-by-Step Guide**

### Creating a New Java Project

To begin integrating FCM with Java, you need to create a new Java project using your preferred Integrated Development Environment (IDE), such as IntelliJ IDEA or Eclipse.

### Adding Dependencies

In your Java project, you need to add the necessary dependencies to interact with FCM. If you're using Maven, you can add the following dependencies to your `pom.xml` file:

```xml
<dependencies>
    <!-- Gson for JSON manipulation -->
    <dependency>
        <groupId>com.google.code.gson</groupId>
        <artifactId>gson</artifactId>
        <version>2.8.6</version>
    </dependency>
    <!-- HttpClient for sending HTTP requests -->
    <dependency>
        <groupId>org.apache.httpcomponents.client5</groupId>
        <artifactId>httpclient5</artifactId>
        <version>5.0</version>
    </dependency>
</dependencies>
```

### Creating the Notification Sender Class

To handle sending notifications, create a class named `FCMNotificationSender`:

```java
import com.google.gson.Gson;
import org.apache.hc.client5.http.HttpResponseException;
import org.apache.hc.client5.http.classic.methods.HttpPost;
import org.apache.hc.client5.http.impl.classic.CloseableHttpClient;
import org.apache.hc.client5.http.impl.classic.CloseableHttpResponse;
import org.apache.hc.client5.http.impl.classic.HttpClients;
import org.apache.hc.core5.http.io.entity.StringEntity;

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

public class FCMNotificationSender {

    private static final String SERVER_KEY = "YOUR_SERVER_KEY";
    private static final String FCM_URL = "https://fcm.googleapis.com/fcm/send";

    public static void sendNotification(String userDeviceToken, String title, String body) throws IOException {
        try (CloseableHttpClient httpClient = HttpClients.createDefault()) {
            HttpPost httpPost = new HttpPost(FCM_URL);
            httpPost.setHeader("Authorization", "key=" + SERVER_KEY);
            httpPost.setHeader("Content-Type", "application/json");

            String notificationJson = createNotificationJson(userDeviceToken, title, body);
            httpPost.setEntity(new StringEntity(notificationJson));

            try (CloseableHttpResponse response = httpClient.execute(httpPost)) {
                if (response.getCode() != 200) {
                    throw new HttpResponseException(response.getCode(), "Failed to send notification");
                }
            }
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

Replace `YOUR_SERVER_KEY` with your actual FCM server key and `USER_DEVICE_TOKEN` with a valid device token for testing purposes.

### Triggering Notifications When Sending Messages

To trigger notifications when a new message is sent, you need to integrate the `FCMNotificationSender` class with your Firebase database. This step is crucial in sending notifications to targeted devices.

By following these steps, you can successfully integrate Firebase Cloud Messaging with your Java project, enabling you to send targeted notifications to your users.