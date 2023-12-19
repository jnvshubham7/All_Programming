import requests

def transferAmount(name, city):
    base_url = "https://sonmock.hackerrank.com/api/transactions"
    
    # Initialize variables to store the maximum credit and debit amounts
    max_credit_amount = 0.0
    max_debit_amount = 0.0

    # Start with the first page
    page = 1
    while True:
        # Make the API request to get the transaction records for the given page
        response = requests.get(f"{base_url}?page={page}")
        data = response.json()
        
        # Extract the list of transactions from the API response
        transactions = data["data"]
        
        # Check if there are no more records or if we have reached the last page
        if not transactions or page > data["total_pages"]:
            break

        # Loop through each transaction and filter based on user name and city
        for transaction in transactions:
            if transaction["userName"] == name and transaction["location"]["city"] == city:
                amount = float(transaction["amount"].replace("$", "").replace(",", ""))
                if transaction["benType"] == "credit":
                    max_credit_amount = max(max_credit_amount, amount)
                elif transaction["benType"] == "debit":
                    max_debit_amount = max(max_debit_amount, amount)

        # Move to the next page
        page += 1

    # Format the results as currency strings
    credit_amount_str = "${:,.2f}".format(max_credit_amount)
    debit_amount_str = "${:,.2f}".format(max_debit_amount)

    return [credit_amount_str, debit_amount_str]

# Test the function
name = "Bob Martin"
city = "Bourg"
output = transferAmount(name, city)
print(output)  # Output will be an array with credit and debit amounts in currency format
