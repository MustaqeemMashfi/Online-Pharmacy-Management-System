🌿 ZenPharma - Online Pharmacy Management System
A Comprehensive Console-Based Pharmacy Management System Developed in C

<div align="center">
https://img.shields.io/github/repo-size/DiptoChaklader/Group_Project?style=for-the-badge&color=blueviolet
https://img.shields.io/github/contributors/DiptoChaklader/Group_Project?style=for-the-badge&color=orange
https://img.shields.io/github/stars/DiptoChaklader/Group_Project?style=for-the-badge&color=yellow
https://img.shields.io/github/forks/DiptoChaklader/Group_Project?style=for-the-badge&color=success
https://img.shields.io/github/issues/DiptoChaklader/Group_Project?style=for-the-badge&color=red
https://img.shields.io/badge/platform-Windows%2520%257C%2520Linux-brightgreen?style=for-the-badge
https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c
https://img.shields.io/badge/license-MIT-yellow?style=for-the-badge

</div>
📋 Table of Contents
🏥 About ZenPharma

✨ Features

🎯 Project Modules

🗂️ Data Storage

🖥️ User Interface Design

🚀 Getting Started

📸 Screenshots

👥 Contributors

📞 Contact

📜 License

🏥 About ZenPharma
ZenPharma is a comprehensive Console-Based Pharmacy Management System developed in C Language. It provides a complete solution for managing an online pharmacy with three distinct user portals, demonstrating fundamental concepts of file handling, data structures, user authentication, and transaction management.

🎯 Key Highlights
Aspect	Description
Language	C Programming Language
Data Storage	Plain Text Files (Portable & Lightweight)
User Portals	Admin, Customer & Deliveryman
Authentication	Role-Based Access Control
Transactions	Complete Order & Payment Management
UI	Interactive Console-based Interface
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
🎯 Project Modules
📂 Core Modules
text
Group_Project/
├── main.c                 # Entry point of the application
├── admin.c / admin.h      # Admin module with full control
├── customer.c / customer.h # Customer module with shopping features
├── deliveryman.c / deliveryman.h # Deliveryman module for order management
├── product.c / product.h  # Product management and inventory
├── transaction.h          # Transaction handling and payments
├── cart.c                 # Shopping cart management
├── payment.c              # Payment processing (COD, Bkash, Nagad)
├── order.c                # Order management and history
├── ui.c                   # User interface components
└── about.txt              # Pharmacy information page
📁 Data Files
text
Data Files/
├── product.txt            # Product inventory database
├── customer.txt           # Customer account information
├── order.txt              # Order history and details
├── feedback.txt           # Customer feedback records
├── deliverymaninfo.txt    # Deliveryman credentials
└── about.txt              # Pharmacy information
🗂️ Data Storage
All data is stored in plain text files for simplicity and portability:

File Name	Purpose	Format
product.txt	Product inventory database	ID|Name|Category|Company|Description|Expiry|Price|Pack|Stock
customer.txt	Customer account information	Name|Phone|Password
order.txt	Order history and details	Complete order receipts
feedback.txt	Customer feedback records	Structured feedback entries
deliverymaninfo.txt	Deliveryman credentials	ID|Name|Phone|Password
about.txt	Pharmacy information	Plain text with formatting
🖥️ User Interface Design
🎨 Console UI Features
ASCII Art Headers for professional appearance

Colorful Borders using ASCII characters

Structured Menus with numbered options

Table Formatting for product listings

Detailed Receipts with complete order information

Password Masking for security

Clear Screen Navigation for smooth user experience

🏗️ UI Architecture
text
+=================================================+
|                 Z E N P H A R M A                |
|             ONLINE PHARMACY SYSTEM              |
+=================================================+
|                                                 |
|    +----------------+  +----------------+      |
|    |    ADMIN       |  |   CUSTOMER    |      |
|    |    PORTAL      |  |   PORTAL      |      |
|    +----------------+  +----------------+      |
|                                                 |
|    +----------------+                           |
|    |  DELIVERYMAN   |                           |
|    |  PORTAL        |                           |
|    +----------------+                           |
|                                                 |
+=================================================+
|           YOUR HEALTH, OUR PRIORITY             |
+=================================================+
🚀 Getting Started
📋 Prerequisites
Requirement	Description
Compiler	GCC or any C compiler
Terminal	Command Prompt / Terminal
Git	For cloning repository
OS	Windows / Linux / macOS
📦 Installation
Step 1: Clone the repository

bash
git clone https://github.com/DiptoChaklader/Group_Project.git
cd Group_Project
Step 2: Compile the program

bash
gcc main.c admin.c customer.c deliveryman.c product.c cart.c payment.c order.c ui.c -o zenpharma
Step 3: Run the application

bash
./zenpharma    # Linux/macOS
zenpharma.exe  # Windows
🔑 Default Credentials
Portal	Username/Phone	Password
Admin	admin	1234
Deliveryman	1234	1234
Customer	01234567890	mashfi
📸 Screenshots
🏠 Main Menu Interface
text
+====================================================================+
|                                                                              |
|       ZZZZZ  EEEEE  NN  NN  PPPP   HH  HH   AAA   RRRR   MM   MM   AAA   |
|          ZZ  EE     NNN NN  PP PP  HH  HH  A   A  RR RR  MMM MMM  A   A  |
|         ZZ   EEEE   NN NNN  PPPP   HHHHHH  AAAAA  RRRR   MM M MM  AAAAA  |
|        ZZ    EE     NN  NN  PP     HH  HH  A   A  RR RR  MM   MM  A   A  |
|       ZZZZZ  EEEEE  NN  NN  PP     HH  HH  A   A  RR  RR MM   MM  A   A  |
|                                                                              |
|                              Z E N P H A R M A                              |
|                       ONLINE PHARMACY MANAGEMENT SYSTEM                     |
|                                                                              |
+====================================================================+
|                                                                              |
|                           //=======================\\                       |
|                          ||   WELCOME TO ZENPHARMA  ||                      |
|                          ||   ONLINE SUPPORT SYSTEM ||                      |
|                           \\=======================//                       |
|                                                                              |
|                       +----------------------+     +----------------------+ |
|                       |       [ 1 ]          |     |       [ 2 ]          | |
|                       |     ADMIN PORTAL     |     |   CUSTOMER PORTAL    | |
|                       +----------------------+     +----------------------+ |
|                                                                              |
|                       +----------------------+     +----------------------+ |
|                       |       [ 3 ]          |     |       [ 4 ]          | |
|                       |  DELIVERY MAN PORTAL |     |        EXIT          | |
|                       +----------------------+     +----------------------+ |
|                                                                              |
|                         --- Committed to a Healthier You ---                |
|                                                                              |
+====================================================================+
|                              >>>>>  YOUR HEALTH, OUR PRIORITY  <<<<<       |
+====================================================================+

Enter your choice : _
🛒 Product Listing
text
+=====================================================================================+
| ID          | Name                 | Company        | Price/pack   | Stock         |
+=====================================================================================+
| 101         | NAPA EXTRA            | SQUARE         | 25.00        | 115           |
| 102         | SECLO 20              | MED            | 16.00        | 120           |
| 103         | NAPA SYRUP            | SQUARE         | 35.00        | 40            |
| 105         | AZITHROCIN 500        | ACI            | 150.00       | 50            |
| 106         | CEF-3 200             | BEXIMCO        | 200.00       | 40            |
| 107         | MAXPRO 20             | ESCORP         | 60.00        | 109           |
+=====================================================================================+

1. Search Product
2. Back

Enter Your Choice : _
🛍️ Shopping Cart
text
+=============================================================================================================+
|                                                 YOUR SHOPPING CART                                          |
+=============================================================================================================+
| ID       Name                      Price/Pack   Qty/Pack   Total                                        |
+-------------------------------------------------------------------------------------------------------------+
| 101      NAPA EXTRA                25.00        2          50.00                                          |
| 102      SECLO 20                  16.00        1          16.00                                          |
+-------------------------------------------------------------------------------------------------------------+
| Grand Total : 66.00 Tk                                                                                    |
+=============================================================================================================+

+============================+
| 1. Update Quantity         |
| 2. Remove Item             |
| 3. Clear Cart              |
| 4. Checkout                |
| 5. Back                    |
+============================+

Enter Your Choice : _
💳 Payment Interface
text
+=============================================+
|                PAYMENT METHOD               |
+=============================================+
| 1. Cash On Delivery                         |
| 2. Bkash                                    |
| 3. Nagad                                    |
| 0. Cancel                                   |
+=============================================+
| Grand Total : 185.00 Tk                    |
+=============================================+

Enter Your Choice : _
📝 Order Receipt
text
+=============================================================+
|                        ZENPHARMA                            |
+=============================================================+
| Order ID : 1001                                             |
| Customer Name : Mustaqeem Mashfi                           |
| Phone Number  : 01234567890                                |
+=============================================================+
|                         Products                            |
+=============================================================+
| ID   Name                      Qty   Price     Total       |
| 101  NAPA EXTRA                5     25.00     125.00      |
+=============================================================+
| Items Total      : 125.00 Tk                               |
| Delivery Charge  : 60.00 Tk                                |
| Grand Total      : 185.00 Tk                              |
| Payment Method   : Cash On Delivery                        |
+=============================================================+
|               Delivery Address                              |
+=============================================================+
| District    : DHAKA                                        |
| Area        : Mohakhali                                    |
| House/Road  : 96/A                                         |
+=============================================================+
|               Deliveryman Information                       |
+=============================================================+
| Deliveryman ID      : 4                                    |
| Deliveryman Name    : Rafi Islam                           |
| Deliveryman Phone   : 01444444444                          |
| Status  : PENDING                                          |
+=============================================================+
|                    THANK YOU FOR SHOPPING                   |
+=============================================================+
👥 Contributors
Name	Role	GitHub
Dipto Chaklader	Project Lead & Developer	@DiptoChaklader
Mustaqeem Mashfi	Developer & Tester	@Mashfi
📞 Contact
Platform	Contact
Email	info@zenpharma.com
Phone	+880 1234-567890
Website	www.zenpharma.com
Address	Dhaka, Bangladesh
📜 License
<div align="center">
https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge

Copyright © 2024 ZenPharma

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software.

</div>
<div align="center">
🙏 Acknowledgments
Special thanks to all contributors and testers

Inspired by the need for accessible pharmacy management

Built with ❤️ using C Programming Language

🌟 Star Us on GitHub
If you like this project, please consider giving it a ⭐ on GitHub!

📊 Project Statistics
https://img.shields.io/badge/Total%2520Lines-5000+-blue?style=flat-square
https://img.shields.io/badge/Files-18-green?style=flat-square
https://img.shields.io/badge/Functions-50+-orange?style=flat-square
https://img.shields.io/badge/Data%2520Files-6-red?style=flat-square

💖 ZenPharma
Your Health, Our First Priority
Made with ❤️ by the ZenPharma Team

</div>
