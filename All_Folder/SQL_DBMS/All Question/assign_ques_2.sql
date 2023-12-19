USE 	general_store;
show tables;

CREATE TABLE customer_table(
Customer_name VARCHAR(20),
Customer_street VARCHAR(20),
Customer_city VARCHAR(20)
);

CREATE TABLE loan_table(
Loan_number VARCHAR(20),
Branch_name VARCHAR(20),
Amount INTEGER
);

CREATE TABLE Borrower_table(
customer_name VARCHAR(20),
Loan_number VARCHAR(20)
);

CREATE TABLE Account_table(
Account_number VARCHAR(20),
Branch_name VARCHAR(20),
Balance INTEGER
);

CREATE TABLE Depositor_table(
customer_name VARCHAR(20),
Account_number VARCHAR(20)
);


INSERT INTO customer_table
VALUES
('adams', 'spring', 'pittsfield'),
('brooks', 'senator', 'brooklyn'),
('curry', 'north', 'rye');

INSERT INTO loan_table
VALUES
('l-11', 'round_hill', 900),
('l-14', 'downtown', 1500),
('l-15', 'Perryridge', 1500);


INSERT INTO Borrower_table
VALUES
('Adams', 'L-16'),
('Curry', 'L-93'),
('Hayes', 'L-15');


INSERT INTO Account_table
VALUES
('A-101', 'Downtown', 500),
('A-215', 'Mianus', 700),
('A-102', 'Perryridge', 400);
show table status;
INSERT INTO Depositor_table
VALUES
('Hayes', 'A-102'),
('Johnson', 'A-101'),
('Johnson', 'A-201');