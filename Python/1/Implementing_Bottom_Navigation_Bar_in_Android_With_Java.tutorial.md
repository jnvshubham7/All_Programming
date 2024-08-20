**Implementing Bottom Navigation Bar in Android with Java**

**Creating a Bottom Navigation Bar**

In Android app development, a BottomNavigationView is a widget that provides a navigation bar at the bottom of the screen, allowing users to switch between different screens or activities in your app. To create a BottomNavigationView, follow these steps:

### Step 1: Set the ID and Menu Resource File

In your layout file (e.g., `activity_main.xml`), add the following code:
```xml
<com.google.android.material.bottomnavigation.BottomNavigationView
    android:id="@+id/bottom_navigation"
    app:menu="@menu/bottom_navigation_menu" />
```
Here, we set the ID of the BottomNavigationView to "bottom_navigation" and specify the menu resource file using the `app:menu` attribute.

### Step 2: Create a Menu Resource File

Create a new XML file (e.g., `bottom_navigation_menu.xml`) in the `res/menu` directory of your project. Add the following code:
```xml
<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/navigation_item1"
        android:title="Item 1"
        android:icon="@drawable/ic_item1" />
    <item
        android:id="@+id/navigation_item2"
        android:title="Item 2"
        android:icon="@drawable/ic_item2" />
    <item
        android:id="@+id/navigation_item3"
        android:title="Item 3"
        android:icon="@drawable/ic_item3" />
</menu>
```
Here, we define three menu items with unique IDs, titles, and icons.

### Step 3: Set Up a Listener for Item Selection

In your activity or fragment class, create a reference to the BottomNavigationView and set up a listener to handle item selection:
```java
BottomNavigationView bottomNavigationView = findViewById(R.id.bottom_navigation);
bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
    @Override
    public boolean onNavigationItemSelected(@NonNull MenuItem item) {
        switch (item.getItemId()) {
            case R.id.navigation_item1:
                // Handle item 1 selection
                return true;
            case R.id.navigation_item2:
                // Handle item 2 selection
                return true;
            case R.id.navigation_item3:
                // Handle item 3 selection
                return true;
            default:
                return false;
        }
    }
});
```
Here, we set a listener using the `setOnNavigationItemSelectedListener` method. Inside the listener, we use a switch statement to handle different item selections based on their IDs.

### Example Code

Here is an example of how to implement a BottomNavigationView with three menu items:
```java
// activity_main.xml
<com.google.android.material.bottomnavigation.BottomNavigationView
    android:id="@+id/bottom_navigation"
    app:menu="@menu/bottom_navigation_menu" />

// bottom_navigation_menu.xml
<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/navigation_item1"
        android:title="Item 1"
        android:icon="@drawable/ic_item1" />
    <item
        android:id="@+id/navigation_item2"
        android:title="Item 2"
        android:icon="@drawable/ic_item2" />
    <item
        android:id="@+id/navigation_item3"
        android:title="Item 3"
        android:icon="@drawable/ic_item3" />
</menu>

// MainActivity.java
public class MainActivity extends AppCompatActivity {
    private BottomNavigationView bottomNavigationView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        bottomNavigationView = findViewById(R.id.bottom_navigation);
        bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()) {
                    case R.id.navigation_item1:
                        // Handle item 1 selection
                        return true;
                    case R.id.navigation_item2:
                        // Handle item 2 selection
                        return true;
                    case R.id.navigation_item3:
                        // Handle item 3 selection
                        return true;
                    default:
                        return false;
                }
            }
        });
    }
}
```
This is a basic example of how to use BottomNavigationView in Java to create a bottom navigation bar in an Android app. You can customize the appearance and behavior of the BottomNavigationView further based on your app's requirements.