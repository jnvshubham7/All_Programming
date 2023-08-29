-- Q11 List the name of the customers in alphabetical order, who have a loan at the “Perryridge”
-- branch.
--
--
SELECT customer_name
FROM customer, loan

--   where loan branch name is perryridge

-- where loan branch is e and b
WHERE branch_name = 'Perryridge'  and customer_name = borrower_name
ORDER BY customer_name;
--





-- Q12 Find the average account balance at each branch.
--
SELECT branch_name, AVG(balance)
FROM _account
GROUP BY branch_name;
    




-- Q13 Find the number of depositors for each branch.
--
SELECT branch_name, COUNT(*)
FROM depositor
GROUP BY branch_name;




-- Q14 Find the number of depositors for each branch.
--
SELECT branch_name, COUNT(*)
FROM depositor
GROUP BY branch_name;



--  Q15 Find all loan numbers that appear in the loan relation with null values for amount
--
SELECT loan_number
FROM loan
WHERE amount IS NULL;


-- Find all customers who have both a loan and an account at the bank.
-- 
SELECT customer_name
FROM customer, borrower, loan, _account
WHERE customer_name = customer_name
-- AND customer_name = customer_name








