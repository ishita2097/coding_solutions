# Write your MySQL query statement below

# with cte1 as(select id,temperature,recordDate,
# date_sub(recordDate, interval 1 day) as prev_date
# from Weather),

# cte2 as(select cte1.*,w.temperature as temp 
# from cte1 left join Weather w 
# on cte1.prev_date = w.recordDate)
# select id from cte2
# where temp is not null and temperature > temp;


select w1.id 
from Weather w1 join Weather w2
where w1.temperature > w2.temperature and datediff(w1.recordDate,w2.recordDate) =1;