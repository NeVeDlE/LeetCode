select employee.name as name,bonus.bonus as bonus from employee 
left join bonus
on employee.empId=bonus.empId
where bonus.bonus <1000 or bonus.bonus is null
