import os
import re

def extract_conversations(markdown_file):
    with open(markdown_file, 'r', encoding='utf-8') as file:
        content = file.read()

    # Regular expression to match conversation blocks between "## USER" and "## USER" (or end of file)
    conversation_pattern = re.compile(r"(## USER[\s\S]*?)(?=## USER|$)")

    conversations = conversation_pattern.findall(content)
    return conversations

def save_conversations(conversations):
    if not os.path.exists("conversations"):
        os.makedirs("conversations")

    for i, conversation in enumerate(conversations):
        # Use the first question in the conversation as a part of the file name
        user_question = re.search(r"## USER\s*(.*)", conversation)
        if user_question:
            file_name = f"conversation_{i+1}_{user_question.group(1)[:30].strip()}.md"
        else:
            file_name = f"conversation_{i+1}.md"

        # Ensure file name is safe
        file_name = re.sub(r'[\/:*?"<>|]', "", file_name)
        
        file_path = os.path.join("conversations", file_name)

        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(conversation.strip())

    print(f"{len(conversations)} conversation files created in the 'conversations' folder.")

def main():
    # Path to the input markdown file
    markdown_file = 'D:\GitHub\All_Programming\Python\conversations.md'
    
    # Extract conversations
    conversations = extract_conversations(markdown_file)
    
    # Save each conversation to a separate markdown file
    save_conversations(conversations)

if __name__ == '__main__':
    main()
