**Verifying One-Time Password (OTP) in Flutter**

### Step 1: Get Current Context and Settings Arguments

```
FirebaseAuth auth = FirebaseAuth.instance;
final Map<String, dynamic> args = ModalRoute.of(context)!.settings.arguments as Map<String, dynamic>;
final String verificationId = args['verificationId'];
```

### Step 2: Generate PhoneAuthCredential with Verification ID and OTP

```
PhoneAuthCredential credential = PhoneAuthProvider.credential(
  verificationId: verificationId,
  smsCode: smsCode,
);
```

### Step 3: Attempt Sign-In with the Generated Credential

```
try {
  await auth.signInWithCredential(credential);
  // OTP verification successful, navigate to the next screen
  logger
      .d("OTP verification successful, navigating to /operator_attendance");
  Navigator.pushReplacementNamed(context, '/home_screen');
} catch (e) {
  // Failed to sign in, handle error
  logger.e("Failed to sign in: $e");
  setState(() {
    _isLoading = false;
  });
}
```

### Code Example:

```
void _verifyOTP(String smsCode) async {
  logger.d("Starting OTP verification...");
  FirebaseAuth auth = FirebaseAuth.instance;

  final Map<String, dynamic> args =
      ModalRoute.of(context)!.settings.arguments as Map<String, dynamic>;
  final String verificationId = args['verificationId'];

  PhoneAuthCredential credential = PhoneAuthProvider.credential(
    verificationId: verificationId,
    smsCode: smsCode,
  );

  try {
    await auth.signInWithCredential(credential);
    logger
        .d("OTP verification successful, navigating to /operator_attendance");
    Navigator.pushReplacementNamed(context, '/home_screen');
  } catch (e) {
    logger.e("Failed to sign in: $e");
    setState(() {
      _isLoading = false;
    });
  }
}
```

Note: Make sure to import the required libraries (e.g., `firebase_auth`) and initialize the Firebase instance in your app before using this code.