**Extracting OTP Code from SMS messages using Dart**

### Listening to incoming SMS messages

```dart
void startListening() {
    telephony.listenIncomingSms(
      onNewMessage: (SmsMessage message) {
        // code goes here
      },
    );
}
```

### Extracting OTP code from SMS message

The OTP code is typically a 6-digit sequence of digits. We can use regular expressions to extract it from the SMS message body.

```dart
String sms = message.body ?? '';
RegExp otpRegex = RegExp(r'\b\d{6}\b');
Matcher matcher = otpRegex.firstMatch(sms);
String otpCode = matcher?.group(0) ?? '';
```

### Code explanation

* `sms` variable holds the SMS message body.
* `otpRegex` is a regular expression that matches a 6-digit sequence of digits (e.g., `\b\d{6}\b`).
* `matcher` is used to match the regular expression pattern in the `sms` string.
* `group(0)` returns the entire match, which is the 6-digit OTP code.
* If no match is found, `otpCode` remains empty.

### Example

Suppose the SMS message body is: `"Your OTP is 123456 to verify your account."`

Code execution:

1. `sms` becomes `"Your OTP is 123456 to verify your account."`.
2. `otpRegex` matches the pattern `\b\d{6}\b`, which is `123456`.
3. `matcher` is assigned the match, `123456`.
4. `group(0)` returns the entire match, `123456`.
5. `otpCode` becomes `"123456"`.

### Output

`otpCode` now holds the extracted OTP code: `"123456"`.