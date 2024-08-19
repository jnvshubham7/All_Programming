import os

# Directory where your files are located
directory = "D:\GitHub\All Notes\Data Structures"

# List all files in the directory that match the pattern
files = sorted([f for f in os.listdir(directory) if f.startswith("DSA ") and f.endswith(".md")])

# Rename files
for filename in files:
    old_path = os.path.join(directory, filename)
    new_filename = filename.replace(" ", "_")  # Remove "Notes_" from the filename
    new_path = os.path.join(directory, new_filename)
    os.rename(old_path, new_path)

print("Files have been renamed successfully.")
