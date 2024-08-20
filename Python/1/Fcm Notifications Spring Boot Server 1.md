**Sending Notifications with FCM using Spring Boot and Android App**

**Server-Side Application with Spring Boot**

### Step 1: Set Up a New Spring Boot Project

To create a REST API for sending notifications and integrate it with your Android app, follow these steps to set up a new Spring Boot project.

*   **Create a New Project**:
    *   Create a new Spring Boot project using [Spring Initializr](https://start.spring.io/).
    *   Select the following dependencies: Spring Web.
*   **Download the Project**:
    *   Download the generated project and extract it.
*   **Open the Project**:
    *   Open the project in your favorite IDE (IntelliJ IDEA, Eclipse, etc.).

### Step 2: Add Dependencies to `pom.xml`

Add the necessary dependencies to your `pom.xml` if not already included:

```xml
<dependencies>
    <!-- Spring Boot Starter Web -->
    <dependency>
        <groupId>org.springframework.boot</groupId>
        <artifactId>spring-boot-starter-web</artifactId>
    </dependency>
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

### Step 3: Create the Notification Sender Class

Create a class `FCMNotificationSender.java`:

```java
import com.google.gson.Gson;
import org.apache.hc.client5.http.HttpResponseException;
import org.apache.hc.client5.http.classic.methods.HttpPost;
import org.apache.hc.client5.http.impl.classic.CloseableHttpClient;
import org.apache.hc.client5.http.impl(classic.CloseableHttpResponse;
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

        Gson gson = new Gson();
        return gson.toJson(notificationMessage);
    }
}
```

### Step 4: Create the REST API to Send Notifications

Create a new Java class `NotificationController.java`:

```java
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class NotificationController {

    @PostMapping(value = "/send-notification/{userDeviceToken}/{title}/{body}")
    public String sendNotification(@PathVariable String userDeviceToken, @PathVariable String title, @PathVariable String body) throws IOException {
        FCMNotificationSender.sendNotification(userDeviceToken, title, body);
        return "Notification sent successfully";
    }
}
```

### Step 5: Implement the Notification Logic in Your Android App

Implement the notification logic in your Android app by sending a POST request to the `/send-notification` endpoint:

```java
// Send a POST request to the server to send a notification
String userDeviceToken = "user_device_token";
String title = "Notification Title";
String body = "Notification Body";

StringApi.sendNotification(userDeviceToken, title, body);
```

**Note**: Replace `YOUR_SERVER_KEY` with your actual FCM server key.

By following these steps, you can create a REST API to send notifications using Spring Boot and integrate it with your Android app.