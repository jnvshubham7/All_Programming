# Understanding Key Concepts in Android Development

## Output Example

The output for the provided code is:

```
Even numbers (traditional): [2, 4, 6, 8, 10]
Even numbers (lambda): [2, 4, 6, 8, 10]
```

Both traditional and lambda approaches yield the same result. The lambda expression provides a more concise and readable code, especially for simple operations like filtering or mapping elements.

## SwitchCompat

SwitchCompat is a class from the AndroidX library used to create a switch widget that maintains compatibility with older Android versions. It offers additional functionality and styling options compared to the standard Switch widget.

### Usage Steps

1. **Add Dependency**

   Include the AndroidX library in your `build.gradle` file:

   ```groovy
   implementation 'androidx.appcompat:appcompat:1.3.0'
   ```

2. **XML Layout**

   Add the SwitchCompat widget to your XML layout:

   ```xml
   <androidx.appcompat.widget.SwitchCompat
       android:id="@+id/switch_compat"
       android:layout_width="wrap_content"
       android:layout_height="wrap_content"
       android:text="Switch"
       android:checked="false" />
   ```

3. **Java Code**

   Initialize the SwitchCompat and handle state changes:

   ```java
   SwitchCompat switchCompat = findViewById(R.id.switch_compat);
   switchCompat.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
       @Override
       public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
           if (isChecked) {
               // Switch is turned on
           } else {
               // Switch is turned off
           }
       }
   });
   ```

## subscribeToTopic

The `subscribeToTopic` method in Firebase Cloud Messaging (FCM) subscribes a device to a specified topic for messaging.

### Example

```java
import com.google.firebase.messaging.FirebaseMessaging;

public class SubscribeToTopicExample {
    public static void main(String[] args) {
        FirebaseMessaging.getInstance().subscribeToTopic("general")
            .addOnCompleteListener(task -> {
                if (task.isSuccessful()) {
                    System.out.println("Subscription to 'general' topic successful!");
                } else {
                    System.out.println("Failed to subscribe to 'general' topic. Error: " + task.getException());
                }
            });
    }
}
```

## XML Layout Units

### 1. `match_parent`

Specifies that a view should expand to fill the available space of its parent container.

**Example:**

```xml
<LinearLayout
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical">

    <TextView
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="This TextView fills the entire width of the screen" />
</LinearLayout>
```

### 2. `wrap_content`

Sizes a view based on its content, expanding or shrinking to fit.

**Example:**

```java
import android.app.Activity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.LinearLayout;

public class MainActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout mainLayout = new LinearLayout(this);
        mainLayout.setOrientation(LinearLayout.VERTICAL);

        Button button = new Button(this);
        button.setText("Click Me");

        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT,
                LinearLayout.LayoutParams.WRAP_CONTENT
        );
        button.setLayoutParams(layoutParams);

        mainLayout.addView(button);
        setContentView(mainLayout);
    }
}
```

## Layout Managers

### 1. LinearLayout

Arranges child views in a single row or column.

**XML Example:**

```xml
<LinearLayout
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Hello, LinearLayout!" />

    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Click Me" />
</LinearLayout>
```

### 2. RelativeLayout

Positions child views relative to each other or to the parent.

**XML Example:**

```xml
<RelativeLayout
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <Button
        android:id="@+id/button1"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Button 1" />

    <Button
        android:id="@+id/button2"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_toRightOf="@id/button1"
        android:text="Button 2" />
</RelativeLayout>
```

## Units of Measurement

### 1. `dp` (Density-independent Pixels)

Used for specifying dimensions that remain consistent across devices with different screen densities.

**Example:**

```xml
<Button
    android:layout_width="100dp"
    android:layout_height="wrap_content" />
```

### 2. `sp` (Scaled Pixels)

Used for specifying text sizes, scaling with the user's font size preferences.

**Example:**

```xml
<TextView
    android:textSize="16sp"
    android:text="Sample Text" />
```

## Parent Reference

In XML layouts, `parent` refers to the immediate container of a view.

**Example with ConstraintLayout:**

```xml
<androidx.constraintlayout.widget.ConstraintLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:id="@+id/myTextView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        app:layout_constraintStart_toStartOf="parent"
        android:text="Hello, World!" />
</androidx.constraintlayout.widget.ConstraintLayout>
```