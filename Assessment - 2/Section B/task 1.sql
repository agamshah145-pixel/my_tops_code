create database foodapp_db;

create table restaurants
(restaurant_id INT AUTO_INCREMENT PRIMARY KEY, name varchar(100) not null, city varchar(100), cuisine_type varchar(100), rating decimal(3,1));

insert into restaurants
(name, city, cuisine_type, rating)
values
('Spice Garden', 'Ahmedabad', 'Indian', 4.2),
('Pizza Hub', 'Surat', 'Italian', 4.0),
('Food Palace', 'Vadodara', 'Chinese', 4.3),
('Royal Dine', 'Ahmedabad', 'Gujarati', 4.1),
('Burger Point', 'Surat', 'Fast Food', 3.9),
('Tasty Treat', 'Rajkot', 'Indian', 4.4);

update restaurants set rating = 4.5 where restaurant_id = 6;

delete from restaurants where restaurant_id = 4;

select * from restaurants order by rating desc;