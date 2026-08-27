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
text
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
🔄 Data Flow Diagram
text
┌─────────────────────────────────────────────────────────────────┐
│                       ZENPHARMA SYSTEM                          │
├─────────────────────────────────────────────────────────────────┤
│                                                                 │
│  ┌─────────────┐    ┌──────────────┐    ┌──────────────────┐  │
│  │   ADMIN     │───▶│   PRODUCT    │───▶│    INVENTORY     │  │
│  │   PORTAL    │    │  MANAGEMENT  │    │    MANAGEMENT    │  │
│  └─────────────┘    └──────────────┘    └──────────────────┘  │
│         │                                                      │
│         ▼                                                      │
│  ┌─────────────┐    ┌──────────────┐    ┌──────────────────┐  │
│  │  CUSTOMER   │───▶│    CART      │───▶│     ORDER        │  │
│  │   PORTAL    │    │   MODULE     │    │    PROCESSING    │  │
│  └─────────────┘    └──────────────┘    └──────────────────┘  │
│         │                            │                         │
│         │                            ▼                         │
│         │               ┌──────────────────────────┐          │
│         └──────────────▶│     PAYMENT SYSTEM       │          │
│                         │  (COD, Bkash, Nagad)     │          │
│                         └──────────────────────────┘          │
│                                      │                         │
│                         ┌────────────▼───────────────┐        │
│  ┌─────────────────┐   │     DELIVERYMAN PORTAL     │        │
│  │  FEEDBACK SYSTEM│   │  (Order Assignment &       │        │
│  │   & REVIEWS     │   │   Status Updates)          │        │
│  └─────────────────┘   └────────────────────────────┘        │
│                                                                 │
└─────────────────────────────────────────────────────────────────┘
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

🚀 Getting Started
Prerequisites
Tool	Version	Purpose
C Compiler	GCC 4.8+	Compiling source code
Terminal/Command Prompt	Any	Running the application
Git	Latest	Cloning the repository
Installation & Setup
1. Clone the Repository
bash
git clone https://github.com/DiptoChaklader/Group_Project.git
cd Group_Project
2. Compile the Project
Using GCC:

bash
gcc -o zenpharma main.c admin.c customer.c product.c cart.c order.c payment.c deliveryman.c ui.c
Using Make (if available):

bash
make
3. Run the Application
bash
./zenpharma        # On Linux/Mac
zenpharma.exe      # On Windows
🔑 Default Credentials
Role	Username	Password
Admin	admin	1234
Deliveryman	1234 (Phone)	1234 (Password)
📖 Usage Guide
👤 Customer Workflow
Browse Products

Navigate through categories (MED/ACC/SKN/HH/CC)

View product details and pricing

Account Management

Sign up with phone number and password

Login to access personalized features

Shopping Experience

Search products by ID or name

Add products to cart

Update quantity or remove items

Checkout Process

Enter delivery address (District, Area, House/Road)

Choose payment method (COD, Bkash, Nagad)

Confirm order and receive receipt

Post-Purchase

View order history

Submit feedback and reviews

Track delivery status

🔐 Admin Workflow
Product Management

Add new products with complete details

Update existing product information

Delete products from inventory

Monitor and update stock levels

Order Management

View all customer orders

Track order statuses

Monitor delivery assignments

System Administration

Review customer feedback

Update pharmacy information

Manage system operations

🚚 Deliveryman Workflow
Order Management

View assigned orders

Check delivery details

Update order status to DELIVERED

Account Management

Secure login with credentials

Logout when finished

👥 Contributors
Contributor	Role	Contact
Dipto Chaklader	Lead Developer	GitHub
Mustaqeem Mashfi	Developer	-
📞 Contact
Project Links
GitHub Repository: https://github.com/DiptoChaklader/Group_Project

Issues: Report an Issue

Stars: Star this Project

Developer Contact
Dipto Chaklader

GitHub: @DiptoChaklader

Email: dipto.chaklader@example.com

📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

🙏 Acknowledgments
SQUARE Pharmaceuticals - Product reference

BEXIMCO Pharmaceuticals - Product reference

Incepta Pharmaceuticals - Product reference

ACI Limited - Product reference

All Contributors - For their valuable contributions

<div align="center">
🌟 ZenPharma - Your Health, Our Priority 🌟
Developed with ❤️ using C

Back to Top

</div>
