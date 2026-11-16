create table orders
(order_id int primary key auto_increment, restaurant_id int, customer_name varchar(100) not null, total_amount int, order_date date);

insert into orders
(restaurant_id, customer_name, total_amount, order_date)
values
(1, 'Aarav', 1200, '2026-10-20'),
(1, 'Riya', 1500, '2026-10-21'),
(1, 'Kabir', 1800, '2026-10-22'),
(2, 'Diya', 900, '2026-10-23'),
(2, 'Arjun', 1300, '2026-10-24'),
(2, 'Meera', 1100, '2026-10-25'),
(3, 'Ishaan', 2000, '2026-10-26'),
(3, 'Anaya', 2200, '2026-10-27'),
(3, 'Vivaan', 1900, '2026-10-28'),
(4, 'Neha', 2500, '2026-10-29'),
(4, 'Rahul', 2800, '2026-10-30'),
(4, 'Priya', 3000, '2026-10-31');

select sum(total_amount) as total_revenue from orders;
select avg(total_amount) as average_value from orders group by restaurant_id; 

select restaurant_id, sum(total_amount) as total_revenue from orders
group by restaurant_id 
having sum(total_amount) > 5000;

select * from orders 
order by order_date desc limit 5;




