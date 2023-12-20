-- Question 24
-- Table my_numbers contains many numbers in column num including duplicated ones.
-- Can you write a SQL query to find the biggest number, which only appears once.

-- +---+
-- |num|
-- +---+
-- | 8 |
-- | 8 |
-- | 3 |
-- | 3 |
-- | 1 |
-- | 4 |
-- | 5 |
-- | 6 | 
-- For the sample data above, your query should return the following result:
-- +---+
-- |num|
-- +---+
-- | 6 |
-- Note:
-- If there is no such number, just output null.

-- Solution
Select max(a.num) as num
from 
( 
    select num, count(*)
    from my_numbers
    group by num
    having count(*)=1
) a




To find the biggest number that appears only once in the `my_numbers` table, you can use the following SQL query:

```sql
SELECT MAX(num) AS num
FROM (
    SELECT num
    FROM my_numbers
    GROUP BY num
    HAVING COUNT(*) = 1
) AS unique_numbers;
```

Heres an explanation of the query:

1. **SELECT num FROM my_numbers GROUP BY num HAVING COUNT(*) = 1:** This inner query selects distinct numbers (`num`) from the `my_numbers` table and filters only those that appear exactly once. The `HAVING COUNT(*) = 1` condition ensures that we only consider numbers that have a count of 1.

2. **MAX(num) AS num:** This outer query then selects the maximum value from the unique numbers obtained from the inner query.

The result will be the biggest number that appears only once, and if there is no such number, it will return `null`.