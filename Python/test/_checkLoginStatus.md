**Checking Login Status in Flutter Using Firebase Authentication**

### Problem Statement

To check if a user is already logged in when launching a Flutter app using Firebase Authentication.

### Solution

To solve this problem, we can use the `FirebaseAuth` instance to check the current user and then navigate to the home screen if the user is already logged in.

### Code Snippet

```dart
void _checkLoginStatus() async {
  logger.d("Checking login status...");
  FirebaseAuth auth = FirebaseAuth.instance;
  User? user = auth.currentUser;
  if (user != null) {
    logger.d("User already logged in, navigating to home screen");
    Navigator.pushReplacementNamed(context, '/home_screen');
  }
}
```

### Explanation

1.  **Get the Firebase Authentication Instance**: We start by getting an instance of the `FirebaseAuth` class, which is the primary class for interacting with Firebase Authentication.

    ```dart
    FirebaseAuth auth = FirebaseAuth.instance;
    ```

2.  **Get the Current User**: We then use the `currentUser` property of the `FirebaseAuth` instance to get the current user.

    ```dart
    User? user = auth.currentUser;
    ```

3.  **Check if the User is Null**: We check if the `user` is null or not. If the user is null, it means the user is not logged in.

    ```dart
    if (user != null) {
    ```

4.  **Navigate to Home Screen**: If the user is not null, it means the user is already logged in. We then use the `Navigator` class to navigate to the home screen.

    ```dart
    Navigator.pushReplacementNamed(context, '/home_screen');
    ```

### Example

Let's say we have a login screen and after a successful login, we want to navigate to the home screen. We can call the `_checkLoginStatus` function after a successful login:

```dart
Future<void> login(String email, String password) async {
  try {
    await FirebaseAuth.instance.signInWithEmailAndPassword(email: email, password: password);
    _checkLoginStatus();
  } catch (e) {
    print(e);
  }
}
```

In this example, after a successful login, the `_checkLoginStatus` function will be called which will check if the user is already logged in. If the user is logged in, it will navigate to the home screen.