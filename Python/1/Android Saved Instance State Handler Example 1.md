**Android App Development with Java: Understanding `savedInstanceState` and `Handler`**

**Introduction to `savedInstanceState`**

In Android app development, `savedInstanceState` plays a crucial role in preserving and restoring the state of an activity. This parameter is passed to the `onCreate()` method of an activity and is used to save and restore the state of the activity. In this article, we will explore the usage of `savedInstanceState` and `Handler` in Android app development.

**Usage of `savedInstanceState`**

The `savedInstanceState` parameter is used to save and restore the state of an activity. When an activity is about to be destroyed, the `onSaveInstanceState()` method is called, and you can use it to store key-value pairs into a `Bundle` object. The `Bundle` object represents the state information that needs to be saved.

**Example of Using `savedInstanceState`**

Here's an example of using `savedInstanceState`:

```java
public class MainActivity extends AppCompatActivity {
    private static final String KEY_COUNTER = "counter";
    private int counter = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        if (savedInstanceState != null) {
            // Activity is being recreated, restore the saved state
            counter = savedInstanceState.getInt(KEY_COUNTER);
        }
        // Rest of the initialization code
        // ...
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);
        // Save the state information
        outState.putInt(KEY_COUNTER, counter);
    }
    // Rest of the activity code
    // ...
}
```

In this example, the `MainActivity` class has a counter variable that represents some state information that we want to save and restore. In the `onCreate()` method, we check if the `savedInstanceState` parameter is not null, indicating that the activity is being recreated. If it's not null, we retrieve the saved counter value from the `Bundle` and assign it to the counter variable.

**Usage of `Handler`**

The `Handler` class is used to introduce a delay before starting a new activity in an Android application. Here's an example of using `Handler`:

```java
protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_splash_screen);
    StatusBarUtil.setTransparent(this);
    Handler handler = new Handler();
    Runnable runnable = () -> {
        Intent intent = new Intent(Splash_Screen_Activity.this, Login_Activity.class);
        startActivity(intent);
    };
    handler.postDelayed(runnable, 500);
}
```

In this example, the `Handler` object is created using the default constructor: `Handler handler = new Handler();`. This creates an instance of the `Handler` class, which will be responsible for processing messages and events.

A `Runnable` object is created using a lambda expression: `Runnable runnable = () -> { ... }`. The `Runnable` interface represents a task that can be executed asynchronously.

Inside the `Runnable`s `run()` method, an `Intent` is created to start a new activity: `Intent intent = new Intent(Splash_Screen_Activity.this, Login_Activity.class);`. This sets up an intent to navigate from the current `Splash_Screen_Activity` to the `Login_Activity`.

The `startActivity()` method is called within the `Runnable` to start the new activity: `startActivity(intent);`. This launches the `Login_Activity` and switches the user interface to the new activity.

Finally, the `postDelayed()` method of the `Handler` is called to schedule the execution of the `Runnable` after a specified delay of 500 milliseconds: `handler.postDelayed(runnable, 500);`. This ensures that the new activity is started after the specified delay, allowing the splash screen to be displayed for a certain period before transitioning to the login screen.

**Conclusion**

In this article, we have learned about the usage of `savedInstanceState` in Android app development. We have also seen how `Handler` is used to introduce a delay before starting a new activity. By understanding these concepts, you can develop robust and efficient Android apps that provide a smooth user experience.