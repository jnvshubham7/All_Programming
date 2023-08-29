-- 1
 SELECT cust_name,city FROM customer;
-- 2
 SELECT item_name FROM inventory;
-- 3
 SELECT * FROM customer WHERE city='allahabad';
-- 4
 SELECT * FROM inventory WHERE sell_prize>=2000 and sell_prize<=5000;
-- 5
 ALTER TABLE inventory ADD new_price DOUBLE;
 SELECT * FROM inventory;
-- 6
 ALTER TABLE sales_order RENAME COLUMN item_rate TO new_item_rate;
-- 7
 SELECT * FROM inventory ORDER BY item_description;
-- 8
 SELECT sales_order_no,sales_order_date FROM sales_order;
-- 9
DELETE FROM sales_order WHERE delivery_date='';