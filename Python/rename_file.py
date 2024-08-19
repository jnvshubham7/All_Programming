import os
import time
import re

# Directory containing markdown files
directory = r'D:\GitHub\All_Programming\Python\1'

# Function to clean and extract heading
def extract_heading(line):
    # Patterns to remove from the heading
    removal_phrases = [
        "A Guide to Working with async/await",
        "Using Phone Number",
        "A Comprehensive Guide",
        "Verifying OTP"
    ]
    
    # Iterate through each removal phrase and remove it from the heading
    for phrase in removal_phrases:
        if phrase in line:
            line = line.replace(phrase, "").strip()

    # Clean up any leading or trailing colons or whitespace
    heading = line.replace(":", "").strip()
    
    # Remove invalid filename characters
    heading = re.sub(r'[<>:"/\\|?*]', '', heading)
    
    return heading

# Function to rename markdown files based on heading
def rename_markdown_files(directory):
    for filename in os.listdir(directory):
        if filename.endswith(".md"):
            filepath = os.path.join(directory, filename)
            
            try:
                with open(filepath, 'r') as file:
                    first_line = file.readline().strip()
                    
                    # Check if the line is a heading (starts with '**' and ends with '**')
                    if first_line.startswith("**") and first_line.endswith("**"):
                        heading = first_line.strip('*')
                        new_filename = extract_heading(heading) + ".md"
                        new_filepath = os.path.join(directory, new_filename)
                        
                        # Check if the new filename already exists
                        if os.path.exists(new_filepath):
                            print(f"Error: The file '{new_filename}' already exists. Skipping rename for '{filename}'.")
                            continue
                        
                        # Try renaming the file with retry logic
                        for attempt in range(5):
                            try:
                                os.rename(filepath, new_filepath)
                                print(f'Renamed "{filename}" to "{new_filename}"')
                                break
                            except PermissionError as e:
                                print(f"PermissionError: Could not rename '{filename}' on attempt {attempt + 1} due to: {e}")
                                time.sleep(1)  # Wait for 1 second before retrying
            except Exception as e:
                print(f"Error: Could not process '{filename}' due to: {e}")

# Run the function
rename_markdown_files(directory)
