import os
import re
import requests
from PIL import Image
from io import BytesIO

# Directory containing your files
directory = "D:\\GitHub\\All_Programming\\Python"

# Function to reduce image size
def reduce_image_size(image_url):
    try:
        response = requests.get(image_url)
        image = Image.open(BytesIO(response.content))
        
        # Calculate new dimensions
        width, height = image.size
        new_width = int(width * 0.5)
        new_height = int(height * 0.5)

        # Resize the image
        image = image.resize((new_width, new_height), Image.LANCZOS)

        # Save the image to a temporary file
        temp_image_path = "temp_image.jpg"
        image.save(temp_image_path, optimize=True, quality=85)

        # Upload or handle the optimized image (Placeholder)
        optimized_image_url = "optimized_" + image_url
        return optimized_image_url
    except Exception as e:
        print(f"Error processing image {image_url}: {e}")
        return image_url

# Function to process each file in the directory
def process_files_in_directory(directory):
    for filename in os.listdir(directory):
        if filename.endswith(".md"):  # Assuming your files are Markdown
            file_path = os.path.join(directory, filename)

            with open(file_path, "r") as file:
                content = file.read()

            # Find all image URLs in the file
            image_urls = re.findall(r'!\[\]\((.*?)\)', content)

            # Reduce the size of each image
            for image_url in image_urls:
                new_image_url = reduce_image_size(image_url)
                content = content.replace(image_url, new_image_url)

            # Save the updated content back to the file
            with open(file_path, "w") as file:
                file.write(content)

# Run the script
process_files_in_directory(directory)
