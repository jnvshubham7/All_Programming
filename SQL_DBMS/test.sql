create database test;

use test;


create table student (
roll_no int NOT NULL,
name char(255),
mob_no varchar(50),
primary key (roll_no)
);




insert into student value (1,'A','1234567890 , 3255678901');
-- delete from student where roll_no=1;
drop table student;



insert into student value (2,'B','1234567890');
insert into student value (3,'C','1234567890');
insert into student value (4,'D','1234567890');
insert into student value (5,'E','1234567890');
insert into student value (6,'F','1234567890');

select * from student;


set @var=0;
call test.new_procedure(@var);
select @var;












