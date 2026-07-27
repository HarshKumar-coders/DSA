# Write your MySQL query statement below
select e.product_name,u.year,u.price from sales as u left join product as e
on u.product_id=e.product_id;