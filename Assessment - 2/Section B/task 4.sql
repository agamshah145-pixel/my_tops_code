delimiter $$
create procedure place_order(in p_customer_id int, in p_restaurant_id int, in p_amount int)
begin
declare c_balance decimal(10,2);
start transaction;
select wallet_balance into c_balance from customers where customer_id = p_customer_id for update;

if 
c_balance is null or c_balance <= 0 or c_balance < p_amount then 
SELECT 'Insufficient balance or invalid order' AS message;

else
update customers set wallet_balance = wallet_balance - p_amount
where customer_id = p_customer_id;

insert into orders 
(customer_id, restaurant_id, amount)
values
(p_customer_id, p_restaurent_id, p_amount);

end if ;
commit;
end $$
delimiter ;

call place_order(1, 101, 500);
call place_order(2, 102, 2000);



