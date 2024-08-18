import pandas as pd
import selenium
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from time import sleep
import undetected_chromedriver as uc
from selenium.webdriver.support.ui import WebDriverWait
from fake_useragent import UserAgent
from selenium.webdriver.support import expected_conditions as EC

prompt = "Give your custom prompt here"

# Set up Chrome options
op = webdriver.ChromeOptions()
op.add_argument(f"user-agent={UserAgent().random}")
op.add_argument("user-data-dir=./")  # Path to save session data
op.add_experimental_option("excludeSwitches", ["enable-logging"])

# Initialize the WebDriver with undetected_chromedriver
driver = uc.Chrome(options=op)

MAIL = "shubhamkumarbhokta19@gmail.com"
PASSWORD = "9709229806sk"

driver.get('https://chat.openai.com/auth/login')

sleep(3)

inputElements = driver.find_elements(By.TAG_NAME, "button")
print(f"Found {len(inputElements)} buttons on the page")  # Debug print
inputElements[0].click()

sleep(3)

# Check how many input fields are found
inputFields = driver.find_elements(By.TAG_NAME, "input")
print(f"Found {len(inputFields)} input fields on the page")  # Debug print

# Adjust the index if needed based on the number of inputs found
if len(inputFields) > 1:
    mail = inputFields[1]
    mail.send_keys(MAIL)
else:
    print("Email input field not found")
    driver.quit()

btn = driver.find_elements(By.TAG_NAME, "button")[0]
btn.click()

sleep(3)

if len(inputFields) > 2:
    password = inputFields[2]
    password.send_keys(PASSWORD)
else:
    print("Password input field not found")
    driver.quit()

wait = WebDriverWait(driver, 10)
btn = wait.until(EC.element_to_be_clickable((By.XPATH, '//button[@type="submit"]')))
btn.click()

sleep(10)

inputElements = driver.find_elements(By.TAG_NAME, "textarea")
if inputElements:
    inputElements[0].send_keys(prompt)
    sleep(2)
    inputElements[0].send_keys(Keys.ENTER)
else:
    print("Chat input box not found")
    driver.quit()

# Wait for the response and gather the text
sleep(10)
inputElements = driver.find_elements(By.TAG_NAME, "p")
sleep(5)
results = []
for element in inputElements:
    results.append(element.text)
print(results)
