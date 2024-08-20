import os

def remove_user_content(directory):
    for root, dirs, files in os.walk(directory):  # Walk through every folder and file
        for filename in files:
            if filename.endswith(".md"):  # Process only Markdown files
                file_path = os.path.join(root, filename)

                with open(file_path, 'r') as file:
                    lines = file.readlines()

                new_lines = []
                skip = False

                for line in lines:
                    if line.strip().startswith("## USER"):
                        skip = True
                    if not skip:
                        new_lines.append(line)
                    if line.strip().startswith("## ASSISTANT"):
                        skip = False
                        new_lines.append(line)

                with open(file_path, 'w') as file:
                    file.writelines(new_lines)

                print(f"Processed {file_path}")

# Usage
directory = "D:\GitHub\All Notes"
remove_user_content(directory)
