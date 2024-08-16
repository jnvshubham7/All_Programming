## USER
Experiment 1NF, 2NF, 3NF, and VCNF with example and detail.

## ASSISTANT
Normalization is a database design technique that minimizes data redundancy and dependency by organizing the fields and table of a database. It involves organizing data into tables to eliminate duplicate data and ensure data dependencies make sense. Four of the common normal forms are 1NF (First Normal Form), 2NF (Second Normal Form), 3NF (Third Normal Form), and BCNF (Boyce-Codd Normal Form). Let's discuss each of them with examples.

### 1. First Normal Form (1NF):

#### Definition:
- All values in a column must be of the same data type.
- Each column must have a unique name.
- The order in which data is stored does not matter.

#### Example:
Consider a table storing information about students and their courses:

| StudentID | StudentName    | Courses                |
|-----------|-----------------|------------------------|
| 1         | John Doe        | Math, Physics          |
| 2         | Jane Smith      | Chemistry, Literature  |

This table is not in 1NF because the "Courses" column contains multiple values. To bring it to 1NF, we can create a new table for courses:

**Students:**

| StudentID | StudentName    |
|-----------|-----------------|
| 1         | John Doe        |
| 2         | Jane Smith      |

**Courses:**

| StudentID | Course       |
|-----------|--------------|
| 1         | Math         |
| 1         | Physics      |
| 2         | Chemistry    |
| 2         | Literature   |

### 2. Second Normal Form (2NF):

#### Definition:
- Must be in 1NF.
- All non-key attributes are fully functionally dependent on the primary key.

#### Example:
Consider a table that combines information about customers and their orders:

| OrderID | CustomerID | Product  | Price |
|---------|------------|----------|-------|
| 1       | 101        | Laptop   | 800   |
| 2       | 102        | Printer  | 200   |
| 3       | 101        | Monitor  | 300   |

This table is not in 2NF because the "Price" attribute is dependent on "Product," which is not part of the primary key. To bring it to 2NF, we can create separate tables:

**Orders:**

| OrderID | CustomerID |
|---------|------------|
| 1       | 101        |
| 2       | 102        |
| 3       | 101        |

**Products:**

| Product | Price |
|---------|-------|
| Laptop  | 800   |
| Printer | 200   |
| Monitor | 300   |

### 3. Third Normal Form (3NF):

#### Definition:
- Must be in 2NF.
- No transitive dependencies: non-prime attributes are not transitively dependent on the primary key.

#### Example:
Consider a table storing information about employees and their departments:

| EmployeeID | EmployeeName | Department | Location      |
|------------|--------------|------------|---------------|
| 1          | John Doe     | IT         | Building A    |
| 2          | Jane Smith   | HR         | Building B    |

This table is not in 3NF because "Location" is transitively dependent on the primary key ("EmployeeID"). To bring it to 3NF:

**Employees:**

| EmployeeID | EmployeeName | Department |
|------------|--------------|------------|
| 1          | John Doe     | IT         |
| 2          | Jane Smith   | HR         |

**Departments:**

| Department | Location      |
|------------|---------------|
| IT         | Building A    |
| HR         | Building B    |

### 4. Boyce-Codd Normal Form (BCNF):

#### Definition:
- Must be in 3NF.
- Every non-trivial functional dependency is a superkey.

#### Example:
Consider a table storing information about teachers and their subjects:

| TeacherID | Subject     | Class  |
|-----------|-------------|--------|
| 1         | Mathematics | 10A    |
| 2         | Physics     | 11B    |
| 3         | Chemistry   | 10A    |

This table is not in BCNF because "Class" is dependent on "Subject," which is not a superkey. To bring it to BCNF:

**Teachers:**

| TeacherID | Subject     |
|-----------|-------------|
| 1         | Mathematics |
| 2         | Physics     |
| 3         | Chemistry   |

**Classes:**

| Subject     | Class  |
|-------------|--------|
| Mathematics | 10A    |
| Physics     | 11B    |
| Chemistry   | 10A    |

In BCNF, each table has only one candidate key and all dependencies are direct. These are the key normal forms used to structure databases efficiently while minimizing redundancy and dependency.