import os
import re

def modify_filenames(directory):
    # Only process the files in the current directory, not subdirectories
    for filename in os.listdir(directory):
        file_path = os.path.join(directory, filename)
        
        if os.path.isfile(file_path):
            # Remove hyphens and replace underscores with spaces
            new_filename = filename.replace('-', '')  # Remove hyphens
            new_filename = new_filename.replace('_', ' ')  # Replace underscores with spaces
            
            new_file_path = os.path.join(directory, new_filename)
            
            # Check if the new filename already exists
            if os.path.exists(new_file_path):
                # Append a suffix to the new filename to avoid conflict
                base, ext = os.path.splitext(new_filename)
                counter = 1
                while os.path.exists(new_file_path):
                    new_filename = f"{base}_{counter}{ext}"
                    new_file_path = os.path.join(directory, new_filename)
                    counter += 1
            
            # Rename the file if the new filename is different
            if file_path != new_file_path:
                os.rename(file_path, new_file_path)
                print(f'Renamed: {file_path} -> {new_file_path}')

# Specify the directory you want to start with
directory_to_rename = r'D:\GitHub\All Notes\ChatGPT Notes'

# Call the function
modify_filenames(directory_to_rename)
