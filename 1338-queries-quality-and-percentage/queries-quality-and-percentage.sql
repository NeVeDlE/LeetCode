select query_name ,round(avg(rating/position),2) as quality
,round(
    ((select count(q1.query_name) 
from Queries q1 
where q1.query_name=q.query_name and q1.rating<3)
/count(query_name))*100,2) as poor_query_percentage 
    from Queries q
    where query_name is not null
group by query_name
