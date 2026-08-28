ZenPharma - Online Pharmacy Management System
https://img.shields.io/github/repo-size/DiptoChaklader/Group_Project
https://img.shields.io/github/contributors/DiptoChaklader/Group_Project
https://img.shields.io/github/stars/DiptoChaklader/Group_Project

🏥 About ZenPharma
ZenPharma is a comprehensive Console-Based Pharmacy Management System developed in C. It provides a complete solution for managing an online pharmacy with three distinct user portals:

Admin Portal – Full control over products, orders, and pharmacy information

Customer Portal – Browse products, manage cart, place orders, and give feedback

Deliveryman Portal – View assigned orders and update delivery status

This project demonstrates fundamental concepts of file handling, data structures, user authentication, and transaction management in C programming.

👥 Group Project - My Contributions
As part of this group project, I was responsible for developing the following core modules:

Module	Files	Description
📦 Cart Management	cart.c	Full shopping cart functionality including add, update quantity, remove items, clear cart, and view cart with real-time total calculation
💳 Payment System	payment.c	Implementation of multiple payment methods (Cash on Delivery, Bkash, Nagad) with validation for mobile numbers and payment amounts
📋 Order Processing	order.c	Complete order workflow including checkout, order ID generation, receipt generation, order saving to file, and order history viewing
📄 Transaction Header	transaction.h	Defined core data structures including Cart, Deliveryinfo, and declared all transaction-related functions
My Contribution Details
🛒 Shopping Cart Module (cart.c)
Implemented add_to_cart() function with duplicate product checking

Developed view_cart() with formatted display showing product details, quantities, and grand total

Created update_cart_quantity() with stock validation

Built remove_cart_item() and clear_cart() functions with confirmation prompts

Maintained cart state using global arrays and counters

💰 Payment Processing (payment.c)
Designed payment() function with a menu-driven approach for payment method selection

Implemented cash_on_delivery(), bkash_payment(), and nagad_payment() with detailed validation

Added mobile number validation (11 digits, starts with "01")

Ensured payment amount matches the grand total before proceeding

Integrated seamless flow from payment to receipt generation

📄 Order Management (order.c)
Built checkout() function capturing delivery information (district, area, house/road)

Implemented dynamic delivery charge calculation (60 Tk for Dhaka, 120 Tk for other districts)

Created generate_order_id() that auto-increments from the last order ID

Designed comprehensive receipt() function displaying complete order summary with product details, pricing, and deliveryman information

Developed save_order() to write structured order data to file

Created view_order_history() to display customer-specific orders

Integrated stock reduction with reduce_product_stock() after order placement

🔗 Transaction Header (transaction.h)
Defined Cart structure containing Product and quantity

Defined Deliveryinfo structure for shipping details

Declared all cart, payment, and order-related functions

Exported global variables (cart_count, cart[]) for cross-module access

✨ Features
🔐 Admin Portal
Feature	Description
Add Product	Add new medicines, accessories, skincare, hygiene, and child care products
View Products	Browse products by category (MED/ACC/SKN/HH/CC)
Search Products	Search by product ID or name
Update Product	Modify existing product details
Update Stock	Adjust product stock levels
Delete Product	Remove products from inventory
View Feedback	Read all customer feedback
View Orders	See all placed orders
Edit About	Update pharmacy information page
🛒 Customer Portal
Feature	Description
Browse Products	View products by category
Search Products	Find products by ID or name
Add to Cart	Add products to shopping cart
Update Cart	Change quantity or remove items
Checkout	Place orders with delivery address
Multiple Payments	Cash on Delivery, Bkash, Nagad
Order History	View past orders
Give Feedback	Submit reviews and suggestions
About Pharmacy	View pharmacy information
🚚 Deliveryman Portal
Feature	Description
View Assigned Orders	See orders assigned to you
Update Order Status	Mark orders as DELIVERED
Logout	Secure logout
🗂️ Data Storage
All data is stored in plain text files for simplicity and portability:

File Name	Purpose
product.txt	Product inventory database
customer.txt	Customer account information
order.txt	Order history and details
feedback.txt	Customer feedback records
deliverymaninfo.txt	Deliveryman credentials
about.txt	Pharmacy information
🚀 Getting Started
Prerequisites
C Compiler (GCC recommended)

Terminal/Command Prompt

Git (for cloning)

Installation
Clone the repository

bash
git clone https://github.com/DiptoChaklader/Group_Project.git
cd Group_Project
Compile the program

bash
gcc -o zenpharma main.c admin.c customer.c product.c cart.c order.c payment.c deliveryman.c ui.c
Run the program

bash
./zenpharma
👤 User Credentials
Role	Username/Phone	Password
Admin	admin	1234
Deliveryman	See deliverymaninfo.txt	1234 (all)
Customer	Must sign up to create account	User-defined
Sample Deliveryman Accounts
ID	Name	Phone	Password
1	Rakib Hasan	1234	1234
2	Sakib Ahmed	12345	1234
3	Nabil Khan	123456	1234
4	Rafi Islam	1234567	1234
5	Shuvo Das	123456789	1234
