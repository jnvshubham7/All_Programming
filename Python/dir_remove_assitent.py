import os

def remove_assistant_section(directory):
    for root, dirs, files in os.walk(directory):  # Walk through every folder and file
        for filename in files:
            if filename.endswith(".md"):  # Process only Markdown files
                file_path = os.path.join(root, filename)

                with open(file_path, 'r') as file:
                    lines = file.readlines()

                # Remove lines that start with "## ASSISTANT"
                new_lines = [line for line in lines if not line.strip().startswith("## ASSISTANT")]

                with open(file_path, 'w') as file:
                    file.writelines(new_lines)

                print(f"Processed {file_path}")

# Usage
directory = "D:\GitHub\All Notes"
remove_assistant_section(directory)
