drop database db5;
create database db5;
use db5;

create table customer(cust_id int, product_id varchar(10), city varchar(50), amount int, primary Key(cust_id,product_id));

insert into customer values
(1,'P1','Kanpur',1000),
(2,'P2','Delhi',1500),
(1,'P4','Allahabad',2000),
(4,'P3','Mumbai',1000),
(4,'P1','Jaipur',1000),
(2,'P5','Delhi',2000);

set @res=0;
call amt_cust_check(1,@res);
select @res;

set @res=0;
call amt_prod_check('P5',@res);
select @res;



set @res=0;
call city_cust_check(1,@res);
select @res;

set @res=0;
call city_pro_check('P2',@res);
select @res;

 select check_function(@res);



