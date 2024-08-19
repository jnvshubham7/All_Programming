import os

# Directory where your files are located
directory = "D:\GitHub\All Notes\Data Structures"

# Start index
start_index = 92

# List all files in the directory that match the pattern
files = sorted([f for f in os.listdir(directory) if f.startswith("DSA_part_") and f.endswith(".md")])

# Rename files
for i, filename in enumerate(files, start=start_index):
    old_path = os.path.join(directory, filename)
    new_filename = f"DSA_part_{i}.md"
    new_path = os.path.join(directory, new_filename)
    os.rename(old_path, new_path)

print("Files have been renamed successfully.")
