**Handling API Calls and Google Maps in Android Apps**

### Introduction

In this article, we will go over a simple example of how to fetch train location data from an imaginary API and display it on a Google Map within an Android app activity. We will also discuss a common issue, "Address already in use: bind", and how to resolve it.

### Android App Structure

The Android app consists of a `TrainApiClient` class, a `TrainLocation` model class, and a `TrainMapActivity` activity class. The `TrainApiClient` class provides a method to fetch train location data from an API, which is then used in the `TrainMapActivity` class to display the data on a Google Map.

### Code Example

Here is the code example:

```java
public class TrainApiClient {
    public void getTrainLocation(String trainNumber, TrainLocationCallback callback) {
        // Implement logic to fetch train location data from API
        // Example: Make HTTP request to railway API and parse response
        // On success, call callback.onTrainLocationReceived(trainLocation)
        // On failure, call callback.onFailure(errorMessage)
    }

    public interface TrainLocationCallback {
        void onTrainLocationReceived(TrainLocation trainLocation);
        void onFailure(String errorMessage);
    }
}

public class TrainLocation {
    private double latitude;
    private double longitude;

    // Getters and setters
}

public class TrainMapActivity extends AppCompatActivity {
    private GoogleMap googleMap;
    private TrainApiClient trainApiClient;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_train_map);

        // Initialize TrainApiClient
        trainApiClient = new TrainApiClient();

        // Obtain the SupportMapFragment and get notified when the map is ready to be used.
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                .findFragmentById(R.id.map);
        mapFragment.getMapAsync(new OnMapReadyCallback() {
            @Override
            public void onMapReady(GoogleMap map) {
                googleMap = map;
                // Enable zoom controls
                googleMap.getUiSettings().setZoomControlsEnabled(true);
                // Add marker for train location
                addTrainMarker();
            }
        });
    }

    private void addTrainMarker() {
        // Fetch train location data from API
        trainApiClient.getTrainLocation("12345", new TrainApiClient.TrainLocationCallback() {
            @Override
            public void onTrainLocationReceived(TrainLocation trainLocation) {
                // Add marker for train location on map
                LatLng trainLatLng = new LatLng(trainLocation.getLatitude(), trainLocation.getLongitude());
                googleMap.addMarker(new MarkerOptions().position(trainLatLng).title("Train Location"));
                // Move camera to train location
                googleMap.moveCamera(CameraUpdateFactory.newLatLngZoom(trainLatLng, 10));
            }

            @Override
            public void onFailure(String errorMessage) {
                // Handle error
                Toast.makeText(TrainMapActivity.this, "Failed to fetch train location: " + errorMessage, Toast.LENGTH_SHORT).show();
            }
        });
    }
}
```

### Resolving the "Address already in use: bind" Issue

The error "Address already in use: bind" typically indicates that your application is trying to bind to a port that is already in use by another process. This is a common issue when working with network applications, servers, or services that require network binding.

To resolve this issue, follow these steps:

1. Identify the Conflicting Process:

   - On Windows, use the `netstat` command to identify the process using the port.

     ```sh
     netstat -ano | findstr :<port_number>
     ```
     This command will list the process ID (PID) using the specified port. You can then use the Task Manager or the `tasklist` command to identify the process by its PID.

     ```sh
     tasklist /FI "PID eq <pid>"
     ```
   - On Linux or macOS, use the `lsof` or `netstat` command.

     ```sh
     lsof -i :<port_number>
     ```
     or

     ```sh
     netstat -tlnp | grep <port_number>
     ```
2. Close the Conflicting Process:

   - Stop the process using the Task Manager or the `taskkill` command.

     ```sh
     taskkill /pid <pid>
     ```
   - Alternatively, you can also try using a different port number.
