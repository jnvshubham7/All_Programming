**Handling Background SMS Messages in Flutter**

### Defining the Background SMS Handler

To handle background SMS messages in a Flutter app, you need to define a function that will be called when a message is received. This function is called `backgroundMessageHandler`.

```dart
void backgroundMessageHandler(SmsMessage message) {
    // handle the message here
}
```

### Registering the Background SMS Handler

To register the `backgroundMessageHandler` function with the SMS messaging service, you need to add the following code in your app's `main` function:

```dart
void main() {
    // Initialize SMS messaging service
    const AndroidIniSettings androidInitSettings = const AndroidInitSettings();
    final AndroidInitializationSettings initializationSettingsAndroid = AndroidInitializationSettings('com.example FLTapp');
    final FirebaseApp app = FirebaseApp.initializeApp(
        FirebaseOptions(
            apiKey: 'YOUR_API_KEY',
            appId: 'YOUR_APP_ID',
            messagingSenderId: 'YOUR_SEND_ID',
            projectId: 'YOUR_PROJECT_ID',
        ),
        initializationSettingsAndroid,
    );

    // Register the background SMS handler
    Messaging.getToken().then((token) {
        FirebaseMessaging.onMessage.listen((message) {
            // handle the message here
        });
        FirebaseMessaging.onMessageId(messageId) {
            // handle the message here
        });
        FirebaseMessaging.onConfigChanges();
    }).catchError((error) {
        // handle the error here
    });
}
```

### Example Usage

Here's an example of how you can use the `backgroundMessageHandler` function to log received SMS messages:

```dart
void backgroundMessageHandler(SmsMessage message) {
    logger.i("Received background SMS: ${message.body}");
}
```

In this example, when a background SMS message is received, the `backgroundMessageHandler` function is called with the `SmsMessage` object as an argument. The function then logs the received message to the Android device's log using the `logger.i` method.

Note: Make sure to replace `'YOUR_API_KEY'`, `'YOUR_APP_ID'`, `'YOUR_SEND_ID'`, and `'YOUR_PROJECT_ID'` with your actual Firebase API key, app ID, sender ID, and project ID, respectively.