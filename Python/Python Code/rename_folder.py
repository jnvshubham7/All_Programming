import os

# Function to rename files
def rename_files_in_folder(folder_path):
    for filename in os.listdir(folder_path):
        if os.path.isfile(os.path.join(folder_path, filename)):
            new_name = filename.replace('Notes', '').replace('_', ' ')
            new_name = ' '.join(word.capitalize() for word in new_name.split())
            new_name = new_name.strip()

            file_extension = os.path.splitext(filename)[1]
            new_name += file_extension

            old_file = os.path.join(folder_path, filename)
            new_file = os.path.join(folder_path, new_name)

            os.rename(old_file, new_file)
            print(f'Renamed: {filename} -> {new_name}')

# Function to rename folders
def rename_folders_in_directory(directory_path):
    for folder_name in os.listdir(directory_path):
        folder_path = os.path.join(directory_path, folder_name)

        if os.path.isdir(folder_path):
            new_folder_name = folder_name.replace('Notes', '').replace('_', ' ')
            new_folder_name = ' '.join(word.capitalize() for word in new_folder_name.split())
            new_folder_name = new_folder_name.strip()

            new_folder_path = os.path.join(directory_path, new_folder_name)

            os.rename(folder_path, new_folder_path)
            print(f'Renamed Folder: {folder_name} -> {new_folder_name}')

            rename_files_in_folder(new_folder_path)

# Use the directory where the script is located
main_directory = os.path.dirname(os.path.realpath(__file__))

# Alternatively, specify the directory manually
# main_directory = r'D:\GitHub\All Notes'

# Rename folders and files
rename_folders_in_directory(main_directory)
