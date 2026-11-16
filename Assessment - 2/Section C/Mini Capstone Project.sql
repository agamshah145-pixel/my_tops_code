CREATE DATABASE foodcapstone_db;

CREATE TABLE restaurants 
    (restaurant_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50) NOT NULL,
    cuisine_type VARCHAR(50) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP);

CREATE TABLE menu_items 
    (item_id INT PRIMARY KEY AUTO_INCREMENT,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    category VARCHAR(50) NOT NULL,
    FOREIGN KEY (restaurant_id)
    REFERENCES restaurants(restaurant_id));

CREATE TABLE orders 
    (order_id INT PRIMARY KEY AUTO_INCREMENT,
    customer_name VARCHAR(100) NOT NULL,
    restaurant_id INT NOT NULL,
    item_id INT NOT NULL,
    quantity INT NOT NULL,
    total_amount DECIMAL(10,2) NOT NULL,
    order_date DATETIME,
    FOREIGN KEY (restaurant_id)
    REFERENCES restaurants(restaurant_id),
    FOREIGN KEY (item_id)
    REFERENCES menu_items(item_id));
    
INSERT INTO restaurants
(name, city, cuisine_type)
VALUES
('Spice Garden', 'Ahmedabad', 'Indian'),
('Pizza Hub', 'Surat', 'Italian'),
('Food Palace', 'Vadodara', 'Chinese');

INSERT INTO menu_items
(restaurant_id, item_name, price, category)
VALUES
(1, 'Paneer Tikka', 250, 'Starter'),
(1, 'Gujarati Thali', 300, 'Main Course'),
(1, 'Masala Dosa', 150, 'Breakfast'),
(1, 'Cold Coffee', 120, 'Beverage'),
(2, 'Margherita Pizza', 350, 'Main Course'),
(2, 'Garlic Bread', 180, 'Starter'),
(2, 'Farmhouse Pizza', 450, 'Main Course'),
(2, 'Cold Coffee', 130, 'Beverage'),
(3, 'Veg Noodles', 200, 'Main Course'),
(3, 'Manchurian', 220, 'Starter'),
(3, 'Spring Roll', 160, 'Starter'),
(3, 'Masala Tea', 50, 'Beverage');

INSERT INTO orders
(customer_name, restaurant_id, item_id, quantity, total_amount)
VALUES
('Aarav', 1, 1, 2, 500),
('Riya', 1, 2, 1, 300),
('Kabir', 1, 3, 2, 300),
('Diya', 1, 4, 1, 120),
('Arjun', 1, 1, 1, 250),
('Meera', 2, 5, 1, 350),
('Ishaan', 2, 6, 2, 360),
('Anaya', 2, 7, 1, 450),
('Vivaan', 2, 8, 2, 260),
('Neha', 2, 5, 2, 700),
('Rahul', 3, 9, 2, 400),
('Priya', 3, 10, 1, 220),
('Karan', 3, 11, 2, 320),
('Pooja', 3, 12, 2, 100),
('Amit', 3, 9, 1, 200);

CREATE VIEW restaurant_sales_summary AS
SELECT restaurants.name AS restaurant_name, COUNT(orders.order_id) AS total_orders, SUM(orders.total_amount) AS total_revenue
FROM restaurants LEFT JOIN orders ON restaurants.restaurant_id = orders.restaurant_id
GROUP BY restaurants.restaurant_id;

DELIMITER $$
CREATE PROCEDURE add_order
(IN p_customer_name VARCHAR(100), IN p_restaurant_id INT, IN p_item_id INT, IN p_quantity INT)
BEGIN
DECLARE v_price DECIMAL(10,2);
DECLARE v_restaurant_count INT;
START TRANSACTION;
SELECT COUNT(*) INTO v_restaurant_count FROM restaurants
WHERE restaurant_id = p_restaurant_id;

IF v_restaurant_count = 0 THEN
SELECT 'Restaurant does not exist' AS message;        
END IF;

IF p_quantity <= 0 THEN
SELECT 'Quantity must be greater than zero' AS message;  
END IF;

SELECT price INTO v_price FROM menu_items WHERE item_id = p_item_id
AND restaurant_id = p_restaurant_id;

IF v_price IS NULL THEN
SELECT 'Menu item does not belong to this restaurant' AS message;         
END IF;

INSERT INTO orders
(customer_name, restaurant_id, item_id, quantity, total_amount)
VALUES
(p_customer_name, p_restaurant_id, p_item_id, p_quantity, v_price * p_quantity);
COMMIT;
END $$
DELIMITER ;

CALL add_order('Agam', 1, 1, 2);
CALL add_order('Agam', 99, 1, 2);

CREATE TABLE order_audit 
(audit_id INT PRIMARY KEY AUTO_INCREMENT, order_id INT, restaurant_id INT, action VARCHAR(20), log_time DATETIME);

DELIMITER $$
CREATE TRIGGER after_order_insert
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
INSERT INTO order_audit
(order_id, restaurant_id, action, log_time)
VALUES
(NEW.order_id, NEW.restaurant_id, 'INSERT', NOW());
END $$
DELIMITER ;

CALL add_order('Riya', 2, 5, 1);
select * from order_audit;