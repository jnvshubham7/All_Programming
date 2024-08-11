import os

def rename_txt_to_md(directory):
    # Walk through all directories and files
    for root, dirs, files in os.walk(directory):
        for filename in files:
            # Check if the file ends with '.txt'
            if filename.endswith('.txt'):
                # Construct the full file path
                txt_file = os.path.join(root, filename)
                # Create the new file name by replacing '.txt' with '.md'
                md_file = os.path.join(root, filename[:-4] + '.md')
                # Rename the file
                os.rename(txt_file, md_file)
                print(f'Renamed: {txt_file} -> {md_file}')

# Specify the directory
directory_path = 'D:\GitHub\All_Programming\java'

# Call the function
rename_txt_to_md(directory_path)
