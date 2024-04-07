# Write your MySQL query statement below

select t.player_id, t.event_date as first_login from (Select *,
row_number() over(partition by player_id order by event_date asc) as row_num from Activity) as t
where t.row_num=1
group by t.player_id;