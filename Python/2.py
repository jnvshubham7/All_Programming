import requests
from requests.exceptions import ProxyError, ConnectionError

def transferAmount(name, city):
    base_url = "https://sonmock.hackerrank.com/api/transactions"
    max_retries = 3  # Adjust the number of retries as needed

    for retry in range(max_retries):
        try:
            response = requests.get(f"{base_url}?page=1")
            response.raise_for_status()  # Raise an exception for HTTP errors
            data = response.json()
            
            # Rest of your code to process the data
            
            break  # Break the loop if the request is successful
        
        except (ProxyError, ConnectionError, requests.exceptions.RequestException) as e:
            print(f"Error: {e}. Retrying...")
            if retry == max_retries - 1:
                print("Max retries exceeded. Unable to establish a connection.")
                return None

# Rest of your code

# Test the function
name = "Bob Martin"
city = "Bourg"
output = transferAmount(name, city)
if output is not None:
    print(output)
