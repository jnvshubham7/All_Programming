## USER
You have to tell me book definition of types of indexes. Maybe you are not properly give me types. You will use good knowledge of indexes.

## ASSISTANT
Certainly! Here's a more detailed explanation of various types of indexes, often found in database systems:

### Types of Indexes in Databases:

**1. **Primary Index:**
   - **Definition:** A primary index is a unique index that uniquely identifies each record in a table.
   - **Key Features:**
     - Created automatically when defining a primary key constraint.
     - Ensures each row is uniquely identifiable.
     - Facilitates rapid retrieval of specific rows.
   - **Example:**
     ```sql
     CREATE TABLE Students (
         StudentID INT PRIMARY KEY,
         Name VARCHAR(50),
         GPA DECIMAL(3, 2)
     );
     ```

**2. **Secondary Index:**
   - **Definition:** A secondary index is created on a non-primary key column to improve query performance.
   - **Key Features:**
     - Enhances retrieval speed for non-key columns.
     - Allows efficient access to specific data based on non-primary key columns.
   - **Example:**
     ```sql
     CREATE INDEX idx_LastName ON Employees(LastName);
     ```

**3. **Composite Index:**
   - **Definition:** A composite index involves multiple columns and provides efficiency for queries involving those columns.
   - **Key Features:**
     - Created on multiple columns.
     - Useful for queries that involve multiple columns in the WHERE clause.
   - **Example:**
     ```sql
     CREATE INDEX idx_NameDept ON Employees(LastName, Department);
     ```

**4. **Unique Index:**
   - **Definition:** A unique index ensures the uniqueness of values in the indexed column(s).
   - **Key Features:**
     - Enforces uniqueness for the indexed column(s).
     - Prevents duplicate values in the specified columns.
   - **Example:**
     ```sql
     CREATE UNIQUE INDEX idx_SSN ON Employees(SSN);
     ```

**5. **Clustered Index:**
   - **Definition:** A clustered index determines the physical order of data rows in the table.
   - **Key Features:**
     - Organizes the table data based on the indexed column(s).
     - Affects the physical storage order of rows.
   - **Example:**
     ```sql
     CREATE CLUSTERED INDEX idx_Date ON Sales(OrderDate);
     ```

**6. **Non-Clustered Index:**
   - **Definition:** A non-clustered index maintains a separate structure from the actual data.
   - **Key Features:**
     - Does not affect the physical order of rows in the table.
     - Provides a separate structure for fast data retrieval.
   - **Example:**
     ```sql
     CREATE NONCLUSTERED INDEX idx_ProductName ON Products(ProductName);
     ```

**7. **Bitmap Index:**
   - **Definition:** A bitmap index uses bit arrays to represent sets of values for efficient querying.
   - **Key Features:**
     - Suitable for columns with a limited set of possible values.
     - Efficient for queries with multiple filter conditions.
   - **Example:**
     ```sql
     CREATE BITMAP INDEX idx_Gender ON Employees(Gender);
     ```

**8. **Full-Text Index:**
   - **Definition:** A full-text index is designed for efficient full-text searches within textual data.
   - **Key Features:**
     - Enables fast searching through large text fields.
     - Supports advanced search capabilities.
   - **Example:**
     ```sql
     CREATE FULLTEXT INDEX idx_Description ON Products(Description);
     ```

Understanding these various index types will provide you with a robust foundation for optimizing and designing databases. Keep in mind that different database management systems might have variations in syntax and implementation details.