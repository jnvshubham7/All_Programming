**Setting Up a Spring Boot Backend and Android Frontend for FCM Notifications**

### Backend

#### Configuring the Spring Boot Application

**Create Required Classes**
Create the `FCMNotificationSender` and `NotificationController` classes as described previously.

**Run the Spring Boot Application**
Open the `src/main/java/com/example/demo/DemoApplication.java` file (or the file with the `@SpringBootApplication` annotation) and run the application by right-clicking and selecting `Run Java`.

### Frontend: Android Application

#### Setting Up the Android Application in Android Studio

**Install Android Studio**
Download and install [Android Studio](https://developer.android.com/studio).

**Create a New Project**
Open Android Studio and select `Start a new Android Studio project`. Choose a template (e.g., Empty Activity) and configure your project.

**Add Volley Dependency**
Open `build.gradle` (Module: app) and add the following dependency:
```gradle
implementation 'com.android.volley:volley:1.2.1'
```
Sync the project.

**Add Network Permission**
Open `AndroidManifest.xml` and add the internet permission:
```xml
<uses-permission android:name="android.permission.INTERNET" />
```
**Create the Method to Send Notification**
In your MainActivity or the appropriate activity, add the method to send a notification:
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
**Call the Method**
Call this method when you need to send a notification, e.g., in a button click event:
```java
Button sendNotificationButton = findViewById(R.id.send_notification_button);
sendNotificationButton.setOnClickListener(v -> {
    String token = "USER_DEVICE_TOKEN"; // Replace with actual device token
    String title = "New Message";
    String message = "You have received a new message";
    sendNotificationToUser(token, title, message);
});
```
### Running and Testing

**Run the Spring Boot Application**
Ensure the Spring Boot application is running by following the instructions in the backend setup. Verify that it starts without errors and is listening on the expected port (default is 8080).

**Run the Android Application**
Connect an Android device or start an emulator. Run the application on the device/emulator. Test the notification sending functionality by triggering the appropriate action in your app (e.g., clicking a button).

**Testing the Endpoint**
Use tools like Postman or `curl` to test the `/sendNotification` endpoint of your Spring Boot application.

### Example `curl` Command
```sh
curl -X POST http://localhost:8080/sendNotification -H "Content-Type: application/json" -d '{
  "token": "USER_DEVICE_TOKEN",
  "title": "Test Notification",
  "body": "This is a test notification"
}'
```
By following these steps, you can set up, run, and test your Spring Boot backend and Android frontend applications.