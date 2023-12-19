CREATE TABLE Dept (did INTEGER NOT NULL, dname VARCHAR(30) NOT NULL, budget REAL, managerid INTEGER)

-- Define the Dept relation in SQL so that every department is guaranteed to have a
-- manager



-- Write an SQL statement to add John Doe as an employee with eid = 101, age =
-- 32 and salary = 15, 000
--
INSERT INTO employee VALUES (101, 'John Doe', 32, 15000.00)

--
-- Write an SQL statement to give every employee a 10 percent raise
--
UPDATE employee SET salary = salary * 1.1

-- Write an SQL statement to delete the Toy department. Given the referential
-- integrity constraints you chose for this schema, explain what happens when this
-- statement is executed.
--
DELETE FROM Dept WHERE did = 1





INSERT INTO Dept VALUES (1, 'Accounting', 12000, 2), (2, 'Finance', 20000, 1), (3, 'Information Technology', 25000, NULL), (4, 'Marketing', 30000, NULL), (5, 'Purchasing', 22000, NULL), (6, 'Shipping', 25000, NULL), (7, 'Toy', 5000, NULL)


CREATE TABLE Dept ( did	INTEGER, budget	REAL, managerid INTEGER NOT NULL  PRIMARY KEY (did),
FOREIGN KEY (managerid) REFERENCES Emp)






-- 1. 
drop table Dept;
-- drop table department;



CREATE TABLE Dept (did INTEGER NOT NULL, dname VARCHAR(30) NOT NULL, budget REAL, managerid INTEGER)
-- 2. 
INSERT INTO Dept VALUES 
(1, 'Accounting', 12000, 2), 
(2, 'Finance', 20000, 1), 
(3, 'Information Technology', 25000, NULL), 
(4, 'Marketing', 30000, NULL), 
(5, 'Purchasing', 22000, NULL), 
(6, 'Shipping', 25000, NULL), 
(7, 'Toy', 5000, NULL)

-- 3. 
UPDATE Emp SET salary = salary * 1.1
-- 4. 
DELETE FROM Dept WHERE did = 7

-- When the DELETE statement is executed, the Toy department is deleted. 
-- However, since the Toy department is referenced by the Dept relation, 
-- the deletion of the Toy department causes the deletion of the Dept relation.




















Ques No:1 Emp(eid: integer, ename: string, age: integer, salary: real)
Works(eid: integer, did: integer, pct_time: integer)
Dept(did: integer, dname: string, budget: real, managerid: integer)
1. Give an example of a foreign key constraint that involves the Dept relation.
2. What are the options for enforcing this constraint when a user attempts to delete
a Dept tuple?

1. Dept(did: integer, dname: string, budget: real, managerid: integer)
2. A foreign key constraint can be enforced when a user attempts to delete a Dept tuple by preventing the deletion if the did value is not present in the Emp relation.

Ques No:2 Write the SQL statements required to create the preceding relations,
including appropriate versions of all primary and foreign key integrity constraints.
1. Define the Dept relation in SQL so that every department is guaranteed to have a
manager.
2. Write an SQL statement to add John Doe as an employee with eid = 101, age =
32 and salary = 15, 000.
3. Write an SQL statement to give every employee a 10 percent raise.
4. Write an SQL statement to delete the Toy department. Given the referential
integrity constraints you chose for this schema, explain what happens when this
statement is executed.

1. CREATE TABLE Dept (did INTEGER NOT NULL, dname VARCHAR(30) NOT NULL, budget REAL, managerid INTEGER)
2. INSERT INTO Dept VALUES (1, 'Accounting', 12000, 2), (2, 'Finance', 20000, 1), (3, 'Information Technology', 25000, NULL), (4, 'Marketing', 30000, NULL), (5, 'Purchasing', 22000, NULL), (6, 'Shipping', 25000, NULL), (7, 'Toy', 5000, NULL)

3. UPDATE Emp SET salary = salary * 1.1
4. DELETE FROM Dept WHERE did = 7

When the DELETE statement is executed, the Toy department is deleted. However, since the Toy department is referenced by the Dept relation, the deletion of the Toy department causes the deletion of the Dept relation.


Explain why the addition of NOT NULL constraints to the SQL definition of the Manages
relation does not enforce the constraint that each department must have a manager.
What, if anything, is achieved by requiring that the ssn field of Manages be non-null?

The addition of NOT NULL constraints to the SQL definition of the Manages relation does not enforce the constraint that each department must have a manager. The addition of the NOT NULL constraint to the ssn field of Manages is redundant, as the field is already defined as NOT NULL.

You also modified the ER diagram to include the constraint that tests on a plane must
be conducted by a technician who is an expert on that model. Can you modify the SQL
statements defining the relations obtained by mapping the ER diagram to check this
constraint?

No, you cannot modify the SQL statements defining the relations obtained by mapping the ER diagram to check this constraint. The constraint that tests on a plane must be conducted by a technician who is an expert on that model is a business rule that is not enforced by the database.