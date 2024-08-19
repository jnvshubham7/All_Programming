**Flutter Implementations of PIN/Password Input**

### **Widget build(BuildContext context)**

**Code**
```
Widget build(BuildContext context) {
  // logger.d("Building PhoneAuthPage UI");
  return Scaffold(
    backgroundColor: Colors.white,
    body: Center(
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 20.0, vertical: 40.0),
        child: ListView(
          children: [
            Column(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Text(
                  'Mobile',
                  style: TextStyle(
                    color: Colors.black,
                    fontSize: 18,
                  ),
                ),
                SizedBox(height: 20),
                pinput.Pinput(
                  length: 10,
                  focusNode: _focusNode,
                  autofillHints: [],
                  onCompleted: (value) {
                    logger.d("Completed with value: $value");
                    _phoneController.text = value;
                  },
                  ...
```
### **PIN/Password Input Widget - pinput**

*   **length**: Specify the length of the PIN/Password input field (`int`): `length: 10`
*   **focusNode**: Set the focus node for the input field (`FocusNode`): `focusNode: _focusNode`
*   **autofillHints**: Disable autofill hints (`List<AutofillHints>`): `autofillHints: []`
*   **onCompleted**: Define a callback function to handle after the PIN/Password input is completed (`Function(String)`): `onCompleted: (value) { ... }`
*   You can also specify other properties like `defaultILLScope`, `styles`, etc.