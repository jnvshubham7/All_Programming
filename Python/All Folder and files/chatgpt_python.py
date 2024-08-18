from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

# Set up Selenium WebDriver (update the path to ChromeDriver if necessary)
service = Service(executable_path=r'D:\C Drive Software\chromedriver.exe')
driver = webdriver.Chrome(service=service)

# Open ChatGPT website
driver.get("https://chat.openai.com/")  # Make sure this is the correct URL

# Wait for the page to load and manually log in (or automate login if you're allowed)
time.sleep(30)  # Wait time for manual login (adjust as needed)

# Function to interact with ChatGPT
def interact_with_chatgpt(prompt):
    try:
        # Wait for the chat input box to be present
        wait = WebDriverWait(driver, 20)
        # Update XPath with actual value from the site
        chatbox = wait.until(EC.presence_of_element_located((By.XPATH, '//textarea[@placeholder="Send a message..."]')))
        chatbox.send_keys(prompt)
        chatbox.send_keys(Keys.RETURN)  # Press Enter to submit
        
        # Wait for the response to be present (adjust the XPath as needed)
        response = wait.until(EC.presence_of_element_located((By.XPATH, '//div[contains(@class, "response-class")]'))).text
        return response

    except Exception as e:
        print(f"An error occurred: {e}")
        return None

# Example usage
prompt = "Write an article about sorting algorithms in C++, Java, and Python."
response = interact_with_chatgpt(prompt)

# Save the response to a file
if response:
    with open('response.md', 'w', encoding='utf-8') as file:
        file.write(response)

# Close the browser when done
driver.quit()
