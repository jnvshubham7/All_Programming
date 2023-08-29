DROP DATABASE bank;

CREATE DATABASE bank;
USE bank;

CREATE TABLE customer_table(
	customer_name VARCHAR(20),
	street VARCHAR(20),
	city VARCHAR(20)
);

CREATE TABLE loan_table(
	loan_number VARCHAR(20) PRIMARY KEY,
	branch_name VARCHAR(20),
	amount INTEGER
);

CREATE TABLE borrower_table(
	customer_name VARCHAR(20),
	Loan_number VARCHAR(20)
);

CREATE TABLE account_table(
	account_number VARCHAR(20) PRIMARY KEY,
	branch_name VARCHAR(20),
	balance INTEGER
);

CREATE TABLE depositor_table(
	customer_name VARCHAR(20),
	account_number VARCHAR(20)
);

INSERT INTO customer_table VALUES
('Adams', 'Spring', 'Pittsfield'),
('Brooks', 'Senator', 'Brooklyn'),
('Curry', 'North', 'Rye'),
('Glenn','Sand Hill','Woodside'),
('Hayes','Main','Harrison'),
('Green','Walnut','Stamford'),
('Johnson','Alma','Palo Alto'),
('Jones','Main','Harrison'),
('Lindsay','Park','Pittsfield'),
('Smith','North','Rye'),
('Turner','Putnam','Stamform'),
('Williams','Nassau','Princeton');


INSERT INTO loan_table VALUES
('L-11', 'Round Hill', 900),
('L-14', 'Downtown', 1500),
('L-15', 'Perryridge', 1500),
('L-16','Perryridge',1300),
('L-17','Downtown',1000),
('L-23','Redwood',2000),
('L-93','Mianus',500);

INSERT INTO borrower_table VALUES
('Adams', 'L-16'),
('Curry', 'L-93'),
('Hayes', 'L-15'),
('Jackson','L-14'),
('Jones','L-17'),
('Smith','L-11'),
('Smith','L-23'),
('Williams','L-17');

INSERT INTO account_table VALUES
('A-101', 'Downtown', 500),
('A-215', 'Mianus', 700),
('A-102', 'Perryridge', 400),
('A-305','Round Hill',350),
('A-201','Brighton',900),
('A-222','Redwood',700),
('A-217','Brighton',750);

INSERT INTO depositor_table VALUES
('Hayes', 'A-102'),
('Johnson', 'A-101'),
('Johnson', 'A-201'),
('Jones','A-217'),
('Lindsay','A-222'),
('Smith','A-215'),
('Turner','A-305');
