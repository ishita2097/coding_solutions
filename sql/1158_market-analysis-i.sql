# Write your MySQL query statement below
# select u.user_id as buyer_id,u.join_date, count(o.buyer_id) as orders_in_2019
# from Users as u left join Orders as o
# on u.user_id = o.buyer_id
# where YEAR(o.order_date) = '2019'
# group by u.user_id;

select u.user_id as buyer_id,u.join_date, count(o.buyer_id) as orders_in_2019
from Users as u 
left join 
(Select order_date, buyer_id
from Orders 
where YEAR(order_date) = '2019') as o
on u.user_id = o.buyer_id
group by u.user_id;