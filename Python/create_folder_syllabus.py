import os
import re

# Headings and subheadings dictionary with numbering
structure = {
    "1. Basics": [
        "1.1. Flutter Tutorial",
        "1.2. Flutter | An introduction to the open source SDK by Google",
        "1.3. Flutter - Architecture Application",
        "1.4. Android Studio Setup for Flutter Development",
        "1.5. Getting Started with Cross-Platform Mobile Application using Flutter",
        "1.6. Flutter Development in Ubuntu 20.04"
    ],
    "2. Key Widgets": [
        "2.1. What is Widgets in Flutter?",
        "2.2. Container class in Flutter",
        "2.3. Scaffold class in Flutter with Examples",
        "2.4. MaterialApp class in Flutter",
        "2.5. Drawer Widget in Flutter",
        "2.6. Flutter - AppBar Widget",
        "2.7. Flutter - RichText Widget"
    ],
    "3. UI Components": [
        "3.1. Flutter - Tabs",
        "3.2. Flutter - Horizontal List",
        "3.3. Flutter - Expansion Tile Card",
        "3.4. Icon Class in Flutter",
        "3.5. Expanded Class in Flutter",
        "3.6. Flutter - Dialogs",
        "3.7. Flutter - Circular & Linear Progress Indicators",
        "3.8. Flutter - Staggered Grid View"
    ],
    "4. Design & Animations": [
        "4.1. Customizing Fonts in Flutter",
        "4.2. Flutter - Skeleton Text",
        "4.3. Flutter - Themes",
        "4.4. Flutter - Lazy Loader",
        "4.5. Flutter - UI Orientation",
        "4.6. Flutter - Animation in Route Transition",
        "4.7. Flutter - Physics Simulation in Animation",
        "4.8. Flutter - Radial Hero Animation",
        "4.9. Flutter - Hinge Animation",
        "4.10. Flutter - Lottie Animation"
    ],
    "5. Forms & Gestures": [
        "5.1. Form Validation in Flutter",
        "5.2. Designing a Form Submission Page in Flutter",
        "5.3. Flutter - Gestures"
    ],
    "6. Navigation & Routing": [
        "6.1. URLs in Flutter",
        "6.2. Routes and Navigator in Flutter",
        "6.3. Flutter - WebSockets",
        "6.4. Flutter - Named Routes",
        "6.5. Flutter - Arguments in Named Routes",
        "6.6. Multi Page Applications in Flutter",
        "6.7. Flutter - Updating Data on the Internet",
        "6.8. Flutter - Fetching Data From the Internet",
        "6.9. Flutter - Deleting Data On The Internet",
        "6.10. Flutter - Sending Data To The Internet",
        "6.11. Flutter - Send Data to Screen"
    ],
    "7. Hardware Interaction": [
        "7.1. Gallery Access and Camera in Flutter",
        "7.2. Camera Access in Flutter",
        "7.3. Background local notifications in Flutter",
        "7.4. Restrict Landscape mode in Flutter"
    ],
    "8. Sample Flutter Apps": [
        "8.1. Basic Quiz App In Flutter API",
        "8.2. A Hello World App using Flutter",
        "8.3. Flutter - Simple PDF Generating App",
        "8.4. Flutter - Magic 8 Ball App"
    ],
    "9. Advance Concepts": [
        "9.1. Flutter - Read and Write Data on Firebase",
        "9.2. Mail and SMS in Flutter",
        "9.3. Making Calls in Flutter",
        "9.4. FAB - Speed Dial in Flutter",
        "9.5. Flutter - Wakelock",
        "9.6. HTTP GET Response in Flutter"
    ]
}
# Function to sanitize folder names by removing or replacing invalid characters
def sanitize_folder_name(name):
    return re.sub(r'[<>:"/\\|?*]', '', name)

# Create nested folders based on the structure
for heading, subheadings in structure.items():
    # Sanitize the main heading folder name
    sanitized_heading = sanitize_folder_name(heading)
    
    # Create the main folder for the heading
    if not os.path.exists(sanitized_heading):
        os.makedirs(sanitized_heading)
    
    # Create subfolders for each subheading within the main heading folder
    for subheading in subheadings:
        # Sanitize the subheading folder name
        sanitized_subheading = sanitize_folder_name(subheading)
        subheading_folder = os.path.join(sanitized_heading, sanitized_subheading)
        if not os.path.exists(subheading_folder):
            os.makedirs(subheading_folder)

print("Nested folders created successfully!")