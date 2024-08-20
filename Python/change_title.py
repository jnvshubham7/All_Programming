import os
import re

# Directory where your files are located
directory = r"D:\GitHub\All_Programming\Python\1"

# List all files in the directory that match the pattern
files = sorted([f for f in os.listdir(directory) if f.endswith(".md")])

# Rename files
for filename in files:
    old_path = os.path.join(directory, filename)
    
    # Perform replacements and capitalization
    new_filename = (
        filename
        .title()
        .replace(".Md", ".md")
    )
    
  
    new_path = os.path.join(directory, new_filename)
    
    # Add a suffix if the new file name already exists
    if os.path.exists(new_path):
        base_name, extension = os.path.splitext(new_filename)
        counter = 1
        while os.path.exists(new_path):
            new_filename = f"{base_name} {counter}{extension}"
            new_path = os.path.join(directory, new_filename)
            counter += 1
    
    os.rename(old_path, new_path)

print("Files have been renamed successfully.")
