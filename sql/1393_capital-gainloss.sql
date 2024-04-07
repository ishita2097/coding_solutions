# Write your MySQL query statement below

# select s.stock_name,
# (s.sell_price-s.buy_price) as capital_gain_loss
# from(
# select stock_name, operation,
# sum(case when operation = 'Buy' then price end) as buy_price,
# sum(case when operation = 'Sell' then price end) as sell_price
# from Stocks
# group by stock_name) as s;


select stock_name, 
sum(case when operation = 'Sell' then price end)-sum(case when operation = 'Buy' then price end) as capital_gain_loss
from Stocks
group by stock_name;