# Write your MySQL query statement below
select students.student_id as student_id,students.student_name as student_name,
subjects.subject_name as subject_name,COUNT(examinations.student_id) as attended_exams  from students 
cross join Subjects
left join examinations
on students.student_id=examinations.student_id
and Subjects.subject_name=examinations.subject_name
#where 
group by students.student_id,Subjects.subject_name
order by students.student_id,Subjects.subject_name
