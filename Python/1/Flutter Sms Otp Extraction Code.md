**Handling SMS in Flutter: Listening to Incoming Messages and Extracting OTP Codes**

In this article, we'll explore how to listen to incoming SMS messages in a Flutter application and extract OTP (One-Time Password) codes from them. We'll also discuss the concept of regular expressions and how they're used in this example.

**Listening to Incoming SMS Messages**

To listen to incoming SMS messages in a Flutter application, we'll use the `sms` package, which provides a simple way to access the device's SMS database. We'll create a method called `startListening()` that initializes the SMS listener and sets up a callback function to handle new incoming messages.

```dart
void startListening() {
  telephony.listenIncomingSms(
    onNewMessage: (SmsMessage message) {
      // Handle new incoming SMS message
    }
  );
}
```

In this code, `telephony` is an instance of the `Telephony` class, which is provided by the `sms` package. We call the `listenIncomingSms()` method and pass a callback function, `onNewMessage`, that will be triggered whenever a new incoming SMS message is received.

**Extracting OTP Codes using Regular Expressions**

Now, let's assume that the incoming SMS message contains an OTP code, and we want to extract it. We can use regular expressions to achieve this. Regular expressions are a powerful tool for matching patterns in text.

In our example, we'll use a regular expression to match the first set of 6 digits in the incoming SMS message, which we assume is the OTP code.

```dart
RegExp otpRegex = RegExp(r'\b\d{6}');
String sms = message.body ?? '';
String otpCode = otpRegex.firstMatch(sms)?.group(0);
```

In this code, we create a regular expression object `otpRegex` that matches any sequence of exactly 6 digits (`\d{6}`). The `\b` is a word boundary, which ensures that we match a complete group of digits and not part of a larger number.

We then extract the OTP code from the incoming SMS message by calling `otpRegex.firstMatch(sms)` and getting the first match. We use the `?.group(0)` syntax to get the matched text.

**Putting it all Together**

Here's the complete code:

```dart
import 'package:flutter/material.dart';
import 'package:sms/sms.dart';

class SmsExample extends StatefulWidget {
  @override
  _SmsExampleState createState() => _SmsExampleState();
}

class _SmsExampleState extends State<SmsExample> {
  SmsMessage _message;
  SmsController _smsController = SmsController();

  void startListening() {
    _smsController.listenIncomingSms(
      onNewMessage: (SmsMessage message) {
        String sms = message.body ?? '';
        RegExp otpRegex = RegExp(r'\b\d{6}');
        String otpCode = otpRegex.firstMatch(sms)?.group(0);
        print('OTP Code: $otpCode');
      }
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('SMS Example'),
      ),
      body: Center(
        child: ElevatedButton(
          onPressed: startListening,
          child: Text('Start Listening'),
        ),
      ),
    );
  }
}
```

In this example, we create a `SmsExample` widget that contains a button to start listening to incoming SMS messages. When the button is pressed, the `startListening()` method is called, which sets up the SMS listener and defines the callback function to handle new incoming messages. The callback function extracts the OTP code from the incoming message using regular expressions and prints it to the console.

This is a basic example of how to listen to incoming SMS messages and extract OTP codes using regular expressions in a Flutter application.