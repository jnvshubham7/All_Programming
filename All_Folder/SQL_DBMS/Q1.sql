-- drop database db4;
create database db4;
use db4;

-- drop table student;
create table student(std_id int, std_name varchar(30), _subject varchar(30));

insert into student values
(1,'Alice','Database'),
(2,'Bob','Cryptography'),
(3,'David','Maths,Database'),
(4,'Stark','Programming,Maths'),
(5,'Nick','Algorithm');

set @var = 0;
call new_procedure(@var);
select @var;

select new_function(@var);
