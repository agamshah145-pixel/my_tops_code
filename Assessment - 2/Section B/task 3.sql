create  table restaurants
(restaurant_id int auto_increment primary key, name varchar(100), city varchar(100));

create table menu_items
(item_id int auto_increment primary key, restaurant_id int, item_name varchar(255), price int, category varchar(100),
foreign key (restaurant_id) references restaurants(restaurant_id));

insert into restaurants
(name, city)
values
('Spice Garden', 'Ahmedabad'),
('Pizza Hub', 'Surat'),
('Food Palace', 'Vadodara'),
('Burger Point', 'Rajkot'),
('Royal Dine', 'Ahmedabad');

insert into menu_items
(restaurant_id, item_name, price, category)
values
(1, 'Paneer Tikka', 250, 'Starter'),
(1, 'Gujarati Thali', 300, 'Main Course'),
(1, 'Masala Dosa', 150, 'Breakfast'),
(2, 'Margherita Pizza', 350, 'Pizza'),
(2, 'Farmhouse Pizza', 450, 'Pizza'),
(2, 'Garlic Bread', 180, 'Starter'),
(3, 'Veg Noodles', 200, 'Chinese'),
(3, 'Manchurian', 220, 'Chinese'),
(4, 'Veg Burger', 120, 'Fast Food'),
(4, 'Cheese Burger', 180, 'Fast Food'),
(4, 'French Fries', 100, 'Starter'),
(2, 'Cold Coffee', 130, 'Beverage');

select restaurants.name, menu_items.item_name, menu_items.price 
from restaurants inner join menu_items on restaurants.restaurant_id = menu_items.restaurant_id;

select restaurants.name, menu_items.item_name, menu_items.price 
from restaurants left join menu_items on restaurants.restaurant_id = menu_items.restaurant_id;

create view  restaurant_menu_summary as 
select restaurants.name as restaurant_name, count(menu_items.item_id) as total_menu_items, avg(menu_items.price) as average_item_price 
from restaurants left join  menu_items on restaurants.restaurant_id = menu_items.restaurant_id
group by restaurants.restaurant_id;


