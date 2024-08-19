import os

# Directory where your files are located
directory = r"D:\GitHub\All_Programming\Python\1"

# List all files in the directory that match the pattern
files = sorted([f for f in os.listdir(directory) if f.endswith(".md")])

# Rename files
for filename in files:
    old_path = os.path.join(directory, filename)
    # Remove "Development_" and change "p" to "P"
    new_filename = filename.replace(".dart.", ".").replace("_", " ").replace("-", " ").replace(".md.", ".").title()
    #do first letter capital of each word of file name 
    
  
    
    new_path = os.path.join(directory, new_filename)
    os.rename(old_path, new_path)

print("Files have been renamed successfully.")
