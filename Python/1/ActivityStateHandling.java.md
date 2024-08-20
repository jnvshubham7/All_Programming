## Handling Activity State with `savedInstanceState`

### Overview

In Android development, `savedInstanceState` is utilized to preserve and restore the state of an activity during its destruction and recreation. This is crucial for maintaining a seamless user experience, especially during configuration changes or system memory reclaiming.

### Saving and Restoring State

1. **Saving State**  
   Use `onSaveInstanceState()` to store state information:
   
   ```java
   @Override
   protected void onSaveInstanceState(Bundle outState) {
       super.onSaveInstanceState(outState);
       outState.putInt(KEY_COUNTER, counter);
   }
   ```

2. **Restoring State**  
   Retrieve saved data in `onCreate()`:
   
   ```java
   @Override
   protected void onCreate(Bundle savedInstanceState) {
       super.onCreate(savedInstanceState);
       setContentView(R.layout.activity_main);
       
       if (savedInstanceState != null) {
           counter = savedInstanceState.getInt(KEY_COUNTER);
       }
   }
   ```

### Example

Here's a simple implementation with a counter variable:

```java
public class MainActivity extends AppCompatActivity {
    private static final String KEY_COUNTER = "counter";
    private int counter = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        if (savedInstanceState != null) {
            counter = savedInstanceState.getInt(KEY_COUNTER);
        }
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);
        outState.putInt(KEY_COUNTER, counter);
    }
}
```

---

## Introducing Delays with `Handler`

### Overview

`Handler` in Android is used to schedule tasks and manage delays. It allows you to execute code at a specified time in the future.

### Example

To introduce a delay before starting a new activity:

```java
protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_splash_screen);

    Handler handler = new Handler();
    Runnable runnable = () -> {
        Intent intent = new Intent(Splash_Screen_Activity.this, Login_Activity.class);
        startActivity(intent);
    };
    handler.postDelayed(runnable, 500);
}
```

### Explanation

1. **Create Handler**  
   `Handler handler = new Handler();`

2. **Define Runnable**  
   ```java
   Runnable runnable = () -> {
       Intent intent = new Intent(Splash_Screen_Activity.this, Login_Activity.class);
       startActivity(intent);
   };
   ```

3. **Post with Delay**  
   `handler.postDelayed(runnable, 500);`

---

## Using FloatingActionButton (FAB)

### Overview

FloatingActionButton (FAB) is a circular button for primary actions, often used in material design apps.

### Steps to Implement

1. **Add Dependency**  
   Include Material Components in `build.gradle`:
   
   ```groovy
   dependencies {
       implementation 'com.google.android.material:material:1.4.0'
   }
   ```

2. **Define in Layout**  
   Add FAB to your XML layout:
   
   ```xml
   <com.google.android.material.floatingactionbutton.FloatingActionButton
       android:id="@+id/fab"
       android:layout_width="wrap_content"
       android:layout_height="wrap_content"
       android:layout_gravity="bottom|end"
       android:src="@drawable/ic_add"
       app:backgroundTint="@color/colorAccent" />
   ```

3. **Handle Click Event**  
   Set up click listener in Java:
   
   ```java
   FloatingActionButton fab = findViewById(R.id.fab);
   fab.setOnClickListener(v -> {
       // Handle click
   });
   ```

---

## Creating Menus with `MenuInflater`

### Overview

`MenuInflater` converts XML menu resources into menu objects in Android applications.

### Example

1. **Define Menu in XML**  
   Create `res/menu/menu_example.xml`:
   
   ```xml
   <menu xmlns:android="http://schemas.android.com/apk/res/android">
       <item
           android:id="@+id/menu_item_example"
           android:title="Example Item" />
   </menu>
   ```

2. **Inflate Menu**  
   Use `MenuInflater` in your activity:
   
   ```java
   @Override
   public boolean onCreateOptionsMenu(Menu menu) {
       getMenuInflater().inflate(R.menu.menu_example, menu);
       return true;
   }
   ```

3. **Handle Menu Item Selection**  
   Implement `onOptionsItemSelected`:
   
   ```java
   @Override
   public boolean onOptionsItemSelected(MenuItem item) {
       if (item.getItemId() == R.id.menu_item_example) {
           Toast.makeText(this, "Example Item Clicked", Toast.LENGTH_SHORT).show();
           return true;
       }
       return super.onOptionsItemSelected(item);
   }
   ```

---

## Inflating Layouts

### Overview

Inflation in Android involves converting XML layout files into Java objects that represent UI elements.

### Example

1. **Define XML Layout**  
   Create `activity_main.xml`:
   
   ```xml
   <Button
       android:id="@+id/myButton"
       android:layout_width="wrap_content"
       android:layout_height="wrap_content"
       android:text="Click Me" />
   ```

2. **Inflate and Access in Activity**  
   Inflate layout in `onCreate()`:
   
   ```java
   public class MainActivity extends AppCompatActivity {
       private Button myButton;

       @Override
       protected void onCreate(Bundle savedInstanceState) {
           super.onCreate(savedInstanceState);
           setContentView(R.layout.activity_main);
           myButton = findViewById(R.id.myButton);
           myButton.setOnClickListener(v -> 
               Toast.makeText(MainActivity.this, "Button clicked!", Toast.LENGTH_SHORT).show()
           );
       }
   }
   ```

---

## Using `LocalBroadcastManager`

### Overview

`LocalBroadcastManager` sends intents within the app’s local context, avoiding system-wide broadcasts.

### Example

1. **Send Broadcast**  
   In `ActivityA`:
   
   ```java
   import androidx.localbroadcastmanager.content.LocalBroadcastManager;

   public class ActivityA extends AppCompatActivity {
       private LocalBroadcastManager localBroadcastManager;
       private BroadcastReceiver receiver;

       @Override
       protected void onCreate(Bundle savedInstanceState) {
           super.onCreate(savedInstanceState);
           setContentView(R.layout.activity_a);
           
           localBroadcastManager = LocalBroadcastManager.getInstance(this);
           IntentFilter intentFilter = new IntentFilter("custom_action");
           receiver = new BroadcastReceiver() {
               @Override
               public void onReceive(Context context, Intent intent) {
                   String message = intent.getStringExtra("message");
               }
           };
           localBroadcastManager.registerReceiver(receiver, intentFilter);

           Intent intent = new Intent("custom_action");
           intent.putExtra("message", "Hello from Activity A!");
           localBroadcastManager.sendBroadcast(intent);
       }

       @Override
       protected void onDestroy() {
           super.onDestroy();
           localBroadcastManager.unregisterReceiver(receiver);
       }
   }
   ```