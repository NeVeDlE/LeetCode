select r.contest_id , round((count(r.user_id)/(select count(user_id) from users)) *100,2) as percentage 
from register r
join users s
on r.user_id=s.user_id
group by r.contest_id
order by percentage desc, contest_id  asc
