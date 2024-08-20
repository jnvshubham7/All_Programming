**Troubleshooting Permission Issues for External Storage**

**Resolving Common Issues**

If the permission dialog for writing to external storage is not appearing on the device when this code runs, it could be due to several reasons:

### 1. Permission Already Granted

If the permission has already been granted to the app previously, the permission dialog will not appear again. Android remembers the user's choice, and subsequent requests for the same permission will be automatically granted.

### 2. Target SDK Version

Starting from Android 6.0 (API level 23), apps must request dangerous permissions at runtime. However, if your app's target SDK version is below 23, the permission will be automatically granted without showing the permission dialog. Make sure your app's target SDK version is 23 or higher to trigger the permission dialog.

### 3. Permission Groups

WRITE_EXTERNAL_STORAGE is part of the STORAGE permission group. If your app has already been granted permission for the entire storage group (e.g., READ_EXTERNAL_STORAGE), it will automatically have WRITE_EXTERNAL_STORAGE permission as well.

### 4. Automatic Permissions

Some permissions, including WRITE_EXTERNAL_STORAGE, are considered "normal" permissions on Android versions prior to Android 11. Apps targeting these versions are granted these permissions automatically without any user interaction.

### 5. User's Previous Choice

If the user previously denied the permission and selected the "Don't ask again" option, the permission dialog will not appear again. In such cases, users need to manually enable the permission from the app settings.

### Troubleshooting Steps

To ensure the permission dialog appears during development, you can try the following steps:

* Revoke the permission from the app settings on your device and then run the app again to trigger the permission dialog.
* Ensure that your app's target SDK version is set to 23 or higher in the app's build.gradle file.
* Make sure you're testing on a device with an Android version that requires runtime permission requests (Android 6.0 or higher).
* If the WRITE_EXTERNAL_STORAGE permission is already part of a permission group that has been granted, you won't see a separate dialog for it.

### Code Adjustments

To address potential issues, the following code adjustments were made:

```java
private void saveLocation() {
    // Check for write permission
    if (ContextCompat.checkSelfPermission(this, Manifest.permission.WRITE_EXTERNAL_STORAGE) != PackageManager.PERMISSION_GRANTED) {
        ActivityCompat.requestPermissions(this, new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE}, 2);
        Toast.makeText(this, "Please grant permission to save location", Toast.LENGTH_SHORT).show();
        return;
    }

    // Create directory if it doesn't exist
    File directory = new File(getFilesDir(), "groundtruth");
    if (!directory.exists()) {
        if (!directory.mkdirs()) {
            Log.e("SaveLocation", "Failed to create directory");
            return;
        }
    }

    // Create or open CSV file
    File file = new File(directory, "groundtruth.csv");
    try {
        FileWriter writer = new FileWriter(file, true); // 'true' for append mode
        // Get current location
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) == PackageManager.PERMISSION_GRANTED) {
            Location lastKnownLocation = locationManager.getLastKnownLocation(LocationManager.GPS_PROVIDER);
            if (lastKnownLocation != null) {
                double latitude = lastKnownLocation.getLatitude();
                double longitude = lastKnownLocation.getLongitude();

                // Write to CSV file
                writer.write(String.format(Locale.getDefault(), "%f,%f,%s\n", latitude, longitude, selectedClass));
                writer.flush();
                writer.close();
                String message = "Location saved with class: " + selectedClass;
                Toast.makeText(this, message, Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(this, "Location not available", Toast.LENGTH_SHORT).show();
            }
        }
    } catch (IOException e) {
        e.printStackTrace();
        Toast.makeText(this, "Error saving location", Toast.LENGTH_SHORT).show();
    }
}
```

Changes made:

* Used `File file = new File(directory, "groundtruth.csv");` instead of concatenating paths.
* Added error handling for directory creation and file writing operations.
* Moved the location where the permission check for writing to external storage is performed to the beginning of the `saveLocation()` method.