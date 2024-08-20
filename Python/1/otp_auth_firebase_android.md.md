**Implementing OTP Authentication in Android Application using Firebase**

**OTP Authentication**

Implementing OTP authentication in our Android application using Firebase provides an additional layer of security and ensures that only authorized users can access the application.

**Components Used**

* **RelativeLayout** for the splash screen
* **ConstraintLayout** for OTP authentication
* **CardView** for the mobile number input section
* **FirebaseAuth** for OTP authentication
* **Data Binding** for binding the data with the UI components
* **OnClickListener** for triggering OTP sending
* **Intent.putExtra** for sending the phone number
* **ProgressDialog** for visual feedback on OTP progress

**Code Snippet**

```java
// Trigger OTP sending on button click
button.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        ProgressDialog progressDialog = new ProgressDialog(context);
        progressDialog.setMessage("Sending OTP...");
        progressDialog.show();
        PhoneAuthOptions options = PhoneAuthOptions.builder(context, auth, callback, PhoneAuthProvider.ForceResendingToken.NONE).build();
        PhoneAuthProvider.verifyPhoneNumber(options);
    }
});
```

**OTP Verification and Profile Setup**

**Components Used**

* **ConstraintLayout** for the layout
* **CardView** for the OTP input section
* **GitHub dependency 'mukesh'** for OTP view
* **PhoneAuthOptions** class for phone number verification
* **PhoneAuthProvider** for OTP verification
* **Firebase Realtime Database** for storing user profile information

**Code Snippet**

```java
// Handle OTP verification success
PhoneAuthProvider.OnVerificationStateChangedCallbacks callback = new PhoneAuthProvider.OnVerificationStateChangedCallbacks() {
    @Override
    public void onVerificationCompleted(PhoneAuthCredential phoneAuthCredential) {
        user_profile.put("mobile", phone_num);
        user_profile.put("name", name);
        user_reference.child(auth.getUid()).updateChildren(user_profile);
    }
};
```

**Profile Setup Activity**

**Components Used**

* **ConstraintLayout**
* **CardView** for image upload
* **StorageReference** for storing images in Firebase Storage
* **FirebaseDatabase** for storing user profile information
* **ProgressDialog** for displaying progress

**Code Snippet**

```java
// Upload image to Firebase Storage
StorageReference reference = storage.getReference().child("Profiles").child(Objects.requireNonNull(auth.getUid()));
reference.putFile(selectedImage).addOnCompleteListener(task -> {
    dialog.dismiss();
    Intent intent = new Intent(Setup_Profile_Activity.this, Main_Activity.class);
    startActivity(intent);
    finish();
});
```

**Activity Main**

**Components Used**

* **ShimmerRecyclerView** for shimmer effect
* **BottomNavigationView** for bottom navigation
* **CircleImageView** for displaying profile images
* **RecyclerView** for efficient list view
* **Horizontal layout** for status and **vertical layout** for messages

**Extra Features**

* **Sentiment reactions** on every message
* **RecyclerView** for an efficient list view
* **Horizontal layout** for status and **vertical layout** for messages