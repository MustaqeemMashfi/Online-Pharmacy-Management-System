ZenPharma - Online Pharmacy Management System
https://img.shields.io/github/repo-size/DiptoChaklader/Group_Project
https://img.shields.io/github/contributors/DiptoChaklader/Group_Project
https://img.shields.io/github/stars/DiptoChaklader/Group_Project
https://img.shields.io/github/issues/DiptoChaklader/Group_Project
https://img.shields.io/badge/License-MIT-yellow.svg
https://img.shields.io/badge/Language-C-blue.svg
https://img.shields.io/badge/Platform-Windows%2520%257C%2520Linux-lightgrey

📋 Table of Contents
🏥 About ZenPharma

✨ Features

🏗️ System Architecture

📂 Data Storage

🚀 Getting Started

📖 Usage Guide

👥 Contributors

📞 Contact

🏥 About ZenPharma
ZenPharma is a comprehensive Console-Based Pharmacy Management System developed in C that simulates a fully functional online pharmacy platform. The system provides a complete solution for managing pharmaceutical operations with three distinct user portals, demonstrating robust software engineering principles including:

Modular Programming with separate header and implementation files

File-Based Data Persistence for reliable data storage

User Authentication & Authorization across all portals

Transaction Management with payment processing

Real-time Inventory Management with stock tracking

🎯 Key Highlights
Aspect	Description
Language	C Programming Language
Data Storage	Plain Text Files (.txt)
User Roles	Admin, Customer, Deliveryman
Authentication	Password-protected secure login
Transaction	Complete order lifecycle management
UI	Interactive console-based interface
✨ Features
🔐 Admin Portal
Full control over the pharmacy operations

Feature	Description	Access
📦 Add Product	Add new medicines, accessories, skincare, hygiene, and child care products	Full
🔍 View Products	Browse products by category (MED/ACC/SKN/HH/CC)	Full
🔎 Search Products	Search by product ID or name	Full
✏️ Update Product	Modify existing product details	Full
📊 Update Stock	Adjust product stock levels in real-time	Full
🗑️ Delete Product	Remove products from inventory	Full
💬 View Feedback	Read all customer feedback and reviews	Full
📋 View Orders	Monitor all placed orders across the system	Full
📝 Edit About	Update pharmacy information page	Full
🛒 Customer Portal
Complete shopping experience with personalized features

Feature	Description	Requirements
🔍 Browse Products	View products by category with detailed information	None
🔎 Search Products	Find products by ID or name	None
🛍️ Add to Cart	Add products to shopping cart	Login Required
📦 Update Cart	Change quantity or remove items	Login Required
💳 Checkout	Place orders with delivery address	Login Required
💰 Multiple Payments	Cash on Delivery, Bkash, Nagad support	Login Required
📜 Order History	View past orders and status	Login Required
⭐ Give Feedback	Submit reviews and suggestions	Login Required
📖 About Pharmacy	View pharmacy information	None
🚚 Deliveryman Portal
Efficient order delivery management

Feature	Description
📋 View Assigned Orders	See all orders assigned to you
✅ Update Order Status	Mark orders as DELIVERED
🔒 Secure Logout	Protected session management
🏗️ System Architecture
Module Structure
Group_Project/
│
├── 📄 main.c                 # Application entry point
│
├── 🔐 Admin Module
│   ├── admin.c               # Admin logic implementation
│   └── admin.h               # Admin function declarations
│
├── 👤 Customer Module
│   ├── customer.c            # Customer logic implementation
│   └── customer.h            # Customer function declarations
│
├── 📦 Product Module
│   ├── product.c             # Product management implementation
│   └── product.h             # Product function declarations
│
├── 🛒 Cart & Order Module
│   ├── cart.c                # Shopping cart operations
│   ├── order.c               # Order processing and management
│   └── transaction.h         # Transaction structures and declarations
│
├── 💳 Payment Module
│   └── payment.c             # Payment processing (COD, Bkash, Nagad)
│
├── 🚚 Deliveryman Module
│   ├── deliveryman.c         # Deliveryman operations
│   └── deliveryman.h         # Deliveryman declarations
│
├── 🎨 UI Module
│   └── ui.c                  # Console interface design
│
└── 📂 Data Files
    ├── product.txt           # Product inventory database
    ├── customer.txt          # Customer account information
    ├── order.txt             # Order history and details
    ├── feedback.txt          # Customer feedback records
    ├── deliverymaninfo.txt   # Deliveryman credentials
    └── about.txt             # Pharmacy information
    Module Dependencies
Module	Depends On	Description
main.c	admin.h, customer.h, deliveryman.h, transaction.h	Entry point, orchestrates all modules
admin.c	admin.h, product.h, customer.h, transaction.h	Admin operations and management
customer.c	customer.h, product.h, transaction.h, deliveryman.h	Customer operations and shopping
product.c	product.h, transaction.h, customer.h	Product CRUD operations
cart.c	customer.h, transaction.h	Shopping cart management
order.c	transaction.h, customer.h, product.h, deliveryman.h	Order processing and history
payment.c	transaction.h, customer.h	Payment gateway integration
deliveryman.c	deliveryman.h, customer.h, transaction.h, product.h	Delivery operations
ui.c	product.h	User interface rendering

Data Flow Diagram
┌─────────────────────────────────────────────────────────────────────────────┐
│                            ZENPHARMA SYSTEM                                 │
├─────────────────────────────────────────────────────────────────────────────┤
│                                                                             │
│  ┌──────────────────┐    ┌──────────────────┐    ┌──────────────────────┐  │
│  │                  │    │                  │    │                      │  │
│  │    ADMIN         │───▶│    PRODUCT       │───▶│     INVENTORY        │  │
│  │    PORTAL        │    │    MANAGEMENT    │    │     MANAGEMENT       │  │
│  │                  │    │                  │    │                      │  │
│  └──────────────────┘    └──────────────────┘    └──────────────────────┘  │
│           │                                                                 │
│           │                                                                 │
│           ▼                                                                 │
│  ┌──────────────────┐    ┌──────────────────┐    ┌──────────────────────┐  │
│  │                  │    │                  │    │                      │  │
│  │    CUSTOMER      │───▶│    CART          │───▶│     ORDER            │  │
│  │    PORTAL        │    │    MODULE        │    │     PROCESSING       │  │
│  │                  │    │                  │    │                      │  │
│  └──────────────────┘    └──────────────────┘    └──────────────────────┘  │
│           │                            │                                    │
│           │                            │                                    │
│           │                            ▼                                    │
│           │               ┌──────────────────────────┐                     │
│           │               │                          │                     │
│           └──────────────▶│    PAYMENT SYSTEM        │                     │
│                           │    (COD, Bkash, Nagad)   │                     │
│                           │                          │                     │
│                           └──────────────────────────┘                     │
│                                      │                                      │
│                                      ▼                                      │
│                           ┌──────────────────────────┐                     │
│  ┌────────────────────┐  │                          │                     │
│  │                    │  │    DELIVERYMAN PORTAL     │                     │
│  │    FEEDBACK        │◀─┤    (Order Assignment &   │                     │
│  │    SYSTEM          │  │     Status Updates)      │                     │
│  │                    │  │                          │                     │
│  └────────────────────┘  └──────────────────────────┘                     │
│                                                                             │
└─────────────────────────────────────────────────────────────────────────────┘
Process Flow
┌─────────────────────────────────────────────────────────────────────────────┐
│                           PROCESS FLOW                                      │
├─────────────────────────────────────────────────────────────────────────────┤
│                                                                             │
│  ADMIN PANEL                                                                │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐    ┌─────────────┐ │
│  │   LOGIN     │───▶│   ADD       │───▶│   UPDATE    │───▶│   VIEW      │ │
│  │   (admin)   │    │   PRODUCT   │    │   STOCK     │    │   ORDERS    │ │
│  └─────────────┘    └─────────────┘    └─────────────┘    └─────────────┘ │
│                                                                             │
│  CUSTOMER PANEL                                                            │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐    ┌─────────────┐ │
│  │   SIGNUP/   │───▶│   BROWSE    │───▶│   ADD TO    │───▶│   CHECKOUT  │ │
│  │   LOGIN     │    │   PRODUCTS  │    │   CART      │    │   & PAYMENT │ │
│  └─────────────┘    └─────────────┘    └─────────────┘    └─────────────┘ │
│         │                                      │                            │
│         │                                      │                            │
│         │                                      ▼                            │
│         │                         ┌─────────────────────┐                  │
│         └────────────────────────▶│   ORDER HISTORY     │                  │
│                                   │   & FEEDBACK       │                  │
│                                   └─────────────────────┘                  │
│                                                                             │
│  DELIVERYMAN PANEL                                                         │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐                    │
│  │   LOGIN     │───▶│   VIEW      │───▶│   UPDATE    │                    │
│  │   (phone &  │    │   ASSIGNED  │    │   ORDER     │                    │
│  │   password) │    │   ORDERS    │    │   STATUS    │                    │
│  └─────────────┘    └─────────────┘    └─────────────┘                    │
│                                                                             │
└─────────────────────────────────────────────────────────────────────────────┘
Data Storage Flow
┌─────────────────────────────────────────────────────────────────────────────┐
│                           DATA STORAGE FLOW                                 │
├─────────────────────────────────────────────────────────────────────────────┤
│                                                                             │
│  INPUT                     PROCESSING                    OUTPUT            │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐                    │
│  │   ADMIN     │    │             │    │             │                    │
│  │   INPUT     │───▶│  product.c  │───▶│ product.txt │                    │
│  └─────────────┘    └─────────────┘    └─────────────┘                    │
│                                                                             │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐                    │
│  │   CUSTOMER  │    │             │    │             │                    │
│  │   INPUT     │───▶│ customer.c  │───▶│ customer.txt│                    │
│  └─────────────┘    └─────────────┘    └─────────────┘                    │
│                                                                             │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐                    │
│  │   ORDER     │    │             │    │             │                    │
│  │   INPUT     │───▶│  order.c    │───▶│  order.txt  │                    │
│  └─────────────┘    └─────────────┘    └─────────────┘                    │
│                                                                             │
│  ┌─────────────┐    ┌─────────────┐    ┌─────────────┐                    │
│  │   FEEDBACK  │    │             │    │             │                    │
│  │   INPUT     │───▶│ customer.c  │───▶│ feedback.txt│                    │
│  └─────────────┘    └─────────────┘    └─────────────┘                    │
│                                                                             │
└─────────────────────────────────────────────────────────────────────────────┘
📂 Data Storage
File Structure & Specifications
File Name	Purpose	Format
product.txt	Product inventory database	ID|Name|Category|Company|Description|Expiry|Price|Pack|Stock
customer.txt	Customer account information	Name|Phone|Password
order.txt	Order history and details	Multi-line receipt format
feedback.txt	Customer feedback records	Structured feedback entries
deliverymaninfo.txt	Deliveryman credentials	ID|Name|Phone|Password
about.txt	Pharmacy information	Custom text format
Data Persistence Features
Automatic File Creation - Files are created if they don't exist

Robust Error Handling - Comprehensive error checking for file operations

Data Integrity - Transactional updates with temporary files

Portability - Plain text format for easy backup and migration

Sample Data Records
Product Record:
101|NAPA EXTRA|MED|SQUARE|Fever & Pain Relief|31-12-2028|25.00|10|115
Customer Record:
Mustaqeem Mashfi|01234567890|mashfi
Order Record:
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
               Delivery Address
=============================================================
District    : DHAKA
Area        : Mohakhali
House/Road  : 96/A
=============================================================
               Deliveryman Information
=============================================================
Deliveryman ID : 4
Deliveryman Name : Rafi Islam
Deliveryman Phone : 01444444444
Status  : DELIVERED
=============================================================
================ END ORDER ================
🚀 Getting Started
Prerequisites
Tool	Version	Purpose
C Compiler	GCC 4.8+	Compiling source code
Terminal/Command Prompt	Any	Running the application
Git	Latest	Cloning the repository
Installation & Setup
1. Clone the Repository
   git clone https://github.com/DiptoChaklader/Group_Project.gitcd Group_Project
2. Compile the Project
   Using GCC:
   gcc -o zenpharma main.c admin.c customer.c product.c cart.c order.c payment.c deliveryman.c ui.c
   
