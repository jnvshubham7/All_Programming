**Handling Resend OTP Timer in Flutter**

### Cancel Previous Timer and Set a New One

To handle the resend OTP timer in Flutter, you can create a method `_startResendOTPTimer()` that cancels the previous timer and sets a new one.

**Code:**
```dart
void _startResendOTPTimer() {
  logger.d("Starting resend OTP timer...");
  _resendOTPTimer?.cancel();
  _resendOTPTimer = Timer(Duration(seconds: 30), () {
    setState(() {
      logger.d("Resend OTP timer completed.");
      _canResendOTP = true;
    });
  });
}
```
**Example:**

Suppose you have a `_canResendOTP` variable that indicates whether the user can resend the OTP or not. When the user clicks the resend OTP button, you can call the `_startResendOTPTimer()` method to start the timer.

```dart
ElevatedButton(
  child: Text("Resend OTP"),
  onPressed: () {
    _startResendOTPTimer();
  },
)
```
In this example, the `_startResendOTPTimer()` method is called when the user clicks the resend OTP button. The method cancels any previous timer and sets a new timer that waits for 30 seconds. When the timer completes, it updates the `_canResendOTP` variable to `true`, which allows the user to resend the OTP.

### Canceling the Timer

To cancel the timer, you can use the `cancel()` method provided by the `Timer` class.

**Code:**
```dart
_resendOTPTimer?.cancel();
```
**Example:**

Suppose you want to cancel the timer when the user clicks the resend OTP button again before the timer completes. You can call the `cancel()` method to stop the timer.

```dart
ElevatedButton(
  child: Text("Resend OTP"),
  onPressed: () {
    _resendOTPTimer?.cancel();
    _startResendOTPTimer();
  },
)
```
In this example, the `cancel()` method is called before starting a new timer, ensuring that the previous timer is stopped. This prevents multiple timers from running concurrently and ensures that the user can only resend the OTP after the previous timer has completed.