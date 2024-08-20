**Java Programming Fundamentals and Advanced Topics**

**Extending the Android Activity Class**

When developing an Android app, it is common to create custom activities that extend the `Activity` class provided by the Android framework. This allows you to add custom logic and functionality to your activity.

**Example: Creating a Custom Activity**

Here is an example of a custom activity that extends the `Activity` class:
```java
import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // Perform any additional initialization tasks here
    }
}
```
In this example, the `MainActivity` class extends the `Activity` class and overrides the `onCreate()` method. The `onCreate()` method is called when the activity is created and provides an opportunity to initialize the activity and set its layout.

**Setting the Activity Layout**

The `setContentView()` method is used to set the layout for the activity. Here, `R.layout.activity_main` refers to the XML file that defines the user interface for the activity.

### **Adding a ValueEventListener**

In Java app development, the `addValueEventListener` method is used to attach a listener to a specific location in the Firebase Realtime Database and receive updates whenever the data at that location changes.

**Example: Using addValueEventListener**

Here is an example of how to use `addValueEventListener` to listen for changes to a node in the Firebase Realtime Database:
```java
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

public class MainActivity {

    private DatabaseReference databaseReference;

    public MainActivity() {
        // Initialize the Firebase Database reference
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        databaseReference = database.getReference("your_node_name");
    }

    public void addDatabaseListener() {
        // Attach a ValueEventListener to the database reference
        databaseReference.addValueEventListener(new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                // This method will be called when the data at the specified location is changed
                // Retrieve the updated data from the dataSnapshot parameter
                String value = dataSnapshot.getValue(String.class);
                System.out.println("Updated value: " + value);
            }

            @Override
            public void onCancelled(DatabaseError databaseError) {
                // This method will be called if the listener is cancelled or there is an error
                System.out.println("Error: " + databaseError.getMessage());
            }
        });
    }
}
```
In this example, the `addDatabaseListener()` method attaches a ValueEventListener to the specified node in the Firebase Realtime Database and listens for updates to the data at that location. The `onDataChange()` method is called whenever the data at the specified location is changed, and the `onCancelled()` method is called if the listener is cancelled or there is an error.