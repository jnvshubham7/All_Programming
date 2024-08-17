import os
import shutil

# Source directory where the files and folders are located
source_dir = "your_source_directory_path_here"  # Replace with your source directory path

# Function to extract the first word from a name
def get_first_word(name):
    # Split by space, underscore, and period
    return name.strip().split('_')[0].split(' ')[0].split('.')[0]

# Loop through all the files in the source directory
for filename in os.listdir(source_dir):
    # Skip directories
    if os.path.isdir(os.path.join(source_dir, filename)):
        continue
    
    # Get the first word from the file name, case insensitive
    file_first_word = get_first_word(filename).lower()

    # Loop through all the folders in the source directory
    for foldername in os.listdir(source_dir):
        folder_path = os.path.join(source_dir, foldername)

        # Skip files
        if not os.path.isdir(folder_path):
            continue

        # Get the first word from the folder name, case insensitive
        folder_first_word = get_first_word(foldername).lower()

        # Check if the first word of the folder name matches the first word of the file name
        if file_first_word == folder_first_word:
            # Move the file to the corresponding folder
            shutil.move(os.path.join(source_dir, filename), os.path.join(folder_path, filename))
            print(f"Moved: {filename} -> {foldername}")
            break  # Stop searching for a folder once the match is found

print("Files moved successfully, if matches were found.")
