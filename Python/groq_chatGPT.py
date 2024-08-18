import os
from dotenv import load_dotenv
from groq import Groq

# Load environment variables
load_dotenv()

# Initialize the Groq client
client = Groq(
    api_key=os.environ.get("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"),
)

# Define the messages for the chat completion
messages = [
    {
        "role": "user",
        "content": "Explain the importance of fast language models",
    }
]

# Perform the chat completion
try:
    chat_completion = client.chat.completions.create(
        messages=messages,
        model="llama3-8b-8192",
    )

    # Print the response
    print(chat_completion.choices[0].message.content)
except Exception as e:
    print(f"An error occurred: {e}")
