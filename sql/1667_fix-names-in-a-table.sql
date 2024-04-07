# Write your MySQL query statement below

select user_id,
Concat(Upper(Left(name,1)),Lower(Right(name,length(name)-1))) as name
from Users
order by user_id;