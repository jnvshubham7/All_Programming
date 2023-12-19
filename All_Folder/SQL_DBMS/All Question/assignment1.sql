DROP DATABASE general_store;

CREATE DATABASE general_store;
USE general_store;

CREATE TABLE inventory(
	item_id VARCHAR(20) PRIMARY KEY,
	item_name VARCHAR(20), 
	menu_name VARCHAR(20),
	item_rate DOUBLE,
	sell_prize DOUBLE,
	item_description VARCHAR(20)
);
drop table inventory;

CREATE TABLE customer(
	cust_id VARCHAR(20) PRIMARY KEY,
	cust_name VARCHAR(20),
	address VARCHAR(20),
	city VARCHAR(20),
	pin INTEGER,
	state VARCHAR(20),
	bal_due DOUBLE
);
drop table customer;

CREATE TABLE salesman(
	salesman_id VARCHAR(20) PRIMARY KEY,
	salesman_name VARCHAR(20),
	address VARCHAR(20),
	city VARCHAR(20),
	pin INTEGER,
	state VARCHAR(20),
	salary DOUBLE
);



CREATE TABLE sales_order(
	sales_order_no VARCHAR(20) PRIMARY KEY,
    sales_order_date VARCHAR(20),
    cust_id VARCHAR(20),
    salesman_id VARCHAR(20),
    bill_payby_party VARCHAR(20),
    delivery_date VARCHAR(20),
    item_rate DOUBLE,
    total_quantity_order INTEGER,
    cancel_date VARCHAR(20)
);
drop table sales_order;

INSERT INTO inventory VALUES
('i001','lux_soap','lux_company',15.67,20.43,'soap'),
('i002','copy','royal_notebook',14.80,16.40,'copy'),
('i003','goodday_biscuit','britania_stores',2218.80,2220.40,'biscuit'),
('i004','reynolds_pen','pen_parker',2015.67,2120.43,'pen'),
('i005','sql_books','book_bpb',5104.80,5116.40,'book'),
('i006','tata_steel','tata_sons',5118.80,5120.40,'tata'),
('i007','seagate hdd','hp_world',5104.80,5116.40,'HDD1034'),
('i008','dvd writer','moserbear_org',5118.80,5120.40,'DVDRW');

INSERT INTO customer VALUES
('cu01001','alak roy','b.d.para','Patna',800015,'Bihar',0),
('cu01002','suman roy','puk para','patna',800132,'Bihar',2390.9),
('cu01004','priya das','chora para','Gaya',800010,'Bihar',1390.9),
('cu01005','rina raj','kamal para','patna',800001,'Bihar',0),
('cu01006','pulak roy','bircity','lucknow',226012,'uttar pradesh',110.9),
('cu01007','priyanka das','nappam','lucknow',226005,'uttar pradesh',190.0),
('cu01008','kusum roy','Jhalwa','allahabad',211012,'uttar pradesh',110.0),
('cu01009','mina das','naini','allahabad',211078,'uttar pradesh',0),
('cu01003','nidhi mishra','naini','allahabad',212079,'uttar pradesh',9990.9),
('cu01010','kamal yadav','naini','allahabad',211037,'uttar pradesh',2990.9);

INSERT INTO salesman VALUES
('s001','rohan singh','rajapur','allahabad',212098,'uttar pradesh',8000),
('s002','rohan singh','naini','allahabad',212096,'uttar pradesh',9800),
('s003','smita roy','indira nagar','lucknow',226078,'uttar pradesh',3400),
('s004','kabir bora','vikas nagar','lucknow',226045,'uttar pradesh',6700),
('s005','neha singh','gomti nagar','lucknow',226032,'uttar pradesh',9600),
('s006','priya agarwal','gandhi road','32 distric',799750,'delhi',9900),
('s007','ashok paul','filmcity','munnabari',799740,'mumbai',8900);

INSERT INTO sales_order VALUES
('son010001','2008-08-01','cu010001','s001','yes','2008-08-20',2220.40,50,NULL),
('son010002','2008-08-12','cu010004','s001','yes','2008-08-23',2220.40,15,NULL),
('son010003','2008-08-12','cu010005','s002','yes','2008-08-26',2220.40,10,NULL),
('son010004','2008-08-13','cu010004','s001','yes','2008-08-20',2220.40,15,NULL),
('son010005','2008-08-14','cu010002','s002','no','2008-08-30',2220.40,52,'2008-03-28'),
('son010006','2008-08-15','cu010001','s001','yes','2008-08-31',2220.40,43,NULL),
('son010007','2008-08-16','cu010003','s004','yes','2008-08-28',2220.40,54,NULL),
('son010008','2008-01-16','cu010004','s003','yes','2008-08-02',2390.00,34,NULL),
('son010009','2008-02-01','cu010004','s003','no','2008-08-28',8220.40,54,'2008-03-18');
