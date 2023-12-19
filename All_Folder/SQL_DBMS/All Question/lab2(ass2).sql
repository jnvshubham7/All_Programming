USE general_store;

-- Q1
SELECT cust_name,city FROM customer;

-- Q2
SELECT item_name FROM inventory;

-- Q3
SELECT * FROM customer WHERE city='allahabad';

-- Q4
SELECT * FROM inventory WHERE sell_prize>=2000 AND sell_prize<=5000;

-- Q5
ALTER TABLE inventory ADD new_price DOUBLE;
SELECT * FROM inventory;

-- Q6
ALTER TABLE sales_order RENAME COLUMN item_rate TO new_item_rate;

-- Q7
SELECT * FROM inventory ORDER BY item_description;

-- Q8
SELECT sales_order_no,sales_order_date FROM sales_order;

-- Q9
DELETE FROM sales_order WHERE DATE(delivery_date) < '2008-08-25';

-- Q10
UPDATE sales_order SET delivery_date='2008-08-16' WHERE sales_order_no='son010008';

-- Q11
UPDATE customer SET bal_due=1200 WHERE cust_id='cu01003';

-- Q12
-- SET SQL_SAFE_UPDATES=0;
UPDATE inventory SET sell_prize=3000 WHERE item_name='dvd writer';

-- Q13
-- SELECT * FROM inventory as t WHERE t.item_description = 'HDD1034' OR t.item_description = 'DVDRW';
SELECT * FROM inventory  WHERE item_description = 'HDD1034' OR item_description = 'DVDRW';

-- Q14
SELECT cust_name,city,state FROM customer WHERE state!='uttar pradesh';

-- Q15
SELECT * FROM sales_order WHERE month(cancel_date)='03';

-- Q16
UPDATE salesman SET salary=10000 WHERE salesman_name='rohan singh' AND address='naini' AND city='allahabad';

-- Q17
ALTER TABLE customer ADD cust_mobile BIGINT; 

-- Q18
SELECT * FROM customer WHERE city!='allahabad' AND city!='lucknow';

-- Q19
SELECT cust_name  FROM customer WHERE cust_name LIKE 'p%';

-- Q20
SELECT sales_order_date,cust_id,salesman_id,delivery_date FROM sales_order WHERE total_quantity_order>15 AND total_quantity_order<50;

-- Q21
SELECT cust_id FROM sales_order WHERE delivery_date='2008-08-30';

-- Q22
-- a
SELECT DATE_FORMAT(sales_order_date,'%d-%m-%y'),DATE_FORMAT(delivery_date,'%d-%m-%y') FROM sales_order;
-- b
SELECT DATE_FORMAT(sales_order_date,'%d-%m-%Y'),DATE_FORMAT(delivery_date,'%d-%m-%Y') FROM sales_order;
-- c
SELECT DATE_FORMAT(sales_order_date,'%d %m %y'),DATE_FORMAT(delivery_date,'%d %m %y') FROM sales_order;

-- Q23
SELECT cust_name FROM customer WHERE cust_name LIKE '%an%';

-- Q24
SELECT cust_name FROM customer WHERE cust_name LIKE 'pri_an_a%';

-- Q25
SELECT salesman_name FROM salesman WHERE salesman_name LIKE 'r%' OR salesman_name LIKE 's%' OR salesman_name LIKE 'k%';

-- Q26
DROP TABLE sales_order;

-- Q27
SELECT NOW();

-- Q28
SHOW COLUMNS FROM customer;

-- Q29
ALTER TABLE salesman  RENAME TO sales_man;