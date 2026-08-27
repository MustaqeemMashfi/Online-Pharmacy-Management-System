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

🖥️ User Interface Design

🚀 Quick Start Guide

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
Value	Description
🏥 Quality	Maintains product integrity through systematic tracking
🔒 Security	Implements role-based access control
🚀 Innovation	Console-based modern interface
💡 Simplicity	User-friendly navigation for all skill levels
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
Product Management	Add Products, View All Products, Search Products, Update Products, Delete Products	Complete CRUD operations for inventory management
Inventory Control	Stock Updates, Category Filters, Batch Management	Real-time stock level monitoring
Order Management	View All Orders, Order Analytics, Status Tracking	Comprehensive order monitoring system
Content Management	Edit About Page, View Feedback, System Updates	Dynamic content management capabilities
🛒 Customer Portal - Shopping Experience
Module	Features	Description
Product Discovery	Browse by Category, Search by Name/ID, Product Details View	Intuitive product exploration
Shopping Cart	Add to Cart, Update Quantity, Remove Items, Clear Cart	Complete cart management
Checkout Process	Address Input, Delivery Options, Payment Integration	Streamlined purchase flow
Order Management	Order History, Order Tracking, Order Receipts	Comprehensive order lifecycle
Customer Engagement	Give Feedback, View About Page, Account Management	Enhanced customer experience
🚚 Deliveryman Portal - Order Management
Module	Features	Description
Order Management	View Assigned Orders, Order Details, Delivery Route	Organized delivery management
Status Updates	Update Delivery Status, Track Deliveries, Report Issues	Real-time order status updates
Account Management	Secure Login, Logout System, Profile View	Secure access control
🏗️ System Architecture
Three-Tier Architecture
The system follows a clean three-tier architecture pattern:

1. Presentation Layer

Console-based User Interface (CLI)

ASCII art interfaces and menus

Form input handlers and validation

Error message display system

2. Business Logic Layer

Admin Module - Complete system administration

Customer Module - Shopping and order management

Delivery Module - Order fulfillment

Product Module - Inventory management

Cart Module - Shopping operations

Payment Module - Transaction processing

Order Module - Order lifecycle management

3. Data Storage Layer

Product database (product.txt)

Customer database (customer.txt)

Order database (order.txt)

Feedback database (feedback.txt)

Deliveryman database (deliverymaninfo.txt)

About page content (about.txt)

Data Flow Architecture
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
┌────▼────┐         ┌─────▼─────┐         ┌────▼────┐
│ PRODUCT │         │   ORDER   │         │  SYSTEM │
│MANAGEMENT│        │ MANAGEMENT│         │  ADMIN  │
└────┬────┘         └─────┬─────┘         └────┬────┘
     │                     │                     │
┌────▼────┐         ┌─────▼─────┐         ┌────▼────┐
│product. │         │ order.txt │         │ about.  │
│  txt    │         │           │         │  txt    │
└─────────┘         └───────────┘         └─────────┘

                    ┌─────────────┐
                    │  CUSTOMER   │
                    │    MENU     │
                    └──────┬──────┘
                           │
     ┌─────────────────────┼─────────────────────┐
     │                     │                     │
┌────▼────┐         ┌─────▼─────┐         ┌────▼────┐
│ BROWSE  │         │  SHOPPING │         │ ORDER & │
│PRODUCTS │         │   CART    │         │PAYMENT  │
└────┬────┘         └─────┬─────┘         └────┬────┘
     │                     │                     │
┌────▼────┐         ┌─────▼─────┐         ┌────▼────┐
│product. │         │ checkout  │         │ order.  │
│  txt    │         │  process  │         │  txt    │
└─────────┘         └───────────┘         └─────────┘
📊 Module Breakdown
1. Main Module
Application entry point and initialization

Portal selection and routing logic

System exit and cleanup management

2. Admin Module
Secure administrator authentication system

Complete product lifecycle management (CRUD)

System configuration and content administration

Order and feedback monitoring

3. Customer Module
Customer registration and secure authentication

Product browsing and advanced search functionality

Shopping cart operations and management

Order placement, tracking, and history

Feedback submission system

4. Deliveryman Module
Delivery personnel authentication

Order assignment and viewing system

Real-time status update management

Delivery tracking and reporting

5. Product Module
Comprehensive inventory management

Category-based organization system

Stock tracking and updates

Advanced search and filter functionality

6. Cart Module
Shopping cart operations and persistence

Dynamic quantity management

Real-time price calculation

Cart clearing and management

7. Payment Module
Multiple payment method integration

Secure transaction processing

Automated receipt generation

Payment validation and verification

8. Order Module
Order creation and management

Complete order history tracking

Receipt generation and formatting

Order status tracking system

9. UI Module
Professional interface rendering

Intuitive menu navigation

Form display and input handling

Error message formatting

🗂️ Data Management
Data File Structure
1. Product Database (product.txt)

Stores complete product information

Format: ID, Name, Category, Company, Description, Expiry, Price, Pack Size, Stock

Enables efficient inventory management

2. Customer Database (customer.txt)

Stores customer account information

Format: Name, Phone Number, Password

Enables secure authentication

3. Order Database (order.txt)

Stores complete order records

Includes product details, pricing, delivery info, and deliveryman assignment

Maintains full order history

4. Feedback Database (feedback.txt)

Stores customer feedback and reviews

Format: Customer Name, Phone, Feedback

Enables quality improvement

5. Deliveryman Database (deliverymaninfo.txt)

Stores delivery personnel credentials

Format: ID, Name, Phone, Password

Enables secure deliveryman access

6. About Page (about.txt)

Stores pharmacy information and policies

Plain text with professional formatting

Dynamic content management

🖥️ User Interface Design
UI Design Principles
Principle	Implementation
Clarity	Clear hierarchy with ASCII art headers and structured layouts
Consistency	Uniform menu structures and consistent navigation patterns
Feedback	Immediate system responses with confirmation messages
Efficiency	Numbered options for quick keyboard navigation
Accessibility	Intuitive design suitable for all user skill levels
Menu Hierarchy Structure
Main Menu

Admin Portal (Full system control)

Customer Portal (Shopping experience)

Deliveryman Portal (Order management)

Exit

Admin Portal

Add Product

View Products (Medicines, Accessories, Skin Care, Health & Hygiene, Child Care)

Search Products

Update Product

Update Stock

Delete Product

View Feedback

View Orders

Edit About

Logout

Customer Portal

Browse Products (Medicines, Accessories, Skin Care, Health & Hygiene, Child Care)

About Pharmacy

Order History

View Cart

Give Feedback

Login

Sign Up

Logout

Deliveryman Portal

View Assigned Orders

Update Order Status

Logout

Visual Design Elements
Professional ASCII art branding

Clean table formatting for data display

Organized menu structures

Password masking for security

Scrollable content display

Clear error and success messages

Professional receipt formatting

🚀 Quick Start Guide
System Requirements
Component	Minimum Requirements
Operating System	Windows 7+, Linux, macOS
Compiler	GCC 4.0+ or equivalent
Memory	64 MB RAM
Storage	10 MB free space
Terminal	Command Prompt / Terminal
Installation Process
Step 1: Clone Repository
Use Git to clone the project repository to your local machine.

Step 2: Compile Source Code
Compile all source files using GCC or your preferred C compiler to create the executable.

Step 3: Run Application
Execute the compiled program to launch ZenPharma.

Step 4: Login
Use the provided default credentials to access the system.

Default Credentials
Role	Username/Phone	Password	Access Level
Administrator	admin	1234	Full System Access
Customer	01234567890	mashfi	Shopping & Orders
Deliveryman	1234	1234	Order Management
👥 Team Members
Development Team
Name	Role	Responsibilities	GitHub
Dipto Chaklader	Project Lead & Senior Developer	System Architecture, Core Module Development, Code Review & Optimization, Documentation	@DiptoChaklader
Mustaqeem Mashfi	Developer & Quality Assurance	Feature Implementation, Testing & Bug Fixing, UI Design, Documentation	@Mashfi
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
Issues	Report Bug via GitHub Issues
Business Contact
Channel	Contact Information
Email	info@zenpharma.com
Website	www.zenpharma.com
Address	Dhaka, Bangladesh
Working Hours	Mon-Sat: 8:00 AM - 10:00 PM
📜 License & Legal
MIT License
The MIT License is a permissive free software license originating at the Massachusetts Institute of Technology. It allows reuse of software with few restrictions.

Key Permissions:

Commercial use

Modification

Distribution

Private use

Key Limitations:

Liability

Warranty

Key Conditions:

License and copyright notice must be included

Disclaimer
ZenPharma is a demonstration project created for educational and portfolio purposes. The system is not intended for actual commercial use without proper security audits, data protection measures, and compliance with relevant regulations. Users are responsible for implementing appropriate security measures for production deployment.

🔄 Version History
Version	Date	Changes
2.0.0	2024	Complete code restructure, Enhanced UI design, Added payment methods, Improved error handling
1.0.0	2023	Initial release, Core features implemented, Basic UI design, File-based storage
🏆 Acknowledgments
Special Thanks
Bangladesh University of Business & Technology - Academic support and guidance

Open Source Community - Inspiration, resources, and best practices

All Contributors - For their valuable time, feedback, and suggestions

Resources Used
C Programming Language - ANSI C99 Standard

GCC Compiler - GNU Compiler Collection

Git - Version Control System

GitHub - Collaborative Development Platform

<div align="center">
💖 ZenPharma
Your Health, Our First Priority
Made with ❤️ by the ZenPharma Team

⬆ Back to Top

</div>
