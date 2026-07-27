# Write your MySQL query statement below
select u.customer_id, COUNT(*) AS count_no_trans from visits as u left join transactions as e 
on u.visit_id =e.visit_id
WHERE e.transaction_id IS NULL
GROUP BY u.customer_id;;