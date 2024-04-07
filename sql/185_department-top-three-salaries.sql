# Write your MySQL query statement below

with cte1 as(select name,salary,departmentId, 
dense_rank() over(
    partition by departmentId 
    order by salary desc) r
from Employee)

select d.name as Department, e.name as Employee,e.salary as Salary
from cte1 e
left join Department d
on e.departmentId = d.id
where e.r <=3;