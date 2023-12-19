-- CREATE DATABASE general_store;
USE general_store;
show tables;
CREATE TABLE inventory(
item_id VARCHAR(20),
item_name VARCHAR(20), 
menu_name VARCHAR(20),
item_rate DECIMAL(5,2),
Sell_prize DECIMAL(5,2),
item_description VARCHAR(20)
);

CREATE TABLE customer(
cust_id VARCHAR(20),
cust_name VARCHAR(20),
Address VARCHAR(20),
City VARCHAR(20),
Pin INTEGER,
State VARCHAR(20),
Bal_due DECIMAL(5,2)
);

CREATE TABLE salesman(
Salesman_id VARCHAR(20),
Salesman_name VARCHAR(20),
Address VARCHAR(20),
City VARCHAR(20),
Pin INTEGER,
State VARCHAR(20),
Salary DECIMAL(5,2)
);

INSERT INTO inventory
VALUES
('i001', 'lux_soap', 'lux_company', 15.67, 20.43, 'soap'),
('i002', 'copy', 'royal_notebook', 14.80, 16.40, 'copy'),
('i003', 'goodday_biscuit', 'britania_stores', 288.80, 220.40, 'biscuit');

INSERT INTO customer
VALUES
('cu01001', 'alak roy', 'b.d.para', 'Patna', 800015, 'Bihar', 0),
('cu01002', 'suman roy', 'puk para', 'patna', 800132, 'Bihar', 2390.9),
('cu01004', 'priya das', 'chora para,' 'Gaya', 800010, 'Bihar', 1390.9);

INSERT INTO salesman
VALUES
('s001', 'rohan singh', 'rajapur', 'allhabad', 212098, 'uttar pradesh', 8000),
('s002', 'rohan singh', 'naini', 'allhabad', 212096, 'uttar pradesh', 9800);

show table status;
