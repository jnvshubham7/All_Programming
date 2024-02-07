# # Importing necessary libraries
# import numpy as np  # For numerical operations
# import pandas as pd  # For data manipulation
# import matplotlib.pyplot as plt  # For data visualization

# # Define two numbers
# num1 = 10
# num2 = 20

# # Add the two numbers
# result = num1 + num2

# # Print the result
# print("The sum of", num1, "and", num2, "is:", result)

# # Creating a simple plot
# x = np.linspace(0, 10, 100)
# y = np.sin(x)

# plt.plot(x, y)
# plt.title('Simple Sine Wave')
# plt.xlabel('x')
# plt.ylabel('sin(x)')
# plt.grid(True)
# plt.show()






# import pandas as pd

# # Create a dictionary with some data
# data = {
#     'Name': ['Alice', 'Bob', 'Charlie', 'David'],
#     'Age': [25, 30, 35, 40],
#     'City': ['New York', 'Los Angeles', 'Chicago', 'Houston']
# }

# # Create a DataFrame from the dictionary
# df = pd.DataFrame(data)

# # Display the DataFrame
# print("Original DataFrame:")
# print(df)
# print()

# # Accessing specific columns
# print("Accessing specific columns:")
# print(df['Name'])  # Accessing the 'Name' column
# print(df[['Name', 'City']])  # Accessing multiple columns
# print()

# # Adding a new column
# df['Gender'] = ['Female', 'Male', 'Male', 'Male']
# print("DataFrame after adding a new column:")
# print(df)
# print()

# # Filtering rows based on a condition
# print("Filtering rows based on a condition:")
# filtered_df = df[df['Age'] > 30]  # Filter out rows where Age is greater than 30
# print(filtered_df)






# import numpy as np

# # Create a 1-dimensional array
# array_1d = np.array([1, 2, 3, 4, 5])
# print("1-D array:")
# print(array_1d)

# # Create a 2-dimensional array
# array_2d = np.array([[1, 2, 3], [4, 5, 6]])
# print("\n2-D array:")
# print(array_2d)

# # Accessing elements of an array
# print("\nAccessing elements:")
# print("Element at index 0 in array_1d:", array_1d[0])
# print("Element at row 0, column 1 in array_2d:", array_2d[0, 1])

# # Perform operations on arrays
# array_sum = array_1d + 10
# print("\nArray after adding 10 to each element:")
# print(array_sum)

# # Reshaping arrays
# reshaped_array = array_1d.reshape(5, 1)
# print("\nReshaped array:")
# print(reshaped_array)

# # Array arithmetic
# array_a = np.array([1, 2, 3])
# array_b = np.array([4, 5, 6])
# array_sum = array_a + array_b
# array_product = array_a * array_b
# print("\nArray arithmetic:")
# print("Sum:", array_sum)
# print("Product:", array_product)

# # Statistical operations
# mean_value = np.mean(array_a)
# max_value = np.max(array_b)
# min_value = np.min(array_a)
# print("\nStatistical operations:")
# print("Mean of array_a:", mean_value)
# print("Maximum value of array_b:", max_value)
# print("Minimum value of array_a:", min_value)





import pandas as pd

# Create a dictionary with sample data
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Emily'],
    'Age': [25, 30, 35, 40, 45],
    'Score': [85, 90, 88, 75, 95]
}

# Create a DataFrame from the dictionary
df = pd.DataFrame(data)

# Display the DataFrame
print("Original DataFrame:")
print(df)

# Perform some basic operations
print("\nBasic Operations:")
# Calculate average age
average_age = df['Age'].mean()
print("Average Age:", average_age)
# Find the person with the highest score
highest_score_person = df.loc[df['Score'].idxmax()]
print("Person with the Highest Score:")
print(highest_score_person)
