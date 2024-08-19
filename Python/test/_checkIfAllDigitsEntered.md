**Function to Check if All Digits are Entered**

### Checking If All Digits Are Entered in OTP Field

In this article, we will discuss how to implement a function to check if all digits are entered in an OTP (One-Time Password) field.

### Functionality

The `_checkIfAllDigitsEntered` function checks if all digits are entered in the OTP field by comparing the length of the text entered in the OTP field with the expected length of the OTP.

### Code
```
void _checkIfAllDigitsEntered() {
  setState(() {
    _isButtonEnabled = otpTextEditingController.text.length == _otpLength;
  });
}
```
### Explanation

*   `_checkIfAllDigitsEntered` is the function name.
*   `setState` is used to rebuild the widget tree. It's used when we want to update our UI based on some condition.
*   `_isButtonEnabled` is a boolean variable that is updated based on the condition.
*   `otpTextEditingController.text.length` gives us the length of the text entered in the OTP field.
*   `_otpLength` is the expected length of the OTP.