# Write your MySQL query statement below

with cte1 as(select e.name as Employee,e.salary as Salary,d.name as Department
from Employee as e join Department as d
on e.departmentId  = d.id),
cte2 as(select *,
DENSE_RANK() over(partition by Department order by Salary desc) as R
from cte1)
select Department,Employee,Salary 
from cte2
where R=1;