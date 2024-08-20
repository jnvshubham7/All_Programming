**Understanding Android Intents and Concurrency Fundamentals**

**Intents in Android**

In Android app development, intents are messages that allow different components of an app to communicate with each other. Intents can be explicit or implicit, and they can carry additional information called extras, which are key-value pairs used to pass data between components.

### Explicit Intent

An explicit intent is used to launch a specific activity or service that is already known to the system.

```java
Intent intent = new Intent(MainActivity.this, SecondActivity.class);
startActivity(intent);
```

### Implicit Intent

An implicit intent is used to perform an action, such as viewing a webpage, and the system will identify and launch a component that can handle the intent.

```java
Intent intent = new Intent(Intent.ACTION_VIEW);
intent.setData(Uri.parse("https://www.example.com"));
startActivity(intent);
```

### Intents and Extras

Intents can also carry additional information called extras, which are key-value pairs used to pass data between components.

```java
Intent intent = new Intent(MainActivity.this, SecondActivity.class);
intent.putExtra("message", "Hello, Second Activity!");
startActivity(intent);
```

In the `SecondActivity`, the value can be retrieved using:

```java
String message = getIntent().getStringExtra("message");
```

**Runnable Interface**

In Java app development, the `Runnable` interface is used to define a task that can be executed by a thread. It represents a single unit of work that can run concurrently with other tasks.

```java
public class MyRunnable implements Runnable {
    public void run() {
        // Task logic goes here
    }
}
```

**onActivityResult()**

In Android app development, `onActivityResult()` is a method used in the Android framework that is called when an activity you launched exits and sends a result back. It is commonly used when one activity starts another activity and expects a result from it.

```java
public class ActivityA extends AppCompatActivity {
    private static final int REQUEST_CODE = 1;

    public void startSecondActivity() {
        Intent intent = new Intent(this, ActivityB.class);
        startActivityForResult(intent, REQUEST_CODE);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_CODE) {
            if (resultCode == RESULT_OK) {
                // Handle the successful result returned from Activity B
                String result = data.getStringExtra("result");
                Toast.makeText(this, "Result: " + result, Toast.LENGTH_SHORT).show();
            } else if (resultCode == RESULT_CANCELED) {
                // Handle the canceled result
                Toast.makeText(this, "Activity B canceled", Toast.LENGTH_SHORT).show();
            }
        }
    }
}
```

In this example, `ActivityA` starts `ActivityB` and expects a result from it. In the `onActivityResult()` method, `ActivityA` checks if the result is OK or canceled and handles it accordingly.