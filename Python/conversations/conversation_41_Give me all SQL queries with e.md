## USER
Give me all SQL queries with example and all details. You have to cover all SQL queries. Nothing will left.

## ASSISTANT
Covering all SQL queries in a single response would be extensive, as there are numerous SQL statements used for various database operations. Instead, I'll provide examples and details for some essential SQL queries that cover a wide range of operations. If you have specific queries or categories you'd like more information on, feel free to specify.

### 1. **SELECT Statement:**

#### Basic SELECT:
```sql
SELECT column1, column2 FROM table_name;
```

#### Example:
```sql
SELECT FirstName, LastName FROM Employees;
```

### 2. **WHERE Clause:**

#### Filtering with WHERE:
```sql
SELECT column1, column2 FROM table_name WHERE condition;
```

#### Example:
```sql
SELECT ProductName, Price FROM Products WHERE Price > 50;
```

### 3. **ORDER BY Clause:**

#### Sorting Results:
```sql
SELECT column1, column2 FROM table_name ORDER BY column1 [ASC | DESC];
```

#### Example:
```sql
SELECT ProductName, Price FROM Products ORDER BY Price DESC;
```

### 4. **INSERT INTO Statement:**

#### Inserting Data:
```sql
INSERT INTO table_name (column1, column2) VALUES (value1, value2);
```

#### Example:
```sql
INSERT INTO Customers (FirstName, LastName) VALUES ('John', 'Doe');
```

### 5. **UPDATE Statement:**

#### Updating Data:
```sql
UPDATE table_name SET column1 = value1 WHERE condition;
```

#### Example:
```sql
UPDATE Employees SET Salary = 60000 WHERE EmployeeID = 101;
```

### 6. **DELETE Statement:**

#### Deleting Data:
```sql
DELETE FROM table_name WHERE condition;
```

#### Example:
```sql
DELETE FROM Customers WHERE CustomerID = 201;
```

### 7. **GROUP BY Clause:**

#### Grouping Data:
```sql
SELECT column1, COUNT(column2) FROM table_name GROUP BY column1;
```

#### Example:
```sql
SELECT Category, COUNT(ProductID) FROM Products GROUP BY Category;
```

### 8. **HAVING Clause:**

#### Filtering Grouped Data:
```sql
SELECT column1, COUNT(column2) FROM table_name GROUP BY column1 HAVING condition;
```

#### Example:
```sql
SELECT Category, COUNT(ProductID) FROM Products GROUP BY Category HAVING COUNT(ProductID) > 5;
```

### 9. **JOIN Clause:**

#### Inner Join:
```sql
SELECT table1.column1, table2.column2 FROM table1 INNER JOIN table2 ON table1.columnX = table2.columnY;
```

#### Example:
```sql
SELECT Orders.OrderID, Customers.CustomerName
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;
```

### 10. **UNION Operator:**

#### Combining Results:
```sql
SELECT column1 FROM table1
UNION
SELECT column1 FROM table2;
```

#### Example:
```sql
SELECT ProductName FROM Products WHERE Category = 'Electronics'
UNION
SELECT ProductName FROM Products WHERE Category = 'Appliances';
```

### 11. **CREATE TABLE Statement:**

#### Creating a Table:
```sql
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    ...
);
```

#### Example:
```sql
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Salary DECIMAL(10,2)
);
```

### 12. **ALTER TABLE Statement:**

#### Modifying Table Structure:
```sql
ALTER TABLE table_name
ADD column_name datatype;
```

#### Example:
```sql
ALTER TABLE Employees
ADD Birthdate DATE;
```

### 13. **DROP TABLE Statement:**

#### Deleting a Table:
```sql
DROP TABLE table_name;
```

#### Example:
```sql
DROP TABLE Customers;
```

These examples cover some of the fundamental SQL queries, but there are more advanced queries, subqueries, and other statements worth exploring. If you have specific queries or topics you'd like to delve into further, feel free to let me know!