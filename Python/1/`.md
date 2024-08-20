**Sending Notifications from Android App to Users**

**Integrating Firebase Functions and REST API**

When it comes to sending notifications from an Android app to users, incorporating Firebase Functions and REST API simplifies the process. In this article, we will explore both options with code examples to demonstrate how to implement them.

### Using Firebase Functions

**Initializing Firebase Functions**

To begin, initialize Firebase Functions using the following command:
```
firebase init functions
```
**Creating a Function to Send Notifications**

Create a JavaScript function to send notifications when a new message is created:
```javascript
const functions = require('firebase-functions');
const admin = require('firebase-admin');
admin.initializeApp();

exports.sendNotification = functions.database.ref('/chats/{chatId}/messages/{messageId}')
    .onCreate((snapshot, context) => {
        const message = snapshot.val();
        const receiverUid = message.receiverUid;

        return admin.database().ref(`/users/${receiverUid}/token`).once('value').then(tokenSnapshot => {
            const token = tokenSnapshot.val();
            const payload = {
                notification: {
                    title: 'New Message',
                    body: message.text
                }
            };
            return admin.messaging().sendToDevice(token, payload);
        });
    });
```
**Deploying the Function**

Once the function is created, deploy it to Firebase:
```
firebase deploy --only functions
```
### Using a REST API

**Creating a REST API**

Create a simple REST API using Java to listen for new messages and send notifications. For this example, we will use Spring Boot.

**Creating a REST API Endpoint**

Create a Java class to handle the REST API endpoint:
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

class NotificationRequest {
    private String token;
    private String title;
    private String body;

    // Getters and Setters
}
```
**Calling the REST API from Your Android App**

In your Android app, make a POST request to the REST API endpoint with the necessary parameters:
```java
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
Replace `"http://YOUR_SERVER_URL/sendNotification"` with your actual server URL.