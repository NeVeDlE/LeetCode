# Write your MySQL query statement below
select round(sum(if(Date_add(tmp.min_date,interval 1 day)=a.event_date,1,0))/count(distinct tmp.player_id),2) as fraction
from
(select player_id,min(event_date) as min_date from activity group by player_id) as tmp
join activity a
on tmp.player_id=a.player_id



