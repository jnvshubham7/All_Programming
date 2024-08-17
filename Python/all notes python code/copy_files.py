import os
import shutil

def copy_files(src_dir, dest_dir):
    # Create the destination directory if it doesn't exist
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    
    # Walk through the source directory
    for root, dirs, files in os.walk(src_dir):
        for file in files:
            # Full path of the source file
            src_file = os.path.join(root, file)
            # Copy file to the destination directory
            shutil.copy(src_file, dest_dir)
            print(f'Copied: {src_file}')

# Example usage
source_directory = r'C:\Users\Shubham\Downloads\2024-08-17-conversations'
destination_directory = r'D:\GitHub\All Notes\ChatGPT Notes1'

copy_files(source_directory, destination_directory)
