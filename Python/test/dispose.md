**Disposing Resources in Flutter: A Step-by-Step Guide**

### Disposing Phone Controller

A phone controller is a common resource that is often used in Flutter applications. When a widget is no longer needed, it is essential to dispose the phone controller to free up system resources.

**Code:**
```dart
void dispose() {
  _phoneController.dispose();
  // ... other dispositions ...
  super.dispose();
}
```
**Example:**
```dart
class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  final _phoneController = PhoneController();

  @override
  void initState() {
    super.initState();
    _phoneController.startListening();
  }

  @override
  void dispose() {
    _phoneController.dispose();
    super.dispose();
  }
}
```
In this example, the `_phoneController` is disposed of in the `dispose` method, ensuring that the phone controller is properly shut down before the widget is removed from the tree.

### Disposing Focus Node

A focus node is used to manage keyboard focus in Flutter applications. It is also essential to dispose of the focus node when a widget is no longer needed.

**Code:**
```dart
void dispose() {
  _phoneController.dispose();
  _focusNode.dispose();
  super.dispose();
}
```
**Example:**
```dart
class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  final _focusNode = FocusNode();
  final _phoneController = PhoneController();

  @override
  void initState() {
    super.initState();
    _focusNode onFocusNode = _focusNode;
    _focusNode.addListener(() {
      if (!_focusNode.hasFocus) {
        _phoneController.stopListening();
      }
    });
  }

  @override
  void dispose() {
    _phoneController.dispose();
    _focusNode.dispose();
    super.dispose();
  }
}
```
In this example, the `_focusNode` is disposed of in the `dispose` method, ensuring that the focus node is properly shut down before the widget is removed from the tree.

### Calling Super.dispose()