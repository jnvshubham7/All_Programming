import re
import os

def process_markdown_files_in_directory(directory, prefix="image_"):
    # Regular expression to match markdown image syntax ![alt text](image_url)
    image_pattern = r'!\[.*?\]\((.*?)\)'

    # Walk through the directory tree
    for root, dirs, files in os.walk(directory):
        for filename in files:
            if filename.endswith('.md'):
                original_file_path = os.path.join(root, filename)
                
                # Extract directory, filename, and extension
                dir_name, base_name_ext = os.path.split(original_file_path)
                base_name, ext = os.path.splitext(base_name_ext)
                
                # Create new file name with prefix
                new_file_name = f"{prefix}{base_name}{ext}"
                new_file_path = os.path.join(dir_name, new_file_name)
                
                # Read the original file content
                with open(original_file_path, 'r', encoding='utf-8') as file:
                    content = file.read()
                
                # Find all image URLs
                images = re.findall(image_pattern, content)
                
                if images:
                    # Remove all image references from the original content
                    content = re.sub(image_pattern, '', content)
                    
                    # Clean up any extra newlines created by the removal
                    content = re.sub(r'\n\s*\n', '\n\n', content)
                    
                    # Add a newline before appending images if not already present
                    if not content.endswith('\n'):
                        content += '\n'
                    
                    # Write the modified content back to the original file
                    with open(original_file_path, 'w', encoding='utf-8') as file:
                        file.write(content)
                    
                    # Write the image URLs in Markdown format to the new file
                    with open(new_file_path, 'w', encoding='utf-8') as file:
                        for image in images:
                            file.write(f"![Image]({image})\n")
                    
                    print(f"Processed file: {original_file_path}")
                    print(f"Image URLs extracted to: {new_file_path}")
                else:
                    print(f"No images found in file: {original_file_path}")

# Example usage:
directory_path = r'D:\GitHub\All Notes'  # Update this path to your root directory
process_markdown_files_in_directory(directory_path)
