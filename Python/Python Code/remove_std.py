import os

# Directory where your files are located
directory = r"D:\GitHub\All Notes"

# Traverse through all directories and subdirectories
for root, dirs, files in os.walk(directory):
    # Process each .md file
    for filename in files:
        if filename.endswith(".md"):
            file_path = os.path.join(root, filename)

            # Read the file content
            with open(file_path, "r") as file:
                content = file.read()

            # Remove all occurrences of "std::"
            updated_content = content.replace("std::", "")

            # Write the updated content back to the file
            with open(file_path, "w") as file:
                file.write(updated_content)

print("All occurrences of 'std::' have been removed from the files.")
