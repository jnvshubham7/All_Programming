import os

# List of folder names
folders = [
    "Algorithm Code Note",
    "Android_Dev_Learning",
    "CN Notes",
    "DBMS Notes",
    "DSA Notes",
    "Flutter Notes",
    "Interview Round",
    "OOPS Code",
    "Oops Notes",
    "OS Notes",
    "Python Developer",
    "SQL Notes",
    "TCS Interview",
    "TCS IPA_Java",
    "Web_Dev_Learning"
]

# Directory where you want to create the folders
base_dir = "D:\GitHub\All Notes"  # Replace with your desired directory path

# Create the folders
for folder in folders:
    os.makedirs(os.path.join(base_dir, folder), exist_ok=True)

print("Folders created successfully.")
