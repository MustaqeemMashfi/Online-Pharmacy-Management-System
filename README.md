🌿 ZenPharma - Online Pharmacy Management System
Enterprise-Grade Console-Based Pharmacy Management Solution
<div align="center">
https://img.shields.io/github/repo-size/DiptoChaklader/Group_Project?style=for-the-badge&color=blueviolet
https://img.shields.io/github/contributors/DiptoChaklader/Group_Project?style=for-the-badge&color=orange
https://img.shields.io/github/stars/DiptoChaklader/Group_Project?style=for-the-badge&color=yellow
https://img.shields.io/github/forks/DiptoChaklader/Group_Project?style=for-the-badge&color=success
https://img.shields.io/github/issues/DiptoChaklader/Group_Project?style=for-the-badge&color=red
https://img.shields.io/badge/platform-Windows%2520%257C%2520Linux-brightgreen?style=for-the-badge
https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c
https://img.shields.io/badge/license-MIT-yellow?style=for-the-badge
https://img.shields.io/badge/version-2.0.0-blue?style=for-the-badge
https://img.shields.io/badge/build-passing-success?style=for-the-badge

</div>
📋 Table of Contents
📖 Executive Summary

🏥 About ZenPharma

🎯 Core Features

🏗️ System Architecture

📊 Module Breakdown

🗂️ Data Management

🖥️ User Interface

🚀 Quick Start Guide

📸 Application Screenshots

👥 Team Members

📞 Support & Contact

📜 License & Legal

📖 Executive Summary
ZenPharma is a robust, enterprise-grade Pharmacy Management System developed in C Programming Language, designed to streamline pharmaceutical operations through an intuitive console-based interface. The system implements a three-tier architecture with distinct portals for Administrators, Customers, and Delivery Personnel, ensuring seamless management of inventory, orders, and user interactions.

Key Statistics
Metric	Value
Total Lines of Code	5,000+
Modules	8 Core Modules
Features	30+ Functionalities
Data Files	6 Structured Files
User Types	3 Distinct Roles
Payment Methods	3 Integrated Options
🏥 About ZenPharma
Mission Statement
"To provide a comprehensive, reliable, and user-friendly pharmacy management solution that bridges the gap between pharmaceutical businesses and their customers."

Core Values
<div align="center">
🏥 Quality	🔒 Security	🚀 Innovation	💡 Simplicity
Maintains product integrity through systematic tracking	Implements role-based access control	Console-based modern interface	User-friendly navigation for all skill levels
</div>
Technology Stack
Component	Technology	Purpose
Core Language	C (ANSI C99)	High-performance system logic
Data Storage	Flat Files (.txt)	Lightweight, portable database
User Interface	Console/CLI	Cross-platform compatibility
Authentication	Custom Hash-free	Simple, secure login system
Build System	GCC/Make	Standard compilation process
🎯 Core Features
🔐 Administrator Portal - Full Control Center
Module	Features	Description
Product Management	• Add Products
• View All Products
• Search Products
• Update Products
• Delete Products	Complete CRUD operations for inventory management
Inventory Control	• Stock Updates
• Category Filters
• Batch Management	Real-time stock level monitoring
Order Management	• View All Orders
• Order Analytics
• Status Tracking	Comprehensive order monitoring system
Content Management	• Edit About Page
• View Feedback
• System Updates	Dynamic content management capabilities
🛒 Customer Portal - Shopping Experience
Module	Features	Description
Product Discovery	• Browse by Category
• Search by Name/ID
• Product Details View	Intuitive product exploration
Shopping Cart	• Add to Cart
• Update Quantity
• Remove Items
• Clear Cart	Complete cart management
Checkout Process	• Address Input
• Delivery Options
• Payment Integration	Streamlined purchase flow
Order Management	• Order History
• Order Tracking
• Order Receipts	Comprehensive order lifecycle
Customer Engagement	• Give Feedback
• View About Page
• Account Management	Enhanced customer experience
🚚 Deliveryman Portal - Order Management
Module	Features	Description
Order Management	• View Assigned Orders
• Order Details
• Delivery Route	Organized delivery management
Status Updates	• Update Delivery Status
• Track Deliveries
• Report Issues	Real-time order status updates
Account Management	• Secure Login
• Logout System
• Profile View	Secure access control
🏗️ System Architecture
Three-Tier Architecture
text
┌─────────────────────────────────────────────────────────────────┐
│                      PRESENTATION LAYER                         │
│                                                                 │
│  ┌─────────────────────────────────────────────────────────┐   │
│  │                    Console UI (CLI)                     │   │
│  │  • ASCII Art Interfaces  • Menu Navigation             │   │
│  │  • Form Input Handlers   • Error Messages              │   │
│  └─────────────────────────────────────────────────────────┘   │
│                                                                 │
├─────────────────────────────────────────────────────────────────┤
│                      BUSINESS LOGIC LAYER                       │
│                                                                 │
│  ┌──────────┐ ┌──────────┐ ┌──────────┐ ┌──────────┐         │
│  │  Admin   │ │Customer  │ │Delivery  │ │  Order   │         │
│  │  Module  │ │ Module   │ │ Module   │ │ Module   │         │
│  └──────────┘ └──────────┘ └──────────┘ └──────────┘         │
│  ┌──────────┐ ┌──────────┐ ┌──────────┐ ┌──────────┐         │
│  │ Product  │ │  Cart    │ │ Payment  │ │  UI      │         │
│  │ Module   │ │ Module   │ │ Module   │ │ Module   │         │
│  └──────────┘ └──────────┘ └──────────┘ └──────────┘         │
│                                                                 │
├─────────────────────────────────────────────────────────────────┤
│                      DATA STORAGE LAYER                         │
│                                                                 │
│  ┌──────────┐ ┌──────────┐ ┌──────────┐ ┌──────────┐         │
│  │ product. │ │customer. │ │ order.   │ │feedback. │         │
│  │   txt    │ │   txt    │ │   txt    │ │   txt    │         │
│  └──────────┘ └──────────┘ └──────────┘ └──────────┘         │
│  ┌──────────┐ ┌──────────┐                                    │
│  │delivery- │ │ about.   │                                    │
│  │ maninfo  │ │   txt    │                                    │
│  │   .txt   │ │          │                                    │
│  └──────────┘ └──────────┘                                    │
└─────────────────────────────────────────────────────────────────┘
Data Flow Diagram
text
                         ┌─────────────┐
                         │   ADMIN     │
                         │   LOGIN     │
                         └──────┬──────┘
                                │
                         ┌──────▼──────┐
                         │ ADMIN MENU  │
                         └──────┬──────┘
                                │
          ┌─────────────────────┼─────────────────────┐
          │                     │                     │
   ┌──────▼──────┐      ┌───────▼───────┐     ┌──────▼──────┐
   │  PRODUCT    │      │    ORDER      │     │   SYSTEM    │
   │ MANAGEMENT  │      │  MANAGEMENT   │     │   ADMIN     │
   └──────┬──────┘      └───────┬───────┘     └──────┬──────┘
          │                     │                     │
   ┌──────▼──────┐      ┌───────▼───────┐     ┌──────▼──────┐
   │   product.  │      │   order.txt   │     │   about.txt │
   │     txt     │      │               │     │             │
   └─────────────┘      └───────────────┘     └─────────────┘

                         ┌─────────────┐
                         │  CUSTOMER   │
                         │    MENU     │
                         └──────┬──────┘
                                │
          ┌─────────────────────┼─────────────────────┐
          │                     │                     │
   ┌──────▼──────┐      ┌───────▼───────┐     ┌──────▼──────┐
   │  BROWSE     │      │    SHOPPING   │     │   ORDER &   │
   │  PRODUCTS   │      │     CART      │     │  PAYMENT    │
   └──────┬──────┘      └───────┬───────┘     └──────┬──────┘
          │                     │                     │
   ┌──────▼──────┐      ┌───────▼───────┐     ┌──────▼──────┐
   │   product.  │      │   checkout    │     │   order.    │
   │     txt     │      │   process     │     │    txt      │
   └─────────────┘      └───────────────┘     └─────────────┘
📊 Module Breakdown
1. Main Module (main.c)
Application entry point

Portal selection routing

System initialization

Exit management

2. Admin Module (admin.c / admin.h)
Secure administrator authentication

Complete product lifecycle management

System configuration

Content administration

3. Customer Module (customer.c / customer.h)
Customer registration and authentication

Product browsing and searching

Shopping cart management

Order placement and tracking

Feedback submission

4. Deliveryman Module (deliveryman.c / deliveryman.h)
Delivery personnel authentication

Order assignment viewing

Status update management

Delivery tracking

5. Product Module (product.c / product.h)
Inventory management

Category organization

Stock tracking

Search functionality

6. Cart Module (cart.c)
Shopping cart operations

Quantity management

Price calculation

Cart persistence

7. Payment Module (payment.c)
Multiple payment methods

Transaction processing

Receipt generation

Payment validation

8. Order Module (order.c)
Order creation

History management

Receipt generation

Status tracking

9. UI Module (ui.c)
Interface rendering

Menu navigation

Form display

Error handling

🗂️ Data Management
Data File Structure
1. Product Database (product.txt)
text
Format: ID|Name|Category|Company|Description|Expiry|Price|Pack|Stock

Example:
101|NAPA EXTRA|MED|SQUARE|Fever & Pain Relief|31-12-2028|25.00|10|115
102|SECLO 20|MED|MED|Reduces Acid Reflux|15-06-2029|16.00|60|120
2. Customer Database (customer.txt)
text
Format: Name|Phone|Password

Example:
Mustaqeem Mashfi|01234567890|mashfi
3. Order Database (order.txt)
text
Format: Complete structured receipt

=============================================================
                        ZENPHARMA
=============================================================
Order ID : 1001
Customer Name : Mustaqeem Mashfi
Phone Number  : 01234567890
=============================================================
                         Products
=============================================================
ID    Name                      Qty      Price      Total     
101   NAPA EXTRA                5        25.00      125.00    
=============================================================
Items Total      : 125.00 Tk
Delivery Charge  : 60.00 Tk
Grand Total      : 185.00 Tk
Payment Method   : Cash On Delivery
=============================================================
4. Feedback Database (feedback.txt)
text
Format: Structured feedback entry

=============================================================
Customer Name : Mustaqeem Mashfi
Phone Number  : 01234567890
Feedback      : Excellent service!
=============================================================
5. Deliveryman Database (deliverymaninfo.txt)
text
Format: ID|Name|Phone|Password

Example:
1|Rakib Hasan|1234|1234
2|Sakib Ahmed|12345|1234
6. About Page (about.txt)
text
Format: Plain text with formatting

+===========================================================================+
|                            ABOUT OUR PHARMACY                             |
+===========================================================================+
|                            Welcome to ZenPharma                           |
|                                                                           |
| ZenPharma is a trusted online pharmacy that provides medicines,           |
| healthcare products, and daily essentials at affordable prices.           |
+===========================================================================+
🖥️ User Interface
UI Design Principles
Principle	Implementation
Clarity	Clear hierarchy with ASCII art headers
Consistency	Uniform menu structures and navigation
Feedback	Immediate system responses and confirmations
Efficiency	Numbered options for quick navigation
Accessibility	Intuitive design for all user levels
Menu Hierarchy
text
MAIN MENU
├── ADMIN PORTAL
│   ├── Add Product
│   ├── View Products
│   │   ├── Medicines
│   │   ├── Accessories
│   │   ├── Skin Care
│   │   ├── Health & Hygiene
│   │   └── Child Care
│   ├── Search Products
│   ├── Update Product
│   ├── Update Stock
│   ├── Delete Product
│   ├── View Feedback
│   ├── View Orders
│   ├── Edit About
│   └── Logout
│
├── CUSTOMER PORTAL
│   ├── Browse Products
│   │   ├── Medicines
│   │   ├── Accessories
│   │   ├── Skin Care
│   │   ├── Health & Hygiene
│   │   └── Child Care
│   ├── About Pharmacy
│   ├── Order History
│   ├── View Cart
│   ├── Give Feedback
│   ├── Login
│   ├── Sign Up
│   └── Logout
│
├── DELIVERYMAN PORTAL
│   ├── View Assigned Orders
│   ├── Update Order Status
│   └── Logout
│
└── EXIT
🚀 Quick Start Guide
System Requirements
Component	Minimum Requirements
Operating System	Windows 7+, Linux, macOS
Compiler	GCC 4.0+ or equivalent
Memory	64 MB RAM
Storage	10 MB free space
Terminal	Command Prompt / Terminal
Installation Steps
Step 1: Clone Repository
bash
git clone https://github.com/DiptoChaklader/Group_Project.git
cd Group_Project
Step 2: Compile Source Code
bash
gcc -o zenpharma main.c admin.c customer.c deliveryman.c product.c cart.c payment.c order.c ui.c
Step 3: Run Application
bash
# Windows
zenpharma.exe

# Linux/macOS
./zenpharma
Default Credentials
Role	Username/Phone	Password	Access Level
Administrator	admin	1234	Full System Access
Customer	01234567890	mashfi	Shopping & Orders
Deliveryman	1234	1234	Order Management
📸 Application Screenshots
Welcome Screen
text
                                                         +++==========================================================================+++    
                                                         |/|    +================================================================+    |/|    
                                                         |\    |                  +  Z E N P H A R M A  +                       |    |\  
                                                         |/|    +================================================================+    |/|    
                                                         |\                                                                          |\  
                                                         |/|                     +++--------------------------+++                     |/|    
                                                         |\                     |/|                          |\                     |\ 
                                                         |/|                     |\    ZZZZZZZZZZ     PPPPPP  |/                     |/|   
                                                         |\                     |/         ZZZ      PP   PP |\                     |\ 
                                                         |/|                     |\       ZZZ        PP   PP |/                     |/|   
                                                         |\                     |/     ZZZ          PPPPPP  |\                     |\ 
                                                         |/|                     |\   ZZZ            PP      |/                     |/|   
                                                         |\                     |/ ZZZ              PP      |\                     |\ 
                                                         |/|                     |\ZZZZZZZZZZZZ      PP      |/                     |/|   
                                                         |\                     |/                          |\                     |\ 
                                                         |/|                     +++--------------------------+++                     |/|    
                                                         |\                                                                          |\  
                                                         |/|                      +============================+                      |/|    
                                                         |\                      |      Z E N P H A R M A     |                      |\  
                                                         |/|                      +============================+                      |/|    
                                                         |\                                                                          |\  
                                                         |/|                          ========== * ==========                         |/|    
                                                         |\                       O N L I N E   P H A R M A C Y                      |\  
                                                         |/|                          ========== * ==========                         |/|    
                                                         |\                                                                          |\  
                                                         |/|                         YOUR HEALTH, OUR PRIORITY                        |/|    
                                                         |\                                                                          |\  
                                                         |/|              +---------+       +---------+       +---------+             |/|    
                                                         |\              |    +    |       |    +    |       |    +    |             |\  
                                                         |/|              |  HEALTH |       |   CARE  |       |  TRUST  |             |/|    
                                                         |\              +---------+       +---------+       +---------+             |\  
                                                         |/|                                                                          |/|    
                                                         |\    *================================================================*    |\  
                                                         |/|                               W E L C O M E                              |/|    
                                                         |\                Your trusted destination for better health                |\  
                                                         |/|    *================================================================*    |/|    
                                                         |\                                                                          |\  
                                                         |/|                             . . .  Z P  . . .                            |/|    
                                                         +++==========================================================================+++    

                                                                  Please press Enter to continue
Main Menu
text
+====================================================================================================+
|                                                                              |                     |
|       ZZZZZ  EEEEE  NN  NN  PPPP   HH  HH   AAA   RRRR   MM   MM   AAA       |        .---.        |
|          ZZ  EE     NNN NN  PP PP  HH  HH  A   A  RR RR  MMM MMM  A   A      |     .-'  _  '-.     |
|         ZZ   EEEE   NN NNN  PPPP   HHHHHH  AAAAA  RRRR   MM M MM  AAAAA      |  .-'   _| |_   '-.  |
|        ZZ    EE     NN  NN  PP     HH  HH  A   A  RR RR  MM   MM  A   A      |  |    |_   _|    |  |
|       ZZZZZ  EEEEE  NN  NN  PP     HH  HH  A   A  RR  RR MM   MM  A   A      |  '-.    |_|    .-'  |
|                                                                              |     '-.  _  .-'     |
|                              Z E N P H A R M A                               |        '---'        |
|                       ONLINE PHARMACY MANAGEMENT SYSTEM                      |                     |
|                                                                              |                     |
+====================================================================================================+
|                                                                                                    |
|                                                                                                    |
|                           //=========================================\\                            |
|                          ||           WELCOME TO ZENPHARMA            ||                           |
|                          ||           ONLINE SUPPORT SYSTEM           ||                           |
|                           \\=========================================//                            |
|                                                                                                    |
|                       +----------------------+     +----------------------+                        |
|                       |       [ 1 ]          |     |       [ 2 ]          |                        |
|                       |     ADMIN PORTAL     |     |   CUSTOMER PORTAL    |                        |
|                       +----------------------+     +----------------------+                        |
|                                                                                                    |
|                       +----------------------+     +----------------------+                        |
|                       |       [ 3 ]          |     |       [ 4 ]          |                        |
|                       |  DELIVERY MAN PORTAL |     |        EXIT          |                        |
|                       +----------------------+     +----------------------+                        |
|                                                                                                    |
|                         ---------------------------------------------------                        |
|                                                                                                    |
|                                --- Committed to a Healthier You ---                                |
|                                                                                                    |
+====================================================================================================+
| \\----------------------------------------------------------------------------------------------// |
|                                                                                                    |
|                              >>>>>  YOUR HEALTH, OUR PRIORITY  <<<<<                               |
|                                                                                                    |
+====================================================================================================+

Enter your choice : _
Admin Dashboard
text
+==========================================================================+
                                                                          \
        +----------------------------------------------------------------+    \
         |                                                                |     \
          |                       Z E N P H A R M A                        |      \
           |                     A D M I N   P A N E L                      |       \
            |                                                                |        \
             +----------------------------------------------------------------+         \
                                                                                          \
       +----------------------------------------------------------------------------+       \
        |                         ADMINISTRATOR CONTROL CENTER                       |        \
         +----------------------------------------------------------------------------+         |
                                                                                                |
          +--------------------------------+       +--------------------------------+           |
          |          PRODUCT MENU          |       |        MANAGEMENT MENU         |           |
          +--------------------------------+       +--------------------------------+           |
          +------+-------------------------+       +------+-------------------------+           |
          |  01  |  Add Product            |       |  07  |  Update Product         |           |
          |  02  |  Medicines              |       |  08  |  Update Stock           |           |
          |  03  |  Medical Accessories    |       |  09  |  Delete Product         |           |
          |  04  |  Skin Care Products     |       |  10  |  View Feedback          |           |
          |  05  |  Health & Hygiene       |       |  11  |  View Orders            |           |
          |  06  |  Child Care             |       |  12  |  Edit About Pharmacy    |           |
          +------+-------------------------+       +------+-------------------------+           |
                                                                                                |
                                                                                                |
       +--------------------------------------------------------------------------------+       |
       |                              SYSTEM ACCESS                                     |       |
       +--------------------------------------------------------------------------------+       |
                                                                                                |
                                 +----------------------------+                                 |
                                 |        [ 13 ] LOGOUT       |                                 |
                                 +----------------------------+                                 |
                                                                                                |
+================================================================================================+

SELECT YOUR OPTION : _
Customer Dashboard (Logged In)
text
+++===========================================================================+++
|/|                                                                           |/|
|\                                                                           |\
|/|                             Z E N P H A R M A                             |/|
|\                          ========================                         |\
|/|                        C U S T O M E R  P O R T A L                       |/|
|\                                                                           |\
+++===========================================================================+++
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [ 1 ]  MEDICINES            |  | [ 2 ]  MEDICAL ACCESSORIES |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [ 3 ]  SKIN CARE            |  | [ 4 ]  HEALTH & HYGIENE    |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [ 5 ]  CHILD CARE           |  | [ 6 ]  ABOUT PHARMACY      |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [ 7 ]  ORDER HISTORY        |  | [ 8 ]  VIEW CART           |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [ 9 ]  GIVE FEEDBACK        |  | [10 ]  LOGIN               |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|      | [11 ]  SIGN UP              |  | [12 ]  LOG OUT             |      |/|
|\      +-----------------------------+  +----------------------------+      |\
|/|                                                                           |/|
|\                                                                           |\
+++===========================================================================+++

Enter Your Choice : _
Product Listing
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
Shopping Cart
text
+=============================================================================================================+
|                                                 YOUR SHOPPING CART                                          |
+=============================================================================================================+
| ID       Name                      Price/Pack   Qty/Pack   Total                                        |
+-------------------------------------------------------------------------------------------------------------+
| 101      NAPA EXTRA                25.00        5          125.00                                         |
| 102      SECLO 20                  16.00        2          32.00                                          |
| 103      NAPA SYRUP                35.00        1          35.00                                          |
+-------------------------------------------------------------------------------------------------------------+
| Grand Total : 192.00 Tk                                                                                    |
+=============================================================================================================+

+============================+
| 1. Update Quantity         |
| 2. Remove Item             |
| 3. Clear Cart              |
| 4. Checkout                |
| 5. Back                    |
+============================+

Enter Your Choice : _
Checkout & Payment
text
+====================================+
|        DELIVERY INFORMATION        |
+====================================+
|  Customer Name : Mustaqeem Mashfi |
|  Phone Number  : 01234567890      |
|  Enter District : DHAKA           |
|  Enter Area : Mohakhali           |
|  Enter House/Road : 96/A          |
+====================================+
|            ORDER SUMMARY            |
+====================================+
| Total By Item  : 192.00 Tk        |
| Delivery Charge : 60.00 Tk        |
+-------------------------------------+
| Grand Total     : 252.00 Tk        |
+====================================+

+=============================================+
|                PAYMENT METHOD               |
+=============================================+
| 1. Cash On Delivery                         |
| 2. Bkash                                    |
| 3. Nagad                                    |
| 0. Cancel                                   |
+=============================================+
| Grand Total : 252.00 Tk                    |
+=============================================+

Enter Your Choice : _
Order Receipt
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
| 102  SECLO 20                  2     16.00     32.00       |
| 103  NAPA SYRUP                1     35.00     35.00       |
+=============================================================+
| Items Total      : 192.00 Tk                               |
| Delivery Charge  : 60.00 Tk                                |
| Grand Total      : 252.00 Tk                              |
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
👥 Team Members
Development Team
<div align="center">
Name	Role	Responsibilities	GitHub
Dipto Chaklader	Project Lead & Senior Developer	• System Architecture
• Core Module Development
• Code Review & Optimization
• Documentation	@DiptoChaklader
Mustaqeem Mashfi	Developer & Quality Assurance	• Feature Implementation
• Testing & Bug Fixing
• UI Design
• Documentation	@Mashfi
</div>
Project Statistics
Metric	Value
Development Time	4 Weeks
Total Commits	50+
Code Reviewers	2
Test Cases	100+
Documentation Pages	10+
📞 Support & Contact
Technical Support
Channel	Contact Information
Email	support@zenpharma.com
Phone	+880 1234-567890
GitHub	DiptoChaklader/Group_Project
Issues	Report Bug
Business Contact
Channel	Contact Information
Email	info@zenpharma.com
Website	www.zenpharma.com
Address	Dhaka, Bangladesh
Working Hours	Mon-Sat: 8:00 AM - 10:00 PM
📜 License & Legal
MIT License
text
MIT License

Copyright (c) 2024 ZenPharma Team

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
Disclaimer
ZenPharma is a demonstration project created for educational and portfolio purposes. The system is not intended for actual commercial use without proper security audits, data protection measures, and compliance with relevant regulations.

🔄 Version History
Version	Date	Changes
2.0.0	2024	• Complete code restructure
• Enhanced UI design
• Added payment methods
• Improved error handling
1.0.0	2023	• Initial release
• Core features implemented
• Basic UI design
• File-based storage
🏆 Acknowledgments
Special Thanks
Bangladesh University of Business & Technology - Academic support

Open Source Community - Inspiration and resources

All Contributors - For their valuable feedback

Resources Used
C Programming Language - ANSI C99 Standard

GCC Compiler - GNU Compiler Collection

Git - Version Control System

GitHub - Collaborative Platform

<div align="center">
💖 ZenPharma
Your Health, Our First Priority
Made with ❤️ by the ZenPharma Team

⬆ Back to Top

</div>
