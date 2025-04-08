# Write your MySQL query statement below
select distinct visits.customer_id as customer_id, count(visits.visit_id) as count_no_trans 
#select *
from visits
left join Transactions 
on visits.visit_id=Transactions.visit_id
where visits.visit_id not in (select visit_id from transactions)
group by visits.customer_id
