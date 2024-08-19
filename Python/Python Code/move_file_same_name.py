import os

# Directory where your files are located
directory = r"D:\GitHub\All Notes\android_chatgpt_after"

# Start index
start_index = 35

# List all files in the directory
files = sorted([f for f in os.listdir(directory) if f.endswith(".md")])

# Rename files
for i, filename in enumerate(files, start=start_index):
    old_path = os.path.join(directory, filename)
    new_filename = f"Algorithm Part {i}.md"
    new_path = os.path.join(directory, new_filename)
    os.rename(old_path, new_path)

print("Files have been renamed successfully.")
