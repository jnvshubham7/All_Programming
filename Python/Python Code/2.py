import os

# Define the content for each section, excluding the main heading
sections = {
    "01_Basics.md": """
   1. Flutter Tutorial
   2. Flutter | An introduction to the open source SDK by Google
   3. Flutter - Architecture Application
   4. Android Studio Setup for Flutter Development
   5. Getting Started with Cross-Platform Mobile Application using Flutter
   6. Flutter Development in Ubuntu 20.04
""",
    "02_Key_Widgets.md": """
   1. What is Widgets in Flutter?
   2. Container class in Flutter
   3. Scaffold class in Flutter with Examples
   4. MaterialApp class in Flutter
   5. Drawer Widget in Flutter
   6. Flutter - AppBar Widget
   7. Flutter - RichText Widget
""",
    "03_UI_Components.md": """
   1. Flutter - Tabs
   2. Flutter - Horizontal List
   3. Flutter - Expansion Tile Card
   4. Icon Class in Flutter
   5. Expanded Class in Flutter
   6. Flutter - Dialogs
   7. Flutter - Circular & Linear Progress Indicators
   8. Flutter - Staggered Grid View
""",
    "04_Design_Animations.md": """
   1. Customizing Fonts in Flutter
   2. Flutter - Skeleton Text
   3. Flutter - Themes
   4. Flutter - Lazy Loader
   5. Flutter - UI Orientation
   6. Flutter - Animation in Route Transition
   7. Flutter - Physics Simulation in Animation
   8. Flutter - Radial Hero Animation
   9. Flutter - Hinge Animation
   10. Flutter - Lottie Animation
""",
    "05_Forms_Gestures.md": """
   1. Form Validation in Flutter
   2. Designing a Form Submission Page in Flutter
   3. Flutter - Gestures
""",
    "06_Navigation_Routing.md": """
   1. URLs in Flutter
   2. Routes and Navigator in Flutter
   3. Flutter - WebSockets
   4. Flutter - Named Routes
   5. Flutter - Arguments in Named Routes
   6. Multi Page Applications in Flutter
   7. Flutter - Updating Data on the Internet
   8. Flutter - Fetching Data From the Internet
   9. Flutter - Deleting Data On The Internet
   10. Flutter - Sending Data To The Internet
   11. Flutter - Send Data to Screen
""",
    "07_Hardware_Interaction.md": """
   1. Gallery Access and Camera in Flutter
   2. Camera Access in Flutter
   3. Background local notifications in Flutter
   4. Restrict Landscape mode in Flutter
""",
    "08_Sample_Flutter_Apps.md": """
   1. Basic Quiz App In Flutter API
   2. A Hello World App using Flutter
   3. Flutter - Simple PDF Generating App
   4. Flutter - Magic 8 Ball App
""",
    "09_Advance_Concepts.md": """
   1. Flutter - Read and Write Data on Firebase
   2. Mail and SMS in Flutter
   3. Making Calls in Flutter
   4. FAB - Speed Dial in Flutter
   5. Flutter - Wakelock
   6. HTTP GET Response in Flutter
"""
}

# Create the directory
directory = "flutter"
os.makedirs(directory, exist_ok=True)

# Create and write each section to its respective file in the new directory
for file_name, content in sections.items():
    file_path = os.path.join(directory, file_name)
    with open(file_path, 'w') as file:
        file.write(content)
    print(f'File "{file_path}" created and content written successfully.')
