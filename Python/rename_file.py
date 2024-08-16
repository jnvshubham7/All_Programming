import os
import re

def remove_numbers_and_hyphens_from_filename(directory):
    # Only process the files in the current directory, not subdirectories
    for filename in os.listdir(directory):
        file_path = os.path.join(directory, filename)
        
        if os.path.isfile(file_path):
            # Remove numbers and hyphens from the filename
            new_filename = re.sub(r'[\d-]+', '', filename)
            new_file_path = os.path.join(directory, new_filename)
            
            # Rename the file if the new filename is different
            if file_path != new_file_path:
                os.rename(file_path, new_file_path)
                print(f'Renamed: {file_path} -> {new_file_path}')

# Specify the directory you want to start with
directory_to_rename = 'D:\GitHub\All Notes'

# Call the function
remove_numbers_and_hyphens_from_filename(directory_to_rename)
