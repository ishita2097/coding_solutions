# Write your MySQL query statement below

select distinct num as ConsecutiveNums from (select num,
lead(num) over() as `lead`,
lag(num) over() as `lag`
from Logs) as t
where t.num = t.lead and t.num = t.lag;