import openai
import os
import re

# Initialize OpenAI client
client = openai.OpenAI(
    api_key="1ef3482458a84579b12aa43d3f916d66",
    base_url="https://api.aimlapi.com",
)

def extract_conversations(markdown_file):
    with open(markdown_file, 'r', encoding='utf-8') as file:
        content = file.read()

    conversation_pattern = re.compile(r"(## ASSISTANT[\s\S]*?)(?=## ASSISTANT|$)")
    conversations = conversation_pattern.findall(content)
    return conversations

def generate_ai_response(conversation):
    chat_completion = client.chat.completions.create(
        model="mistralai/Mistral-7B-Instruct-v0.2",
        messages=[
            {"role": "system", "content": "You are a helpful assistant."},
            {"role": "user", "content": conversation},
        ],
        temperature=0.7,
        max_tokens=128,
    )
    return chat_completion.choices[0].message.content

def save_conversations(conversations):
    if not os.path.exists("conversations"):
        os.makedirs("conversations")

    for i, conversation in enumerate(conversations):
        # Generate AI response
        ai_response = generate_ai_response(conversation)

        # Use the AI response as part of the file name (sanitize it)
        file_name = ai_response[:30].strip()
        file_name = re.sub(r'[\/:*?"<>|\n]', "", file_name)  # Remove illegal characters and newlines

        # Use a default name if the file name ends up empty after sanitization
        if not file_name:
            file_name = f"conversation_{i+1}.md"

        file_path = os.path.join("conversations", file_name)

        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(conversation.strip())

    print(f"{len(conversations)} conversation files created in the 'conversations' folder.")

def main():
    markdown_file = r'D:\GitHub\All_Programming\Python\conversations.md'
    conversations = extract_conversations(markdown_file)
    save_conversations(conversations)

if __name__ == '__main__':
    main()
