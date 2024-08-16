## USER
Advantage of DBMS
All type of Keys
Normalization
SQL queries
Relational Algebra
Joins
Trigger, cursor, view
Dirty read problem
Conflict serializable vs View serializable.
ACID properties.
Indexing | Indexing methods


## ASSISTANT
### Advantage of DBMS (Database Management System):

1. **Data Integrity:** DBMS enforces integrity constraints to ensure the accuracy and reliability of data.

2. **Data Security:** Access to the data can be controlled and restricted based on user roles and permissions.

3. **Data Independence:** Changes in the database structure (schema) do not affect the application programs.

4. **Concurrent Access and Transaction Management:** DBMS manages multiple user access to the database concurrently, ensuring data consistency.

5. **Data Recovery and Backup:** DBMS provides mechanisms for data backup and recovery to prevent data loss in case of system failures.

6. **Data Abstraction:** Users can interact with the database at a higher level without worrying about the implementation details.

7. **Query Language Support:** DBMS supports powerful query languages like SQL for efficient and expressive data retrieval.

8. **Centralized Management:** The central management of data simplifies maintenance and administration tasks.

### Types of Keys:

1. **Primary Key:** Uniquely identifies each record in a table.
2. **Foreign Key:** Links a column in one table to the primary key of another table.
3. **Super Key:** A set of one or more keys that can uniquely identify a record.
4. **Candidate Key:** A minimal super key; a key that uniquely identifies a record.
5. **Alternate Key:** A candidate key that is not selected as the primary key.
6. **Composite Key:** A key that consists of two or more attributes to uniquely identify a record.

### Normalization:

Normalization is the process of organizing data in a database to reduce redundancy and dependency. It involves breaking down large tables into smaller, related tables while ensuring data integrity.

- **First Normal Form (1NF):** Eliminate duplicate columns.
- **Second Normal Form (2NF):** Meet 1NF, and all non-key attributes are fully functionally dependent on the primary key.
- **Third Normal Form (3NF):** Meet 2NF, and all attributes are functionally dependent only on the primary key.

### SQL Queries:

Structured Query Language (SQL) is used for managing and manipulating relational databases.

Example Queries:
```sql
-- Select all columns from a table
SELECT * FROM TableName;

-- Filter rows based on a condition
SELECT * FROM TableName WHERE ColumnName = 'Value';

-- Join two tables
SELECT * FROM Table1 JOIN Table2 ON Table1.ID = Table2.ID;

-- Aggregate functions
SELECT AVG(ColumnName) FROM TableName;

-- Insert a new record
INSERT INTO TableName (Column1, Column2) VALUES ('Value1', 'Value2');

-- Update records
UPDATE TableName SET Column1 = 'NewValue' WHERE Column2 = 'Condition';

-- Delete records
DELETE FROM TableName WHERE Column = 'Value';
```

### Relational Algebra:

Relational algebra is a theoretical framework used to describe operations on relational databases.

Example Operations:
- **Projection (π):** Selecting specific columns from a table.
- **Selection (σ):** Filtering rows based on a condition.
- **Union (∪):** Combining rows from two tables.
- **Intersection (∩):** Selecting common rows from two tables.
- **Join (⨝):** Combining columns from two tables based on a related condition.

### Joins:

- **Inner Join:** Retrieves rows from both tables where there is a match in the specified columns.
- **Left (Outer) Join:** Retrieves all rows from the left table and matched rows from the right table.
- **Right (Outer) Join:** Retrieves all rows from the right table and matched rows from the left table.
- **Full (Outer) Join:** Retrieves all rows when there is a match in either the left or right table.

### Trigger, Cursor, View:

- **Trigger:** A set of instructions that are automatically executed ("triggered") in response to certain events on a particular table.
- **Cursor:** A database object used to traverse the results of a SELECT query.
- **View:** A virtual table based on the result of a SELECT query.

### Dirty Read Problem:

A dirty read occurs when one transaction reads data that has been modified by another transaction but not yet committed. It can lead to inconsistencies if the second transaction is rolled back.

### Conflict Serializable vs View Serializable:

- **Conflict Serializable:** A schedule is conflict serializable if it is equivalent to some serial execution of transactions, and there is no conflicting pair of operations.
- **View Serializable:** A schedule is view serializable if it is equivalent to some serial execution of transactions that produces the same results for all possible database states.

### ACID Properties:

1. **Atomicity:** Transactions are treated as a single, indivisible unit of work.
2. **Consistency:** Transactions take the database from one consistent state to another.
3. **Isolation:** Transactions are executed in isolation from each other.
4. **Durability:** Once a transaction is committed, its changes are permanent and survive system failures.

### Indexing | Indexing Methods:

- **Indexing:** A data structure that improves the speed of data retrieval operations on a database table.
- **Indexing Methods:** Include B-tree, Hashing, Bitmap, and more. Each method has its advantages and is suitable for specific use cases.

Feel free to ask for further clarification on any specific topic!