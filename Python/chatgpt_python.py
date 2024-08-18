from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

# Set up Selenium WebDriver (update the path to ChromeDriver if necessary)
service = Service(executable_path=r'D:\C Drive Software\chromedriver.exe')
driver = webdriver.Chrome(service=service)

# Open ChatGPT website
driver.get("https://chat.openai.com")

# Wait for the page to load and manually log in (or automate login if you're allowed)
time.sleep(30)  # Wait time for manual login (adjust as needed)

# Function to interact with ChatGPT
def interact_with_chatgpt(prompt):
    # Locate the chat input box
    chatbox = driver.find_element(By.XPATH, '//textarea[@name="input"]')
    chatbox.send_keys(prompt)
    chatbox.send_keys(Keys.RETURN)  # Press Enter to submit
    time.sleep(10)  # Wait for the response to generate

    # Capture the response (XPath might need to be adjusted based on the website's structure)
    response = driver.find_element(By.XPATH, '//div[contains(@class, "response-class")]').text
    return response

# Example usage
prompt = "Write an article about sorting algorithms in C++, Java, and Python."
response = interact_with_chatgpt(prompt)

# Save the response to a file
with open('response.md', 'w', encoding='utf-8') as file:
    file.write(response)

# Close the browser when done
driver.quit()
