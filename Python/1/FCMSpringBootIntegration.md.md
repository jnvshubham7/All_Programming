### How to Integrate Firebase Cloud Messaging (FCM) with Spring Boot and Android

This guide will help you set up a Spring Boot backend to send notifications through Firebase Cloud Messaging (FCM) and integrate it with your Android app. Below are the detailed steps, including code examples.

---

### Backend: Spring Boot Application

#### 1. Set Up Your Spring Boot Project

1. **Visit Spring Initializr**:
   - Go to [Spring Initializr](https://start.spring.io/).

2. **Configure Project**:
   - Project: Maven
   - Language: Java
   - Spring Boot: (Latest version)
   - Project Metadata: Fill in details (Group, Artifact, Name, etc.)
   - Dependencies: Add **Spring Web**

3. **Generate and Extract Project**:
   - Click "Generate" to download the zip file.
   - Extract and open the project in your preferred IDE (e.g., IntelliJ IDEA, Eclipse).

#### 2. Add Dependencies in `pom.xml`

Ensure your `pom.xml` includes:

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

#### 3. Create the Notification Sender Class

Create `FCMNotificationSender.java`:

```java
package com.example.demo;

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

Replace `YOUR_SERVER_KEY` with your actual FCM server key.

#### 4. Create the REST Controller

Create `NotificationController.java`:

```java
package com.example.demo;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

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

#### 5. Run the Spring Boot Application

1. **Using IDE**:
   - Right-click on the main class (with `@SpringBootApplication`) and select "Run".

2. **Using Command Line**:
   - Navigate to the project directory and run:
     ```sh
     ./mvnw spring-boot:run
     ```

#### 6. Test the Endpoint

Use tools like Postman or `curl` to test the `/sendNotification` endpoint:

```sh
curl -X POST http://localhost:8080/sendNotification -H "Content-Type: application/json" -d '{
  "token": "USER_DEVICE_TOKEN",
  "title": "Test Notification",
  "body": "This is a test notification"
}'
```

---

### Frontend: Android Application

#### 1. Add Volley Dependency

In your `app/build.gradle`:

```groovy
implementation 'com.android.volley:volley:1.2.1'
```

Sync the project.

#### 2. Add Network Permission

In `AndroidManifest.xml`:

```xml
<uses-permission android:name="android.permission.INTERNET" />
```

#### 3. Create the Method to Send Notification

In your activity (e.g., `MainActivity`):

```java
import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;

import org.json.JSONException;
import org.json.JSONObject;

private void sendNotificationToUser(String userDeviceToken, String title, String message) {
    String url = "http://YOUR_SERVER_URL/sendNotification";
    JSONObject jsonBody = new JSONObject();
    try {
        jsonBody.put("token", userDeviceToken);
        jsonBody.put("title", title);
        jsonBody.put("body", message);

        JsonObjectRequest jsonObjectRequest = new JsonObjectRequest(Request.Method.POST, url, jsonBody,
            response -> Log.d("Notification", "Notification sent successfully"),
            error -> Log.e("Notification", "Failed to send notification", error));

        RequestQueue queue = Volley.newRequestQueue(this);
        queue.add(jsonObjectRequest);
    } catch (JSONException e) {
        e.printStackTrace();
    }
}
```

#### 4. Call the Method

Trigger the notification sending, for example, on a button click:

```java
Button sendNotificationButton = findViewById(R.id.send_notification_button);
sendNotificationButton.setOnClickListener(v -> {
    String token = "USER_DEVICE_TOKEN"; // Replace with actual device token
    String title = "New Message";
    String message = "You have received a new message";
    sendNotificationToUser(token, title, message);
});
```

Replace `"USER_DEVICE_TOKEN"` with the actual device token and `"http://YOUR_SERVER_URL/sendNotification"` with the URL of your Spring Boot server.

---

By following these steps, you will have set up both the backend and frontend components to send notifications via FCM. The backend is built with Spring Boot, and the frontend is an Android app using Volley for network requests.