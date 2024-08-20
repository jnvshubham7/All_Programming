**Communication Between Activities and Fragments in Android Apps**

**Introduction to LocalBroadcastManager**

In Android app development, LocalBroadcastManager is a utility class that allows activities and fragments to send and receive broadcasts within the same app. This class provides a simple and efficient way to communicate between different components of an app without the need for external broadcasts. In this article, we will explore how to use LocalBroadcastManager to send and receive custom broadcasts between activities and fragments.

**Unregistering a BroadcastReceiver**

Before we start, let's take a look at how to unregister a BroadcastReceiver in an activity.

```java
localBroadcastManager.unregisterReceiver(receiver);
```

**Sending Custom Broadcasts between Activities**

In Activity A, you can send a custom broadcast using the LocalBroadcastManager as follows:

```java
Intent intent = new Intent("custom_action");
intent.putExtra("message", "Hello from Activity A!");
localBroadcastManager.sendBroadcast(intent);
```

**Receiving Custom Broadcasts in Activity B**

In Activity B, you would create another BroadcastReceiver and register it to listen for the same custom action:

```java
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;

public class ActivityB extends AppCompatActivity {
    private LocalBroadcastManager localBroadcastManager;
    private BroadcastReceiver receiver;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        // ...
        localBroadcastManager = LocalBroadcastManager.getInstance(this);
        IntentFilter intentFilter = new IntentFilter("custom_action");
        receiver = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                String message = intent.getStringExtra("message");
                // Do something with the message
            }
        };
        localBroadcastManager.registerReceiver(receiver, intentFilter);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        localBroadcastManager.unregisterReceiver(receiver);
    }
}
```

**Implementing Fragments**

Fragments are modular components that represent a portion of a user interface (UI) or behavior in an application. They are used to build flexible and reusable UI components that can be combined and rearranged to create different layouts and functionalities.

Here's an example of how a fragment can be implemented in Java:

```java
import android.os.Bundle;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;

public class MyFragment extends Fragment {
    public MyFragment() {
        // Required empty constructor
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_my, container, false);
    }
}
```

**Conclusion**

In this article, we have seen how to use LocalBroadcastManager to send and receive custom broadcasts between activities and fragments in Android apps. We have also introduced fragments and provided an example of how they can be implemented in Java. By using LocalBroadcastManager and fragments, you can create more flexible and reusable UI components that can be easily combined and rearranged to create different layouts and functionalities.