# Write your MySQL query statement below

select t.actor_id, t.director_id from(select actor_id,director_id,count(*) as coop_count
from ActorDirector 
group by actor_id,director_id) as t
where t.coop_count>=3;