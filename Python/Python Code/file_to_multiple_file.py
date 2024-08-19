import os

def split_markdown_file(input_file, lines_per_file=100):
    # Ensure the input file exists
    if not os.path.exists(input_file):
        print(f"File {input_file} does not exist.")
        return

    # Read the entire content of the input file
    with open(input_file, 'r', encoding='utf-8') as file:
        lines = file.readlines()

    # Calculate the number of files needed
    total_lines = len(lines)
    num_files = (total_lines // lines_per_file) + (1 if total_lines % lines_per_file != 0 else 0)

    # Split and write lines to new files
    base_name = os.path.splitext(input_file)[0]  # Remove file extension
    for i in range(num_files):
        start = i * lines_per_file
        end = min(start + lines_per_file, total_lines)

        # Find an unused file name
        part_number = i + 1
        output_file = f"{base_name}_Part_{part_number}.md"
        while os.path.exists(output_file):
            part_number += 1
            output_file = f"{base_name}_Part_{part_number}.md"

        # Write the split content to the new file
        with open(output_file, 'w', encoding='utf-8') as out_file:
            out_file.writelines(lines[start:end])

        print(f"Created {output_file} with lines {start + 1} to {end}")

if __name__ == "__main__":
    # Replace with the path to your large markdown file
    input_file_path = r'D:\GitHub\All Notes\Android_chatgpt\Algorithm.md'
    split_markdown_file(input_file_path)
