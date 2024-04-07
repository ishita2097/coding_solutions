# Write your MySQL query statement below

Select t.email as Email from (Select email,count(*) as freq from Person
group by email) as t
where t.freq > 1;
