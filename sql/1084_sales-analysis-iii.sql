# Write your MySQL query statement below

select distinct p.product_id,p.product_name from
Sales s left join Product p
on s.product_id= p.product_id
where p.product_id not in (Select product_id from Sales where sale_date not between '2019-01-01' and '2019-03-31');