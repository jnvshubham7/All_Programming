## USER
Top 20 SQL Queries with Answers

## ASSISTANT
Certainly! Here are 20 SQL queries along with answers:

### 1. Retrieve all columns from a table named "employees":
```sql
SELECT * FROM employees;
```

### 2. Retrieve distinct values from the "department" column of the "employees" table:
```sql
SELECT DISTINCT department FROM employees;
```

### 3. Count the number of employees in each department:
```sql
SELECT department, COUNT(*) AS employee_count FROM employees GROUP BY department;
```

### 4. Find the employee with the highest salary:
```sql
SELECT * FROM employees ORDER BY salary DESC LIMIT 1;
```

### 5. Update the salary of employees in the "IT" department by 10%:
```sql
UPDATE employees SET salary = salary * 1.1 WHERE department = 'IT';
```

### 6. Insert a new employee into the "employees" table:
```sql
INSERT INTO employees (employee_id, first_name, last_name, department, salary) VALUES (101, 'John', 'Doe', 'HR', 50000);
```

### 7. Delete all employees with a salary less than 30000:
```sql
DELETE FROM employees WHERE salary < 30000;
```

### 8. Find the second-highest salary in the "employees" table:
```sql
SELECT MAX(salary) FROM employees WHERE salary < (SELECT MAX(salary) FROM employees);
```

### 9. Retrieve employees whose first name starts with 'A':
```sql
SELECT * FROM employees WHERE first_name LIKE 'A%';
```

### 10. Calculate the total salary for each department:
```sql
SELECT department, SUM(salary) AS total_salary FROM employees GROUP BY department;
```

### 11. Find employees with the same last name:
```sql
SELECT last_name, COUNT(*) AS name_count FROM employees GROUP BY last_name HAVING COUNT(*) > 1;
```

### 12. Retrieve employees hired in the year 2022:
```sql
SELECT * FROM employees WHERE YEAR(hire_date) = 2022;
```

### 13. List the top 5 highest-paid employees:
```sql
SELECT * FROM employees ORDER BY salary DESC LIMIT 5;
```

### 14. Find the average salary for each department:
```sql
SELECT department, AVG(salary) AS average_salary FROM employees GROUP BY department;
```

### 15. Retrieve the oldest and youngest employees:
```sql
SELECT * FROM employees WHERE birthdate = (SELECT MAX(birthdate) FROM employees) OR birthdate = (SELECT MIN(birthdate) FROM employees);
```

### 16. Display employees who have not been assigned a department:
```sql
SELECT * FROM employees WHERE department IS NULL;
```

### 17. Update the department of all employees in the "Sales" department to "Marketing":
```sql
UPDATE employees SET department = 'Marketing' WHERE department = 'Sales';
```

### 18. Calculate the total number of employees:
```sql
SELECT COUNT(*) AS total_employees FROM employees;
```

### 19. Retrieve employees whose salary is within the range of 40000 and 60000:
```sql
SELECT * FROM employees WHERE salary BETWEEN 40000 AND 60000;
```

### 20. List employees in alphabetical order by last name:
```sql
SELECT * FROM employees ORDER BY last_name;
```

Feel free to ask if you have any questions or if you'd like more queries!