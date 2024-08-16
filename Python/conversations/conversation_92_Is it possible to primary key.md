## USER
Is it possible to primary key and foreign key in one table is possible and how it possible?

## ASSISTANT
Yes, it is possible to have both a primary key and a foreign key in the same table. This scenario is known as a self-referencing or self-join relationship, where a column in a table serves as both the primary key and a foreign key referencing another column in the same table.

Let's consider an example with a "Employees" table:

```sql
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    EmployeeName VARCHAR(255),
    ManagerID INT,
    FOREIGN KEY (ManagerID) REFERENCES Employees(EmployeeID)
);
```

In this example, the "EmployeeID" column serves as the primary key for the "Employees" table. Simultaneously, the "ManagerID" column is a foreign key that references the "EmployeeID" column in the same table, creating a hierarchical or managerial relationship.

This structure allows each employee to have a unique identifier (EmployeeID) as the primary key, while the ManagerID establishes a relationship between employees and their respective managers within the same table.

It's important to handle the foreign key relationships carefully, especially in the case of self-referencing tables, to ensure data integrity and consistency.