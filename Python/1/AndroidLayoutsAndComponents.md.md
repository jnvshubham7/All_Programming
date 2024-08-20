## Understanding Android Layouts and Project Components

### Layout Types

1. **RelativeLayout and ConstraintLayout**
   - **RelativeLayout**: Older layout that allows positioning of child views relative to each other or the parent.
   - **ConstraintLayout**: Advanced version providing more flexibility with positioning and alignment of child views.

2. **LinearLayout**
   - Used to arrange child views either vertically or horizontally.
   - **Orientation**: Defines the direction of the layout (vertical or horizontal).

3. **FrameLayout**
   - Used to stack child views on top of each other.
   - Suitable for including other layouts or views.

4. **Space Layout**
   - Utilized to add spacing between views.
   - Example: Adding space between buttons in a horizontal layout.

### Project Overview

#### [ChatsApp](https://github.com/jnvshubham7/ChatsApp)

1. **Splash Screen**:
   - Implemented using `RelativeLayout`.

2. **OTP Authentication**:
   - Integrated using `ConstraintLayout`.
   - Utilized `CardView` for mobile number input.
   - Employed `FirebaseAuth` for OTP authentication.
   - Data binding used.
   - `OnClickListener` for OTP sending button.
   - `Intent.putExtra` for sending phone number.
   - Progress dialog for OTP progress feedback.

3. **OTP Verification and Profile Setup**:
   - `ConstraintLayout` used for layout.
   - `CardView` for OTP input section.
   - Utilized GitHub dependency `mukesh` for OTP view.
   - `PhoneAuthOptions` class for verification.
   - Used `PhoneAuthProvider.verifyPhoneNumber(options)`.

4. **Profile Setup Activity**:
   - `ConstraintLayout` used.
   - `StorageReference` for image upload to Firebase Storage.
   - Stored user profile information in Firebase Realtime Database.
   - Dialog for progress.
   - Navigation to `MainActivity` on successful setup.

5. **Main Activity**:
   - `ShimmerRecyclerView` for shimmer effect.
   - `BottomNavigationView` for navigation (Chats, Status, Calls).
   - `CircleImageView` for profile images.
   - List view for messages with different layouts for status and calls.
   - Added sentiment reactions on messages.
   - Implemented RecyclerView with horizontal layout for status and vertical for messages.

#### [Expense Tracker](https://github.com/jnvshubham7/Expense_Tracker)

1. **Splash Screen**:
   - Simple email and password authentication.
   - Integrated Google sign-up and sign-in.
   - Forgot password feature to reset old password.

#### [Effervescence'21 CA](https://github.com/jnvshubham7/Effervescence_21_CA)

1. **Splash Screen**:
   - Simple email and password authentication stored in Firebase.
   - Integrated Google sign-up and sign-in.
   - Toolbar added after login.
   - Admin access for task assignment restricted to official email IDs.

### Activity Lifecycle

1. **onCreate()**:
   - Initializes essential components.
   
   ```java
   @Override
   protected void onCreate(Bundle savedInstanceState) {
       super.onCreate(savedInstanceState);
       // Initialize components here
   }
   ```

2. **onStart()**:
   - Prepares the Activity to be visible.

   ```java
   @Override
   protected void onStart() {
       super.onStart();
       // Setup for visibility
   }
   ```

3. **onResume()**:
   - Activity becomes interactive.

   ```java
   @Override
   protected void onResume() {
       super.onResume();
       // Resume operations
   }
   ```

4. **onPause()**:
   - Release resources and pause operations.

   ```java
   @Override
   protected void onPause() {
       super.onPause();
       // Pause operations
   }
   ```

5. **onStop()**:
   - Cleanup and release resources.

   ```java
   @Override
   protected void onStop() {
       super.onStop();
       // Perform cleanup
   }
   ```

6. **onDestroy()**:
   - Final cleanup before destruction.

   ```java
   @Override
   protected void onDestroy() {
       super.onDestroy();
       // Final cleanup
   }
   ```

### `setOnClickListener` Example

1. **Setting Click Listener**:
   - Used to handle user interactions with UI elements.

   ```java
   import android.app.Activity;
   import android.os.Bundle;
   import android.view.View;
   import android.widget.Button;
   import android.widget.Toast;

   public class MainActivity extends Activity {
       private Button myButton;

       @Override
       protected void onCreate(Bundle savedInstanceState) {
           super.onCreate(savedInstanceState);
           setContentView(R.layout.activity_main);

           myButton = findViewById(R.id.my_button);
           myButton.setOnClickListener(new View.OnClickListener() {
               @Override
               public void onClick(View v) {
                   Toast.makeText(MainActivity.this, "Button Clicked", Toast.LENGTH_SHORT).show();
               }
           });
       }
   }
   ```