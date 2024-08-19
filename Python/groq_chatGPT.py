import os
import re
from groq import Groq

# Initialize the Groq client with the API key directly
client = Groq(
    api_key="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",
)

# Define the prompt for renaming files
rename_prompt_template = "Based on the content below, suggest a concise and valid file name:\n\nContent:\n\n{}"

# Define the directories
input_directory = "d:\\GitHub\\All Notes\\Computer Networks"
output_directory = "D:\\GitHub\\All Notes\\ChatGPT Notes1"
renamed_directory = "D:\\GitHub\\All Notes\\ChatGPT Renamed Notes"

# Ensure the directories exist
os.makedirs(output_directory, exist_ok=True)
os.makedirs(renamed_directory, exist_ok=True)

# Function to clean and extract the suggested file name
def extract_filename(suggestion):
    # Extract first valid line that resembles a filename (ignoring common intro phrases)
    lines = suggestion.strip().splitlines()
    for line in lines:
        # Check if the line contains a valid filename structure and doesn't start with generic phrases
        if not line.startswith(("Based on the content,", "I suggest", "A concise and valid")):
            cleaned_filename = re.sub(r'[\\/*?:"<>|]', "", line).strip()
            if cleaned_filename:  # Ensure it's not empty
                return cleaned_filename.replace(" ", "_") + ".md"
    return None  # Fallback if no valid filename is found

# Step 1: Process each Markdown file in the input directory
for filename in os.listdir(input_directory):
    if filename.endswith(".md"):
        # Read the content of the Markdown file
        with open(os.path.join(input_directory, filename), 'r') as file:
            content = file.read()

        # Combine the content with the prompt
        messages = [
            {
                "role": "user",
                "content": f"rewrite in article in point wise with code and example without giving any details you should direct start writing article from first line with heading and subheading explain in details\n\n{content}",
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

            # Prepend the file name under the article heading
            article_with_filename = f"# Article from {filename}\n\n{response_content}"

            # Define the output file path
            output_file_path = os.path.join(output_directory, f"processed_{filename}")

            # Write the response to the new file
            with open(output_file_path, 'w') as output_file:
                output_file.write(article_with_filename)

            print(f"Processed and saved: {output_file_path}")

        except Exception as e:
            print(f"An error occurred while processing {filename}: {e}")

# Step 2: Read the newly created files and get suggestions for new filenames
for processed_filename in os.listdir(output_directory):
    if processed_filename.endswith(".md"):
        processed_filepath = os.path.join(output_directory, processed_filename)
        
        # Read the content of the processed file
        with open(processed_filepath, 'r') as file:
            processed_content = file.read()

        # Ask Groq for a file name suggestion based on the entire content
        name_suggestion_message = [
            {
                "role": "user",
                "content": rename_prompt_template.format(processed_content),
            }
        ]

        try:
            name_suggestion_completion = client.chat.completions.create(
                messages=name_suggestion_message,
                model="llama3-8b-8192",
            )

            # Get the suggested file name from the response
            suggested_name_raw = name_suggestion_completion.choices[0].message.content
            suggested_name = extract_filename(suggested_name_raw)

            if suggested_name:
                # Define the new file path
                renamed_file_path = os.path.join(renamed_directory, suggested_name)

                # Rename the file with the cleaned suggested name
                os.rename(processed_filepath, renamed_file_path)

                print(f"File {processed_filename} renamed to {suggested_name}")
            else:
                print(f"No valid filename could be extracted for {processed_filename}")

        except Exception as e:
            print(f"An error occurred while renaming {processed_filename}: {e}")

print("All files processed and renamed.")