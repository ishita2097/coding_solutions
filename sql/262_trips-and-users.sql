# Write your MySQL query statement below

#cte1-banned user_ids
with cte1 as(select users_id from Users where banned = 'Yes')

select request_at as Day, round(SUM(case
when status='completed' then 0
else 1
end)/count(*),2) as "Cancellation Rate"
from Trips
where client_id not in (select * from cte1)
and driver_id not in (select * from cte1)
and request_at between '2013-10-01' and '2013-10-03' 
group by request_at;