Here’s a point-wise article with code examples for sending notifications from your server using Firebase Cloud Messaging (FCM):

### Steps to Send Notifications Using Java and Firebase Cloud Messaging

#### 1. **Create a New Java Project**
   - Start by creating a new Java project in your preferred Integrated Development Environment (IDE) like IntelliJ IDEA or Eclipse.

#### 2. **Add Required Dependencies**
   - Add the necessary dependencies for handling JSON and HTTP requests.
   - If you are using Maven, add the following to your `pom.xml`:

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

#### 3. **Create the Notification Sender Class**
   - Create a `FCMNotificationSender` class to handle sending notifications via FCM.

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

   - Replace `YOUR_SERVER_KEY` with your FCM server key.
   - Replace `USER_DEVICE_TOKEN` with a valid device token for testing.

#### 4. **Trigger Notifications When Sending Messages**
   - To trigger notifications, integrate the server-side logic with your Firebase database.

##### Option 1: **Using Firebase Functions**

   1. **Initialize Firebase Functions**:
      - Run the following command to initialize Firebase functions:

      ```sh
      firebase init functions
      ```

   2. **Create a Function to Send Notifications**:

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

   3. **Deploy the Function**:
      - Deploy the Firebase function using the following command:

      ```sh
      firebase deploy --only functions
      ```

##### Option 2: **Using a REST API**

   1. **Create a REST API Endpoint**:
      - Create a REST API using Java and a framework like Spring Boot.

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

   2. **Call the REST API from Your Android App**:
      - Modify your Android app to call the REST API when sending a message:

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

      - Replace `YOUR_SERVER_URL` with the URL of your server.

### Conclusion
By following these steps, you can successfully send notifications to users when they receive new messages in your chat application. You can choose to implement the server-side logic using Firebase Functions or a REST API depending on your specific requirements.