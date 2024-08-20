Here is the rewritten article in point-wise format with code and examples:

**Android Development: Tips and Tricks**

### Filtering Even Numbers

**Traditional Approach**

* The `List` class provides various methods for filtering elements, such as `filter()`.
* The `filter()` method takes a predicate (a function that returns `true` or `false`) as an argument.
* Here's an example of using `filter()` to find all even numbers in a list:

```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
List<Integer> evenNumbers = numbers.stream()
        .filter(n -> n % 2 == 0)
        .collect(Collectors.toList());
System.out.println(evenNumbers); // [2, 4, 6, 8, 10]
```

**Lambda Expression Approach**

* Lambda expressions are a concise way to define small, single-method interfaces.
* In this example, a lambda expression is used to define a predicate that checks if a number is even.

```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
List<Integer> evenNumbers = numbers.stream()
        .filter(n -> n % 2 == 0)
        .collect(Collectors.toList());
System.out.println(evenNumbers); // [2, 4, 6, 8, 10]
```

Both approaches produce the same result, but the lambda expression approach is more concise and readable.

### SwitchCompat

**Adding the AndroidX Library**

* Add the AndroidX library to your project by including the following dependency in your app-level `build.gradle` file:

```groovy
implementation 'androidx.appcompat:appcompat:1.3.0'
```

### Using SwitchCompat in Your Java App

* In your XML layout file, add the `SwitchCompat` widget:

```xml
<androidx.appcompat.widget.SwitchCompat
    android:id="@+id/switch_compat"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:text="Switch"
    android:checked="false" />
```

* In your Java code, find the `SwitchCompat` widget by its ID and set an `OnCheckedChangeListener` to handle the switch state changes:

```java
SwitchCompat switchCompat = findViewById(R.id.switch_compat);
switchCompat.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
    @Override
    public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
        if (isChecked) {
            // Switch is turned on
            // Perform your desired action
        } else {
            // Switch is turned off
            // Perform your desired action
        }
    }
});
```

### subscribeToTopic

**Subscribing to a Topic**

* The `subscribeToTopic` method is used in Firebase Cloud Messaging (FCM) to subscribe a device to a specific topic.

Here's an example that demonstrates how to use the `subscribeToTopic` method in Java:

```java
import com.google.firebase.messaging.FirebaseMessaging;

public class SubscribeToTopicExample {
    public static void main(String[] args) {
        // Subscribe a device to the "general" topic
        FirebaseMessaging.getInstance().subscribeToTopic("general");
    }
}
```