# Write your MySQL query statement below
select s.product_id,s.year as first_year ,s.quantity,s.price from sales s
 join (select product_id,min(year)as first_year,quantity,price from sales 
group by product_id) as tmp
on s.product_id=tmp.product_id
where tmp.first_year=s.year
