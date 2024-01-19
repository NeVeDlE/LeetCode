select concat(year(trans_date),'-',
if(month(trans_date)<10,concat('0',month(trans_date)),month(trans_date))) as month,
country,
count(amount) as trans_count,
sum(if(state='approved',1,0)) as approved_count,
sum(amount) as trans_total_amount,
sum(if(state='approved',amount,0))as approved_total_amount
from Transactions 
group by month,country

