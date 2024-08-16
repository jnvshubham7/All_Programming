## USER
Explain indexing and their types in detail with examples.

## ASSISTANT
**Indexing in Databases:**

Indexing is a database optimization technique that enhances the speed of data retrieval operations on a database table. It involves creating a data structure (an index) to improve the speed of data retrieval operations on a database table. Indexing works by creating an ordered list of references to the actual data, allowing the database engine to locate and retrieve the required data more efficiently.

**Types of Indexing:**

1. **Primary Index:**
   - Created on the primary key column of a table.
   - Ensures uniqueness and provides a fast method of data retrieval.
   - Automatically created when a primary key constraint is defined.

   ```sql
   CREATE TABLE Students (
       student_id INT PRIMARY KEY,
       student_name VARCHAR(50),
       -- other columns
   );
   ```

2. **Secondary Index:**
   - Created on columns other than the primary key.
   - Allows faster retrieval based on the indexed columns.
   - Multiple secondary indexes can exist on a table.

   ```sql
   CREATE INDEX idx_name ON Students(student_name);
   ```

3. **Unique Index:**
   - Similar to a secondary index but enforces uniqueness on indexed columns.
   - Ensures that no two rows have the same indexed values.

   ```sql
   CREATE UNIQUE INDEX idx_email ON Users(email);
   ```

4. **Composite Index:**
   - Created on multiple columns.
   - Useful when queries involve multiple conditions.

   ```sql
   CREATE INDEX idx_name_age ON Employees(last_name, age);
   ```

5. **Clustered Index:**
   - Determines the physical order of data rows in a table.
   - The table can have only one clustered index.

   ```sql
   CREATE CLUSTERED INDEX idx_date ON Orders(order_date);
   ```

6. **Non-Clustered Index:**
   - Does not affect the physical order of data rows.
   - Provides a separate structure to optimize data retrieval.

   ```sql
   CREATE NONCLUSTERED INDEX idx_city ON Customers(city);
   ```

**Example:**
Consider a table called `Products` with columns `product_id`, `product_name`, and `price`. Creating an index on the `product_name` column can improve the retrieval speed for queries involving product names.

```sql
-- Create a secondary index on the product_name column
CREATE INDEX idx_product_name ON Products(product_name);
```

This index would enhance the performance of queries like:

```sql
-- Query to retrieve products by name
SELECT * FROM Products WHERE product_name = 'Laptop';
```

Indexing is a trade-off between improved read performance and increased write overhead, so it should be used judiciously based on the specific requirements of the application.