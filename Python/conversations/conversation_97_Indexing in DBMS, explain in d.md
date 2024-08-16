## USER
Indexing in DBMS, explain in details and with types and examples.

## ASSISTANT
**Indexing in DBMS:**

**Definition:**
- Indexing is a database optimization technique that improves the speed of data retrieval operations on a database table by providing quick access to the rows that match the search condition.

**Purpose:**
- Efficiently locate and retrieve data rows without scanning the entire table.

**Types of Indexing:**

1. **Single-Level Index:**
   - **Definition:** A single index structure to access the data.
   - **Example:** B-tree index.

2. **Multi-Level Index:**
   - **Definition:** Multiple levels of index structures.
   - **Example:** B+ tree index.

3. **Clustered Index:**
   - **Definition:** The order of the rows in the table is the same as the order of entries in the index.
   - **Example:** MySQL's InnoDB uses a clustered index.

4. **Non-Clustered Index:**
   - **Definition:** The order of the rows in the table is different from the order of entries in the index.
   - **Example:** SQL Server's default index.

5. **Dense Index:**
   - **Definition:** Contains an index entry for every search key value in the data file.
   - **Example:** Dense B-tree index.

6. **Sparse Index:**
   - **Definition:** Contains entries for only some of the search values.
   - **Example:** Sparse B-tree index.

7. **Bitmap Index:**
   - **Definition:** Uses bitmap vectors to represent subsets of rows.
   - **Example:** Used in data warehouses for low cardinality columns.

**Example:**
Consider a table of employees:

```sql
CREATE TABLE Employees (
    employee_id INT PRIMARY KEY,
    name VARCHAR(50),
    department VARCHAR(30),
    salary DECIMAL(10, 2)
);

-- Creating an index on the 'department' column
CREATE INDEX idx_department ON Employees (department);
```

In this example, the `idx_department` is a non-clustered index on the 'department' column, allowing for faster retrieval of records based on the department.