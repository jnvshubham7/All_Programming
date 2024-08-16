## USER
Difference between cholesterol index and non-cholesterol index, which is used in database primary index or secondary index. You have to explain in details with examples.

## ASSISTANT
In the context of databases:

1. **Primary Index:**
   - **Definition:** A primary index is a type of database index that is used to uniquely identify each record in a database table.
   - **Usage:** It is used to enforce the primary key constraint and ensure the uniqueness of each row.
   - **Example:** In a table of employees, the employee ID could be the primary index.

2. **Secondary Index:**
   - **Definition:** A secondary index is a data structure used to enhance the speed of data retrieval operations on a database table, but it does not enforce uniqueness.
   - **Usage:** It is used for improving the efficiency of queries that don't use the primary key.
   - **Example:** In the same employee table, an index on the department column could be a secondary index.

**Difference:**
- **Uniqueness:**
  - Primary index ensures the uniqueness of records.
  - Secondary index does not necessarily enforce uniqueness.

- **Enforcement:**
  - Primary index is used to enforce the primary key constraint.
  - Secondary index is used to improve query performance.

- **Number of Indexes:**
  - There can be only one primary index in a table.
  - A table can have multiple secondary indexes.

**Example:**
Consider a table of students:

```sql
CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    grade CHAR(1)
);

-- Primary Index on student_id
-- Ensures uniqueness
```

```sql
-- Secondary Index on grade
CREATE INDEX idx_grade ON Students (grade);
-- Improves query performance for grade-related queries
```

In this example, `student_id` serves as the primary index ensuring uniqueness, while the secondary index `idx_grade` is created to speed up queries involving the `grade` column.