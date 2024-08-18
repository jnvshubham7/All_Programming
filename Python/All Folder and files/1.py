from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

# Set up Selenium WebDriver (update the path to ChromeDriver if necessary)
service = Service(executable_path=r'D:\C Drive Software\chromedriver.exe')
driver = webdriver.Chrome(service=service)

# Open the target website
driver.get("https://chatgpt.com/")  # Replace with the actual website URL

# Function to get XPath of an element when clicked
def get_xpath():
    try:
        # Wait for the page to load
        WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.TAG_NAME, 'body')))
        print("Page loaded. Click on any element to get its XPath...")

        # Function to capture the click event and print the XPath
        def capture_xpath(event):
            element = driver.execute_script("return document.elementFromPoint(arguments[0], arguments[1]);", event['clientX'], event['clientY'])
            xpath = driver.execute_script("function absoluteXPath(element) {"
                                          "var comp, comps = []; "
                                          "var parent = null; "
                                          "var xpath = ''; "
                                          "var getPos = function(element) { "
                                          "var position = 1, curNode; "
                                          "if (element.nodeType == Node.ATTRIBUTE_NODE) { "
                                          "return null; "
                                          "} "
                                          "for (curNode = element.previousSibling; curNode; curNode = curNode.previousSibling) { "
                                          "if (curNode.nodeName == element.nodeName) { "
                                          "++position; "
                                          "} "
                                          "} "
                                          "return position; "
                                          "}; "

                                          "if (element instanceof Document) { "
                                          "return '/'; "
                                          "} "

                                          "for (; element && !(element instanceof Document); element = element.nodeType == Node.ATTRIBUTE_NODE ? element.ownerElement : element.parentNode) { "
                                          "comp = comps[comps.length] = {}; "
                                          "switch (element.nodeType) { "
                                          "case Node.TEXT_NODE: "
                                          "comp.name = 'text()'; "
                                          "break; "
                                          "case Node.ATTRIBUTE_NODE: "
                                          "comp.name = '@' + element.nodeName; "
                                          "break; "
                                          "case Node.PROCESSING_INSTRUCTION_NODE: "
                                          "comp.name = 'processing-instruction()'; "
                                          "break; "
                                          "case Node.COMMENT_NODE: "
                                          "comp.name = 'comment()'; "
                                          "break; "
                                          "case Node.ELEMENT_NODE: "
                                          "comp.name = element.nodeName; "
                                          "break; "
                                          "} "
                                          "comp.position = getPos(element); "
                                          "} "

                                          "for (var i = comps.length - 1; i >= 0; i--) { "
                                          "comp = comps[i]; "
                                          "xpath += '/' + comp.name.toLowerCase(); "
                                          "if (comp.position !== null && comp.position > 1) { "
                                          "xpath += '[' + comp.position + ']'; "
                                          "} "
                                          "} "

                                          "return xpath; "
                                          "} return absoluteXPath(arguments[0]);", element)
            print(f"XPath: {xpath}")
            driver.quit()

        # Bind the click event to the capture_xpath function
        driver.execute_script("""
            document.addEventListener('click', function(event) {
                window.captureClickEvent = {
                    clientX: event.clientX,
                    clientY: event.clientY
                };
            });
        """)
        
        # Wait for the user to click on an element
        while True:
            if driver.execute_script("return window.captureClickEvent !== undefined;"):
                capture_xpath(driver.execute_script("return window.captureClickEvent;"))
                break

    except Exception as e:
        print(f"An error occurred: {e}")
    finally:
        driver.quit()

# Call the function to start capturing XPath
get_xpath()
