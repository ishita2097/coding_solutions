# Write your MySQL query statement below


select t2.id_1 as id,t2.student from (select *,case
when MOD(id,2)=0 then id-1
when MOD(id,2)=1 and id != row_count then id+1
else id
end as id_1
from Seat, (select count(*) as row_count from Seat) as t1) as t2
order by t2.id_1;