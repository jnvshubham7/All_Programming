import os
import re
from groq import Groq

# Initialize the Groq client with the API key directly
client = Groq(
    api_key="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",
)

# Define the directories
input_directory = r"D:\GitHub\tandem_flutter_app\lib\screens\Authentication"  # Dart files directory
output_directory = r"D:\GitHub\All_Programming\Python\test"  # Output directory for MD files

# Ensure the output directory exists
os.makedirs(output_directory, exist_ok=True)

# Prompt for Groq processing
prompt = "write article with code and example with detail explanation(all concepts are in flutter )(not exaplin my code just explain the concept and take small examples )"

# Function to extract all Dart functions from the file content
def extract_functions(content):
    # Regular expression to match Dart functions
    function_pattern = r'(?:[a-zA-Z0-9_<>]+)\s+[a-zA-Z0-9_]+\(.*?\)\s*\{.*?\}'
    return re.findall(function_pattern, content, re.DOTALL)

# Process each Dart file in the directory
for filename in os.listdir(input_directory):
    if filename.endswith(".dart"):
        # Read the content of the Dart file
        with open(os.path.join(input_directory, filename), 'r') as file:
            content = file.read()

        # Extract all functions from the file
        functions = extract_functions(content)

        for index, function_code in enumerate(functions):
            # Prepare the prompt with the extracted function
            messages = [
                {
                    "role": "user",
                    "content": f"{prompt}\n\n{function_code}",
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

                # Extract the function name for the markdown file name
                function_name_match = re.search(r'[a-zA-Z0-9_]+(?=\()', function_code)
                function_name = function_name_match.group(0) if function_name_match else f"function_{index+1}"

                # Define the output file path
                output_file_path = os.path.join(output_directory, f"{function_name}.md")

                # Write the response to the new file
                with open(output_file_path, 'w') as output_file:
                    output_file.write(response_content)

                print(f"Processed and saved: {output_file_path}")

            except Exception as e:
                print(f"An error occurred while processing {filename}: {e}")
