## USER
Delete casacde in sql

## ASSISTANT
**CASCADE DELETE in SQL:**

**Definition:**
CASCADE DELETE is a referential action that automatically deletes dependent records in related tables when a record in the parent table is deleted.

**Example:**
Consider two tables - `Orders` (parent table) and `OrderDetails` (child table). If a CASCADE DELETE is defined on the foreign key relationship, deleting a record in the `Orders` table will automatically delete related records in the `OrderDetails` table.

**Syntax:**
```sql
CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    OrderDate DATE,
    CustomerID INT
);

CREATE TABLE OrderDetails (
    DetailID INT PRIMARY KEY,
    OrderID INT,
    ProductID INT,
    Quantity INT,
    FOREIGN KEY (OrderID) REFERENCES Orders(OrderID) ON DELETE CASCADE
);
```

In this example, the `ON DELETE CASCADE` clause is used when defining the foreign key constraint. Now, if you delete a record from the `Orders` table, all corresponding records in the `OrderDetails` table with the matching `OrderID` will be automatically deleted.

**Usage:**
```sql
-- Deleting a specific order will also delete related order details due to CASCADE DELETE.
DELETE FROM Orders WHERE OrderID = 123;
```

**Note:** Exercise caution when using CASCADE DELETE to avoid unintended data loss. It's a powerful feature that should be used thoughtfully, especially in production databases.