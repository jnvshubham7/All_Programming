**Sending Notifications to FCM Using Spring Boot**

### Using Volley Library in Android to Send Notification Request

In this article, we will discuss how to send notifications from Android app to FCM (Firebase Cloud Messaging) using Spring Boot as a server-side application. We will cover the step-by-step process of setting up a Spring Boot project, adding dependencies, creating a notification sender class, and finally sending a notification request to FCM.

### Step-by-Step Guide

#### 1. Configure Volley Library in Android

The Volley library is used to send network requests. To configure Volley, you need to create a `RequestQueue` and add a `JsonObjectRequest` to it.

```java
import com.android.volley.RequestQueue;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;

// Create a RequestQueue
RequestQueue queue = Volley.newRequestQueue(this);

// Create a JsonObjectRequest
JsonObjectRequest jsonObjectRequest = new JsonObjectRequest(Request.Method.POST, url, jsonBody,
        response -> Log.d("Notification", "Notification sent successfully"),
        error -> Log.e("Notification", "Failed to send notification", error));

// Add the request to the RequestQueue
queue.add(jsonObjectRequest);
```

#### 2. Create a Notification Sender Class

Create a new class `FCMNotificationSender.java` in the `src/main/java/com/example/demo` directory (or your package directory), which will send the notification request to FCM.

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
            Gson gson = new Gson();
            Map<String, String> jsonBody = new HashMap<>();
            jsonBody.put("token", userDeviceToken);
            jsonBody.put("title", title);
            jsonBody.put("body", body);
            StringEntity bodyEntity = new StringEntity(gson.toJson(jsonBody));
            httpPost.setEntity(bodyEntity);
            CloseableHttpResponse response = httpClient.execute(httpPost);
            if (response.getCode() != 200) {
                throw new HttpResponseException(response.getCode(), response.getReasonPhrase());
            }
        }
    }
}
```

### Conclusion

By following these steps, you have learned how to send notifications from Android app to FCM using Spring Boot as a server-side application. You have set up a Spring Boot project, added dependencies, created a notification sender class, and finally sent a notification request to FCM using Volley library in Android.