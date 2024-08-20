import os

# List of file names (without the .md extension)
file_names = [
    "01_Basics",
    "02_Key_Widgets",
    "03_UI_Components",
    "04_Design_Animations",
    "05_Forms_Gestures",
    "06_Navigation_Routing",
    "07_Hardware_Interaction",
    "08_Sample_Flutter_Apps",
    "09_Advance_Concepts"
]

# Directory where the folders will be created
base_dir = "./flutter"

# Create the base directory if it doesn't exist
if not os.path.exists(base_dir):
    os.makedirs(base_dir)

# Create a folder for each file name, removing underscores
for name in file_names:
    folder_name = name.replace("_", " ")
    folder_name = folder_name.replace("0", "")
    folder_path = os.path.join(base_dir, folder_name)
    os.makedirs(folder_path, exist_ok=True)

print("Folders created successfully!")
