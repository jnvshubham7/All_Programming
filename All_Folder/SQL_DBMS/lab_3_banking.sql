create database lab_3_banking;
use lab_3_banking;

create table Customer_table(
	Customer_name varchar(40),
	Customer_street varchar(40),
	Customer_city varchar(40)
);

create table Loan_table(
	Loan_number varchar(40) PRIMARY KEY,
	Branch_name varchar(40),
	Amount INT
);

create table Borrower_table(
	Customer_name varchar(40) ,
	Loan_number varchar(40),
	foreign key (Loan_number) references Loan_table(Loan_number) on delete cascade
);

create table Account_table(
	Account_number varchar(40) PRIMARY KEY,
	Branch_name varchar(40),
	Balance INT
);

create table Depositor_table(
	Customer_name varchar(40) ,
	Account_number varchar(40),
	foreign key (Account_number) references Account_table(Account_number) on delete cascade
);

insert into Customer_table values('Adams','Spring','Pittsfield');
insert into Customer_table values('Brooks','Senator','Brooklyn');
insert into Customer_table values('Curry','North','Rye');
insert into Customer_table values('Glenn','Sand Hill ','Woodside');
insert into Customer_table values('Hayes','Main','Harrison');
insert into Customer_table values('Green','Walnut','Stamford');
insert into Customer_table values('Johnson','Alma','Palo Alto');
insert into Customer_table values('Jones','Main','Harrison');
insert into Customer_table values('Lindsay','Park','Pittsfield');
insert into Customer_table values('Smith','North','Rye');
insert into Customer_table values('Turner','Putnam','Stamford');
insert into Customer_table values('Williams','Nassau','Princeton');

insert into Loan_table values('L-11','Round Hill',900);
insert into Loan_table values('L-14','Downtown',1500);
insert into Loan_table values('L-15','Perryridge',1500);
insert into Loan_table values('L-16','Perryridge',1300);
insert into Loan_table values('L-17','Downtown',1000);
insert into Loan_table values('L-23','Redwood',2000);
insert into Loan_table values('L-93','Mianus',500);

insert into Borrower_table values('Adams','L-16');
insert into Borrower_table values('Curry','L-93');
insert into Borrower_table values('Hayes','L-15');
insert into Borrower_table values('Jackson','L-14');
insert into Borrower_table values('Jones','L-17');
insert into Borrower_table values('Smith','L-11');
insert into Borrower_table values('Smith','L-23');
insert into Borrower_table values('Williams','L-17');

insert into Account_table values('A-101','Downtown',500);
insert into Account_table values('A-215','Mianus',700);
insert into Account_table values('A-102','Perryridge',400);
insert into Account_table values('A-305','Round Hill ',350);
insert into Account_table values('A-201','Brighton',900);
insert into Account_table values('A-222','Redwood',700);
insert into Account_table values('A-217','Brighton',750);

insert into Depositor_table values('Hayes','A-102');
insert into Depositor_table values('Johnson','A-101');
insert into Depositor_table values('Johnson','A-201');
insert into Depositor_table values('Jones','A-217');
insert into Depositor_table values('Lindsay','A-222');
insert into Depositor_table values('Smith','A-215');
insert into Depositor_table values('Turner','A-305');




select * from Customer_table;
select * from Loan_table;
select * from Borrower_table;
select * from Account_table;
select * from Depositor_table;



-- 1. Display the tuples of the loan relation where the branch is “Perryridge”.
select * from Loan_table 
where Branch_name="Perryridge";



-- 2. Find those customers who live in Harrison city
select Customer_name from  Customer_table
where Customer_city="Harrison";



-- 3. Find the names of all customers who have a loan at the bank, and find the amount of the loan.
select Borrower_table.Customer_name, Loan_table.Amount
from Borrower_table
join Loan_table
on Borrower_table.Loan_number=Loan_table.Loan_number
order by Borrower_table.Customer_name;



-- 4. Find the names of all branches in the loan relation.
select distinct Branch_name from Loan_table;



-- 5. Find all loan numbers for loans made at the “Downtown” branch with loan amounts greater that $1000.
select Loan_number from Loan_table
where Branch_name="Downtown" and Amount>1000;



-- 6. Find the loan number of those loans with loan amounts between $1,400 and $2,000.
select Loan_number from Loan_table
where Amount  between 1400 and 2000;



-- 7. For all customers who have a loan from the bank, find their names, loan numbers.
select * from Borrower_table;



-- 8. For all customers who have a loan from the bank, find their names, loan numbers, and loan amount.
select Borrower_table.Customer_name, Borrower_table.Loan_number, Loan_table.Amount
from Borrower_table
join Loan_table
where Borrower_table.Loan_number=Loan_table.Loan_number
order by Borrower_table.Customer_name;



-- 9. Find the names of all branches that have assets greater than at least one branch located in Horseneck.
select Branch_name
from Account_table
where Balance > (
    select min(Balance)
    from Account_table
    where Branch_name="Horseneck"
);



-- 10. Find the names of all customers whose street address includes the substring ‘’North’’.
select Customer_name from Customer_table
where Customer_street like "%North%";



-- 11. List the name of the customers in alphabetical order, who have a loan at the “Perryridge” branch.
select Borrower_table.Customer_name
from Borrower_table
join Loan_table
where Borrower_table.Loan_number=Loan_table.Loan_number and Loan_table.Branch_name="Perryridge"
order by Borrower_table.Customer_name;



-- 12. Find the average account balance at each branch.
select branch_name, avg(balance)
from Account_table
group by branch_name ;



-- 13. Find the number of depositors for each branch.
select Branch_name, count(Customer_name)
from Account_table
natural join Depositor_table
group by Branch_name;



-- 14. Find all loan numbers that appear in the loan relation with null values for amount.
select Loan_number from Loan_table
where Amount=null;



-- 15. Find all customers who have both a loan and an account at the bank.
select distinct Borrower_table.Customer_name
from Borrower_table
where Borrower_table.Customer_name in (
    select Customer_name from Depositor_table
);



-- 16. Find all customers who have both an account and a loan at the Perryridge branch.
select Borrower_table.Customer_name 
from Borrower_table
where Borrower_table.Customer_name in (
	select Customer_name 
    from Depositor_table 
    where Account_number in (
		select Account_number 
		from Account_table
        where Branch_name="Perryridge"
	)
);



-- 17. Find all customers who do have a loan at the bank, but do not have an account at the bank.
select distinct Borrower_table.Customer_name
from Borrower_table
where Borrower_table.Customer_name not in (
    select Customer_name from Depositor_table
);



-- 18. Find the names of all branches that have assets greater than those of at least one branch located in Brooklyn. 
select Branch_name 
from Account_table
where Balance > (
	select min(Balance) 
    from Account_table
    where Branch_name="Brooklyn"
); 




-- 19. Write a Query for following situation.
-- Bank wants to present a new $200 savings account as a gift to all loan customers of the Perryridge branch, for each loan they have.
select Borrower_table.Customer_name 
from Borrower_table
where Borrower_table.Loan_number in(
	select Loan_number
    from Loan_table
    where Branch_name="Perryridge"
);

