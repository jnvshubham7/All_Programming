**Integrating Firebase Cloud Messaging (FCM) with Spring Boot and Android**

**FCM Server Key Integration with Spring Boot**

### 1. Creating the FCM Notification Sender Class

To send FCM notifications, create a class `FCMNotificationSender.java` with the following code:

```java
import com.google.cloud.scheduler.FCMNotificationSender;
import com.google.gson.Gson;

public class FCMNotificationSender {
    public static void sendNotification(String token, String title, String body) {
        Gson gson = new Gson();
        NotificationMessage notificationMessage = new NotificationMessage(title, body);
        String json = gson.toJson(notificationMessage);
        // Send FCM notification
    }
}
```

### 2. Creating the NotificationMessage Class

Create a class `NotificationMessage.java` to represent the notification message:

```java
public class NotificationMessage {
    private String title;
    private String body;

    public NotificationMessage(String title, String body) {
        this.title = title;
        this.body = body;
    }

    public String getTitle() {
        return title;
    }

    public String getBody() {
        return body;
    }
}
```

### 3. Creating the Spring Boot REST Controller

Create a class `NotificationController.java` to handle the REST API endpoint for sending FCM notifications:

```java
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
```

### 4. Creating the NotificationRequest Class

Create a class `NotificationRequest.java` to represent the request for sending FCM notifications:

```java
public class NotificationRequest {
    private String token;
    private String title;
    private String body;

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

### 5. Running the Spring Boot Application

Run your Spring Boot application, which will start the server and expose the `/sendNotification` endpoint.

**Android App Integration**

### 1. Adding Dependencies to `build.gradle`

In your Android app, add the necessary dependencies for making network requests in your `app/build.gradle`:

```groovy
implementation 'com.android.volley:volley:1.2.1'
```

### 2. Creating the Method to Call the REST API

Modify your activity to send a notification when needed:

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
        // Send request to the REST API
    } catch (JSONException e) {
        e.printStackTrace();
    }
}
```

Replace `YOUR_SERVER_URL` with the URL of your Spring Boot application.