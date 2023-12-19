--
-- @lc app=leetcode id=577 lang=mysql
--
-- [577] Employee Bonus
--

-- @lc code=start
# Write your MySQL query statement below


select name, Bonus
from Employee left join Bonus 
on Employee.empId=Bonus.empId
where Bonus.bonus<1000 or Bonus.bonus is null;




-- @lc code=end

