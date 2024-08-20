**Spring Boot and Android Integration: Step-by-Step Guide**

### Running the Spring Boot Application

You can run your Spring Boot application using your Integrated Development Environment (IDE) or from the command line.

#### Using IDE

* Right-click on the main class (usually the class with `@SpringBootApplication`) and select "Run".

#### Using Command Line

* Open a terminal in the project directory and run:
  ```sh
  ./mvnw spring-boot:run
  ```

### Testing the Endpoints

You can test the `/sendNotification` endpoint using tools like Postman or `curl`. For example, using `curl`:
```sh
curl -X POST http://localhost:8080/sendNotification -H "Content-Type: application/json" -d '{
  "token": "USER_DEVICE_TOKEN",
  "title": "Test Notification",
  "body": "This is a test notification"
}'
```

### Integrating with Your Android App

#### Android Integration

To integrate your Spring Boot application with your Android app, you need to add the Volley dependency and send a POST request to your `/sendNotification` endpoint.

### Adding Volley Dependency

* Add the following dependency in your `app/build.gradle`:

```groovy
implementation 'com.android.volley:volley:1.2.1'
```

### Send Notification Method

* Add the following method in your activity where you need to send the notification:

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

### Call the Method

* Call this method whenever you need to send a notification:

```java
sendNotificationToUser("USER_DEVICE_TOKEN", "New Message", "You have received a new message");
```

Replace `"USER_DEVICE_TOKEN"` with the actual device token of the recipient, and replace `"http://YOUR_SERVER_URL/sendNotification"` with the actual URL of your Spring Boot server.

### Setting Up the Spring Boot Application in VS Code

#### Prerequisites

* Install Java Development Kit (JDK).
* Install VS Code and the Java Extension Pack.

#### Steps

* Generate a Spring Boot project using the Spring Initializr.
* Extract the project and open it in VS Code.
* Add the required dependencies (Spring Web, Gson, HttpClient) in the `pom.xml` file.

By following these steps, you'll have a working setup where your Android app can send notifications via your Spring Boot backend using Firebase Cloud Messaging (FCM).