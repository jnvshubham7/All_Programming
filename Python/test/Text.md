### Dismissing a Dialog with Pressed Button

When creating a dialog in Flutter, sometimes you might want to dismiss the dialog when a button is pressed. This can be achieved using the `Navigator.of(context).pop()` method.

Here's how to create a basic example:

```
import 'package:flutter/material.dart';

class DemoApp extends StatefulWidget {
  @override
  _DemoAppState createState() => _DemoAppState();
}

class _DemoAppState extends State<DemoApp> {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('Dialog Demo'),
        ),
        body: Center(
          child: ElevatedButton(
            child: Text('Show Dialog'),
            onPressed: () {
              showDialog(
                context: context,
                builder: (BuildContext context) {
                  // create a dialog
                  return AlertDialog(
                    title: Text('Title'),
                    content: Text('Content'),
                    actions: [
                      TextButton(
                        child: Text('OK'),
                        onPressed: () {
                          // dismiss the dialog
                          Navigator.of(context).pop();
                        },
                      ),
                    ],
                  );
                },
              );
            },
          ),
        ),
      ),
    );
  }
}
```

In the above code:

*   We create a basic `MaterialApp` with an `ElevatedButton` in the `body` of the `Scaffold`.
*   When the button is pressed, it shows a dialog using the `showDialog` method.
*   The dialog has a `TextButton` inside the `actions` property.
*   The `onPressed` property of the `TextButton` is used to call a function. In this case, we're calling `Navigator.of(context).pop()` to dismiss the dialog.

When you run the app and press the button, you'll see a dialog with an "OK" button. When you press the "OK" button, the dialog will be dismissed.

Note: The `Navigator.of(context).pop()` method will only work if you're currently in a `Navigator` context.