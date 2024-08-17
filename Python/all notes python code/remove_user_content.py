import os

def remove_user_content(directory):
    for filename in os.listdir(directory):
        if filename.endswith(".md"):  # Process only Markdown files
            file_path = os.path.join(directory, filename)

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

            print(f"Processed {filename}")

# Usage
directory = "D:\GitHub\All Notes\ChatGPT Notes1"
remove_user_content(directory)
