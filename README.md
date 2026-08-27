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
<table> <tr> <td>
Feature	Description
➕ Add Product	Add new medicines, accessories, skincare, hygiene, and child care products
📋 View Products	Browse products by category (MED/ACC/SKN/HH/CC)
🔍 Search Products	Search by product ID or name
✏️ Update Product	Modify existing product details
📦 Update Stock	Adjust product stock levels
🗑️ Delete Product	Remove products from inventory
💬 View Feedback	Read all customer feedback
📊 View Orders	See all placed orders
📝 Edit About	Update pharmacy information page
</td> <td>
https://img.shields.io/badge/Admin-Full%2520Control-red?style=for-the-badge&logo=admin

</td> </tr> </table>
🛒 Customer Portal
<table> <tr> <td>
Feature	Description
🔍 Browse Products	View products by category
🔎 Search Products	Find products by ID or name
🛍️ Add to Cart	Add products to shopping cart
✏️ Update Cart	Change quantity or remove items
💳 Checkout	Place orders with delivery address
💰 Multiple Payments	Cash on Delivery, Bkash, Nagad
📜 Order History	View past orders
⭐ Give Feedback	Submit reviews and suggestions
🏪 About Pharmacy	View pharmacy information
</td> <td>
https://img.shields.io/badge/Customer-Full%2520Experience-blue?style=for-the-badge&logo=customer

</td> </tr> </table>
🚚 Deliveryman Portal
<table> <tr> <td>
Feature	Description
📋 View Assigned Orders	See orders assigned to you
✅ Update Order Status	Mark orders as DELIVERED
🔒 Logout	Secure logout
</td> <td>
https://img.shields.io/badge/Deliveryman-Route%2520Management-green?style=for-the-badge&logo=delivery

</td> </tr> </table>
🎯 Project Modules
📂 Core Modules
text
📁 Group_Project/
├── 📄 main.c                 # Entry point
├── 📄 admin.c / admin.h      # Admin module
├── 📄 customer.c / customer.h # Customer module
├── 📄 deliveryman.c / deliveryman.h # Deliveryman module
├── 📄 product.c / product.h  # Product management
├── 📄 transaction.h          # Transaction handling
├── 📄 cart.c                 # Shopping cart
├── 📄 payment.c              # Payment processing
├── 📄 order.c                # Order management
├── 📄 ui.c                   # User interface
└── 📄 about.txt              # Pharmacy information
📁 Data Files
text
📁 Data Files/
├── 📄 product.txt            # Product inventory
├── 📄 customer.txt           # Customer accounts
├── 📄 order.txt              # Order history
├── 📄 feedback.txt           # Customer feedback
├── 📄 deliverymaninfo.txt    # Deliveryman credentials
└── 📄 about.txt              # Pharmacy information
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
┌─────────────────────────────────────────────────────┐
│                  Z E N P H A R M A                  │
│              ONLINE PHARMACY SYSTEM                │
├─────────────────────────────────────────────────────┤
│                                                     │
│      ┌─────────────┐    ┌─────────────┐           │
│      │  ADMIN      │    │  CUSTOMER  │           │
│      │  PORTAL     │    │  PORTAL    │           │
│      └─────────────┘    └─────────────┘           │
│                                                     │
│      ┌─────────────┐                               │
│      │ DELIVERYMAN │                               │
│      │  PORTAL     │                               │
│      └─────────────┘                               │
│                                                     │
├─────────────────────────────────────────────────────┤
│         YOUR HEALTH, OUR PRIORITY                  │
└─────────────────────────────────────────────────────┘
🚀 Getting Started
📋 Prerequisites
Requirement	Description
Compiler	GCC or any C compiler
Terminal	Command Prompt / Terminal
Git	For cloning repository
OS	Windows / Linux / macOS
📦 Installation
Clone the repository

bash
git clone https://github.com/DiptoChaklader/Group_Project.git
cd Group_Project
Compile the program

bash
gcc main.c admin.c customer.c deliveryman.c product.c cart.c payment.c order.c ui.c -o zenpharma
Run the application

bash
./zenpharma    # Linux/macOS
zenpharma.exe  # Windows
🔑 Default Credentials
Portal	Username/Phone	Password
Admin	admin	1234
Deliveryman	1234	1234
Customer	01234567890	mashfi
📸 Screenshots
Coming Soon - Visual representations of the application interface

🏠 Main Menu
text
                    Z E N P H A R M A
             ONLINE PHARMACY SYSTEM
    ┌──────────────┐    ┌──────────────┐
    │   ADMIN      │    │  CUSTOMER    │
    │   PORTAL     │    │  PORTAL      │
    └──────────────┘    └──────────────┘
    ┌──────────────┐
    │  DELIVERYMAN │
    │  PORTAL      │
    └──────────────┘
🛒 Shopping Cart
text
                    YOUR SHOPPING CART
    ┌───────────────────────────────────────┐
    │ ID  Name         Qty  Price  Total   │
    │ 101 NAPA EXTRA    2   25.00  50.00   │
    │ 102 SECLO 20      1   16.00  16.00   │
    ├───────────────────────────────────────┤
    │ Grand Total: 66.00 Tk                │
    └───────────────────────────────────────┘
👥 Contributors
<div align="center">
Name	Role	GitHub
Dipto Chaklader	Project Lead & Developer	@DiptoChaklader
Mustaqeem Mashfi	Developer & Tester	@Mashfi
</div>
📞 Contact
<div align="center">
Platform	Contact
📧 Email	info@zenpharma.com
📱 Phone	+880 1234-567890
🌐 Website	www.zenpharma.com
🏢 Address	Dhaka, Bangladesh
</div>
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

</div>
<div align="center">
📊 Project Statistics
https://img.shields.io/badge/Total%2520Lines-5000+-blue?style=flat-square
https://img.shields.io/badge/Files-18-green?style=flat-square
https://img.shields.io/badge/Functions-50+-orange?style=flat-square
https://img.shields.io/badge/Data%2520Files-6-red?style=flat-square

🏆 Features
https://img.shields.io/badge/Admin%2520Features-13-purple?style=flat-square
https://img.shields.io/badge/Customer%2520Features-12-blue?style=flat-square
https://img.shields.io/badge/Deliveryman%2520Features-3-green?style=flat-square

</div>
<div align="center">
💖 ZenPharma
Your Health, Our First Priority
Made with ❤️ by the ZenPharma Team

</div>
