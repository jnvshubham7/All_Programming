import pandas as pd
import numpy as np
from mlxtend.frequent_patterns import apriori
from mlxtend.frequent_patterns import association_rules

# Load the retail dataset
data = pd.read_csv('retail.csv')

# Convert the dataset into a one-hot encoded matrix
hot_encoded_data = pd.get_dummies(data)

# Define the support and confidence levels
support = 0.05
confidence = 0.7

# Generate the frequent itemset using the Apriori algorithm
frequent_itemset = apriori(hot_encoded_data, min_support=support, use_colnames=True)

# Print the frequent itemset
print('Frequent itemset:')
print(frequent_itemset)

# Generate the closed frequent itemset
closed_frequent_itemset = apriori(hot_encoded_data, min_support=support, use_colnames=True, closed_only=True)

# Print the closed frequent itemset
print('Closed frequent itemset:')
print(closed_frequent_itemset)

# Generate the association rules
association_rules = association_rules(frequent_itemset, metric="confidence", min_threshold=confidence)

# Print the association rules
print('Association rules:')
print(association_rules)
