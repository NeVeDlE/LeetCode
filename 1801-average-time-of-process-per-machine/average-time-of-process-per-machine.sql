# Write your MySQL query statement below
select distinct a1.machine_id as machine_id , round(avg(a1.timestamp- a2.timestamp),3) as processing_time
#select *
 from activity a1
join activity a2
on a1.process_id=a2.process_id
where a1.activity_type ='end' and a2.activity_type ='start'
and a1.machine_id=a2.machine_id
group by a1.machine_id