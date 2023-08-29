show databases;
-- drop database dbms_class2;
create database dbms_class2;
use dbms_class2;
CREATE TABLE Item_Table(
item_id VARCHAR(10) PRIMARY KEY,
item_name VARCHAR(20),
Manu_name VARCHAR(20),
item_rate DECIMAL(10,2),
Sell_prize DECIMAL(10,2),
item_discription VARCHAR(20));
-- drop table Item_Table;
CREATE TABLE Customer_Table(
Cust_id VARCHAR(10) PRIMARY KEY,
Cust_name VARCHAR(20),
Address VARCHAR(40),
City VARCHAR(20),
Pin INT,
State VARCHAR(20),
Bal_due DECIMAL(10,2));




CREATE TABLE Salesman_Table(
Salesman_id VARCHAR(10) PRIMARY KEY,
Salesman_name VARCHAR(20),
Address VARCHAR(40),
City VARCHAR(20),
Pin INT,
State VARCHAR(20),
Salary DECIMAL(10,2));

CREATE TABLE Sales_Order_Table(
Sales_order_no VARCHAR(20) PRIMARY KEY,
Sales_order_date DATE,
cust_id VARCHAR(20),
Salesman_id VARCHAR(20),
Bill_payby_party VARCHAR(3),
Delivery_date DATE,
item_rate DECIMAL(10,2),
Tot_quantity_order INT,
Cancel_date DATE,
FOREIGN KEY(cust_id) REFERENCES Customer_Table(Cust_id) ON DELETE SET NULL,
FOREIGN KEY(Salesman_id) REFERENCES Salesman_Table(Salesman_id) ON DELETE SET NULL
);
-- DROP TABLE Sales_Order_Table;
INSERT INTO Item_Table VALUE('i001','lux_soap','lux_company',15.67,20.43,'soap');
INSERT INTO Item_Table VALUE('i002','copy','royal_notebook',14.80,16.40,'copy');
INSERT INTO Item_Table VALUE('i003','goodday_biscuit','britania_stores',2218.80,2220.40,'biscuit');
INSERT INTO Item_Table VALUE('i004','reynolds_pen','pen_parker',2015.67,2120.43,'pen');
INSERT INTO Item_Table VALUE('i005','sql_books','book_bpb',5104.80,5116.40,'book');
INSERT INTO Item_Table VALUE('i006','tata_steel','tata_sons',5118.80,5120.40,'tata');
INSERT INTO Item_Table VALUE('i007','seagate hdd','hp_world',5104.80,5116.40,'HDD1034');
INSERT INTO Item_Table VALUE('i008','dvd writer','moserbear_org',5118.80,5120.40,'DVDRW');

INSERT INTO Customer_Table VALUE('cu01001','alak roy','b.d.para','Patna',800015,'Bihar',0);
INSERT INTO Customer_Table VALUE('cu01002' ,'suman roy' ,'puk para' ,'patna' ,800132 ,'Bihar' ,2390.9);
INSERT INTO Customer_Table VALUE('cu01004' ,'priya das', 'chora para', 'Gaya' ,800010 ,'Bihar' ,1390.9);
INSERT INTO Customer_Table VALUE('cu01005' ,'rina raj', 'kamal para','patna', 800001 ,'Bihar', 0);
INSERT INTO Customer_Table VALUE('cu01006' ,'pulak roy' ,'bircity' ,'lucknow', 226012 ,'uttar pradesh', 110.9);
INSERT INTO Customer_Table VALUE('cu01007' ,'priyanka' ,'das nappam', 'lucknow', 226005, 'uttar pradesh', 190.9);
INSERT INTO Customer_Table VALUE('cu01008' ,'kusum roy', 'Jhalwa' ,'allahabad', 211012 ,'uttar pradesh' ,110.9);
INSERT INTO Customer_Table VALUE('cu01009' ,'mina das' ,'naini', 'allahabad', 211078 ,'uttar pradesh' ,0);
INSERT INTO Customer_Table VALUE('cu01003' ,'nidhi mishra', 'naini', 'allahabad', 212079, 'uttar pradesh' ,9990.9);
INSERT INTO Customer_Table VALUE('cu01010' ,'kamal yadav' ,'naini' ,'allahabad' ,211037 ,'uttar pradesh', 2990.9);
INSERT INTO Customer_Table VALUE('cu01011', 'manali das', 'rajapur', 'allahabad' ,212098, 'uttar pradesh' ,3990.9);

INSERT INTO Salesman_Table VALUE('s001', 'rohan singh', 'rajapur', 'allhabad', 212098, 'uttar pradesh', 8000);
INSERT INTO Salesman_Table VALUE('s002' ,'rohan singh', 'naini', 'allhabad' ,212096 ,'uttar pradesh', 9800);
INSERT INTO Salesman_Table VALUE('s003' ,'smita roy'   ,'indira nagar', 'lucknow' ,226078, 'uttar pradesh', 3400);
INSERT INTO Salesman_Table VALUE('s004', 'kabir bora' , 'vikas nagar' ,'lucknow ',226045, 'uttar pradesh' ,6700);
INSERT INTO Salesman_Table VALUE('s005' ,'neha  singh' ,'gomti nagar', 'lucknow', 226032 ,'uttar pradesh', 9600);
INSERT INTO Salesman_Table VALUE('s006' ,'priya agarwal' ,'gandhi road', '32 distric', 799750 ,'delhi' ,9900);
INSERT INTO Salesman_Table VALUE('s007' ,'ashok paul'  ,  'filmcity' ,'munnabari', 799740, 'mumbai', 8900);

insert into Sales_order_table values
('son01001','2008-08-01','cu01001','s001','yes','2008-08-20',2220.40,50,null),
('son01002','2008-08-12','cu01004','s001','yes','2008-08-23',2220.40,15,null),
('son01003','2008-08-12','cu01005','s002','yes','2008-08-26',2220.40,10,null),
('son01004','2008-08-13','cu01004','s001','yes','2008-08-20',2220.40,15,null),
('son01005','2008-08-14','cu01002','s002','no','2008-08-31',2220.40,52,'2008-03-28'),
('son01006','2008-08-15','cu01001','s001','yes','2008-08-31',2220.40,43,null),
('son01007','2008-08-16','cu01003','s004','yes','2008-08-28',2220.40,54,null),
('son01008','2008-01-16','cu01004','s003','yes','2008-08-02',2390.00,34,null),
('son01009','2008-02-01','cu01004','s003','no','2008-08-28',8220.40,54,'2008-03-18');