# Write your MySQL query statement below

# select s.name,c.name,c.com_id,o.sales_id 
# from SalesPerson s
# left join Orders o on s.sales_id = o.sales_id
# left join Company c on c.com_id = o.com_id
# # where c.name is null or c.name != "RED";

select s.name from SalesPerson s 
where s.sales_id not in (select o.sales_id 
from Orders o join Company c 
on o.com_id = c.com_id
where c.name = "RED");