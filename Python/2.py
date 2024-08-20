import os
import re

# Directory where your files are located
directory = r"D:\GitHub\All_Programming\Python\1"

# List all files in the directory that match the pattern
files = sorted([f for f in os.listdir(directory) if f.endswith(".md")])

# Function to process the filename
def process_filename(filename):
    # Replace spaces before capital letters and ensure there's one space after each capital letter
    new_filename = re.sub(r'\s*([A-Z])', r'\1', filename)  # Remove space before capital letters
    # new_filename = re.sub(r'([A-Z])', r'\1 ', new_filename)  # Add space after capital letters
    new_filename = re.sub(r'\s+', ' ', new_filename)  # Replace multiple spaces with a single space
    return new_filename.strip()  # Strip any leading/trailing spaces

# Rename files
for filename in files:
    old_path = os.path.join(directory, filename)
    
    # Perform replacements and capitalization
    new_filename = process_filename(filename)
    
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
