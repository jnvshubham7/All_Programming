### Understanding Key Android Development Concepts

#### 1. `startActivity()`

To launch an activity in Android, use the `startActivity(intent)` method. This method initiates the activity specified by the `Intent` object.

**Example:**

```java
Intent intent = new Intent(MainActivity.this, SecondActivity.class);
startActivity(intent);
```

#### 2. Implicit Intent

An implicit intent does not specify a target component but describes the action to be performed. The system determines the appropriate component to handle the intent.

**Example:**

```java
Intent intent = new Intent(Intent.ACTION_VIEW);
intent.setData(Uri.parse("https://www.example.com"));
startActivity(intent);
```

#### 3. Passing Data with Intents

You can pass additional data with an intent using key-value pairs known as extras.

**Sending Data:**

```java
Intent intent = new Intent(MainActivity.this, SecondActivity.class);
intent.putExtra("message", "Hello, Second Activity!");
startActivity(intent);
```

**Receiving Data:**

```java
String message = getIntent().getStringExtra("message");
```

#### 4. Runnable

The `Runnable` interface represents a task that can be executed by a thread. It has a single method, `run()`, where the task logic is implemented.

**Example:**

```java
Runnable task = new Runnable() {
    @Override
    public void run() {
        // Task logic here
    }
};
```

#### 5. `onActivityResult()`

This method handles results from an activity that was started for a result. It is used to process the data returned by the called activity.

**Example in Activity A:**

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
                String result = data.getStringExtra("result");
                Toast.makeText(this, "Result: " + result, Toast.LENGTH_SHORT).show();
            } else if (resultCode == RESULT_CANCELED) {
                Toast.makeText(this, "Activity B canceled", Toast.LENGTH_SHORT).show();
            }
        }
    }
}
```

**Example in Activity B:**

```java
public class ActivityB extends AppCompatActivity {
    public void returnResult() {
        Intent resultIntent = new Intent();
        resultIntent.putExtra("result", "Hello from Activity B");
        setResult(RESULT_OK, resultIntent);
        finish();
    }
}
```

#### 6. `final`

The `final` keyword in Java is used to declare constants, prevent method overriding, or prevent inheritance.

**Constant Variable:**

```java
final int MAX_VALUE = 10;
```

**Method:**

```java
public final void myMethod() {
    // Method implementation
}
```

**Class:**

```java
public final class MyFinalClass {
    // Class implementation
}
```

**Local Variable:**

```java
public void myMethod() {
    final int localVar = 5;
}
```

#### 7. `onBindViewHolder()`

In RecyclerView, `onBindViewHolder()` binds data to a view holder.

**Example:**

```java
@Override
public void onBindViewHolder(ViewHolder holder, int position) {
    // Bind data to the holder
}
```

#### 8. `setOnTouchListener()`

This method assigns a touch listener to a view to detect and handle touch events.

**Example:**

```java
myView.setOnTouchListener(new View.OnTouchListener() {
    @Override
    public boolean onTouch(View v, MotionEvent event) {
        int action = event.getAction();
        switch (action) {
            case MotionEvent.ACTION_DOWN:
                // Handle action down
                break;
            case MotionEvent.ACTION_MOVE:
                // Handle action move
                break;
            case MotionEvent.ACTION_UP:
                // Handle action up
                break;
        }
        return true;
    }
});
```

#### 9. `SentViewHolder`

A `SentViewHolder` class holds references to views within a RecyclerView item layout.

**Example:**

```java
public class SentViewHolder extends RecyclerView.ViewHolder {
    public TextView messageTextView;
    public TextView timeTextView;

    public SentViewHolder(View itemView) {
        super(itemView);
        messageTextView = itemView.findViewById(R.id.message_text_view);
        timeTextView = itemView.findViewById(R.id.time_text_view);
    }
}
```

#### 10. `Context`

In Android, `Context` provides information about the application environment and is essential for accessing resources and system services.

#### 11. Glide

Glide is an image loading and caching library for efficient image management.

**Example:**

```java
Glide.with(context)
     .load("https://www.example.com/image.jpg")
     .into(imageView);
```

#### 12. `@SuppressLint("SetTextI18n")`

This annotation suppresses lint warnings related to setting text directly on UI elements without considering internationalization.

**Example:**

```java
@SuppressLint("SetTextI18n")
@Override
protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    TextView textView = findViewById(R.id.textView);
    textView.setText("Hello, World!");
}
```

#### 13. `onSupportNavigateUp()`

This method handles the "Up" navigation action in an activity using ActionBar or Toolbar.

**Example:**

```java
@Override
public boolean onSupportNavigateUp() {
    // Handle up navigation
    return super.onSupportNavigateUp();
}
```

#### 14. `requireNonNull()`

This method checks if an object reference is non-null and throws a `NullPointerException` if it is null.

**Example:**

```java
Objects.requireNonNull(object, "Object cannot be null");
```

#### 15. URI

A URI (Uniform Resource Identifier) identifies resources such as files or web pages. Use `Uri.parse()` to create a URI from a string.

**Example:**

```java
Uri uri = Uri.parse("https://www.example.com");
```