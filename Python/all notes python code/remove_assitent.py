import os

def remove_assistant_section(directory):
    for filename in os.listdir(directory):
        if filename.endswith(".md"):  # Process only Markdown files
            file_path = os.path.join(directory, filename)

            with open(file_path, 'r') as file:
                lines = file.readlines()

            # Remove lines that start with "## ASSISTANT"
            new_lines = [line for line in lines if not line.strip().startswith("## ASSISTANT")]

            with open(file_path, 'w') as file:
                file.writelines(new_lines)

            print(f"Processed {filename}")

# Usage
directory = "D:\GitHub\All Notes\ChatGPT Notes1"
remove_assistant_section(directory)
