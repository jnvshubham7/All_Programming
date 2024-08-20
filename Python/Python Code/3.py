import os
from groq import Groq

# Initialize the Groq client with the API key directly
client = Groq(
    api_key="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",
)

# Define the directory containing the input Markdown files
input_directory = r"D:\GitHub\All_Programming\Python\flutter"
output_directory = r"D:\GitHub\All Notes\ChatGPT Notes1"

# Ensure the output directory exists
os.makedirs(output_directory, exist_ok=True)

# Define the prompt for processing each line
prompt = "write article with code and example with detail explanation (all concepts are in flutter)"

# Iterate over each file in the input directory
for filename in os.listdir(input_directory):
    if filename.endswith(".md"):
        input_file_path = os.path.join(input_directory, filename)

        # Read the content of the Markdown file line by line
        with open(input_file_path, 'r') as file:
            lines = file.readlines()

        # Process each line individually
        for line in lines:
            if line.strip():  # Process only non-empty lines
                # Combine the line with the prompt
                messages = [
                    {
                        "role": "user",
                        "content": f"{prompt}\n\n{line.strip()}",
                    }
                ]

                # Perform the chat completion
                try:
                    chat_completion = client.chat.completions.create(
                        messages=messages,
                        model="llama3-8b-8192",
                    )

                    # Get the response
                    response_content = chat_completion.choices[0].message.content

                    # Define the folder name based on the line content (first 50 characters)
                    folder_name = line.strip()[:50].replace(' ', '_')

                    # Create the folder inside the output directory
                    folder_path = os.path.join(output_directory, folder_name)
                    os.makedirs(folder_path, exist_ok=True)

                    # Define the output file path within the folder
                    output_file_path = os.path.join(folder_path, 'response.md')

                    # Write the response to the new file
                    with open(output_file_path, 'w') as output_file:
                        output_file.write(response_content)

                    print(f"Processed and saved: {output_file_path}")

                except Exception as e:
                    print(f"An error occurred while processing '{line.strip()}': {e}")
