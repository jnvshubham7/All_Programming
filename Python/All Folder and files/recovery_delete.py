import os
import subprocess

# Define the path to adb executable
ADB_PATH = 'adb'  # Assuming adb is in your PATH, else provide the full path

# Define the directory where you want to save the recovered images
OUTPUT_DIR = 'recovered_images'

def run_adb_command(command):
    """Run an adb command and return the output."""
    result = subprocess.run(f"{ADB_PATH} {command}", shell=True, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"Error running command: {command}\nError: {result.stderr}")
    return result.stdout.strip()

def create_output_dir(directory):
    """Create the output directory if it does not exist."""
    if not os.path.exists(directory):
        os.makedirs(directory)

def pull_images_from_directory(directory, extension):
    """Pull images from a specific directory on the Android device."""
    output_path = os.path.join(OUTPUT_DIR, os.path.basename(directory))
    create_output_dir(output_path)
    images = run_adb_command(f"shell ls {directory}/*.{extension}").split()
    for image in images:
        if image:
            print(f"Pulling {image} to {output_path}...")
            run_adb_command(f"pull {image} {output_path}")
            print(f"Recovered {image} to {output_path}")

if __name__ == "__main__":
    # Make sure the device is connected
    devices = run_adb_command('devices')
    if 'device' in devices:
        print("Device connected. Starting image recovery...")
        
        # Define common directories where deleted images might be temporarily stored
        deleted_image_directories = [
            '/mnt/sdcard/.Trash', 
            '/mnt/sdcard/.RecycleBin', 
            '/mnt/sdcard/.Trash-1000', 
            '/mnt/sdcard/Android/data/com.android.providers.media/Trash', 
            '/mnt/sdcard/Android/data/com.google.android.apps.photos/Trash',
            '/mnt/sdcard/DCIM/.thumbnails',
            '/mnt/sdcard/DCIM/Camera/.thumbnails',
        ]
        extensions = ['jpg', 'jpeg', 'png', 'gif', 'bmp', 'webp']
        
        for directory in deleted_image_directories:
            for extension in extensions:
                pull_images_from_directory(directory, extension)
                
        print("Image recovery complete. Check the 'recovered_images' directory.")
    else:
        print("No device connected. Please connect your device and enable USB debugging.")
