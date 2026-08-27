#include <stdio.h>

int main() {
    // Header
    printf("# Group_Project\n\n");
    printf("# ZenPharma - Online Pharmacy Management System\n\n");
    
    // Badges (simulated with plain text)
    printf("[GitHub repo size](https://github.com/DiptoChaklader/Group_Project)\n");
    printf("[GitHub contributors](https://github.com/DiptoChaklader/Group_Project)\n");
    printf("[GitHub stars](https://github.com/DiptoChaklader/Group_Project)\n\n");
    
    // About Section
    printf("## \xF0\x9F\x8F\xA5 About ZenPharma\n\n");
    printf("**ZenPharma** is a comprehensive **Console-Based Pharmacy Management System** developed in C. ");
    printf("It provides a complete solution for managing an online pharmacy with three distinct user portals:\n\n");
    printf("- **Admin Portal** \xE2\x80\x93 Full control over products, orders, and pharmacy information\n");
    printf("- **Customer Portal** \xE2\x80\x93 Browse products, manage cart, place orders, and give feedback\n");
    printf("- **Deliveryman Portal** \xE2\x80\x93 View assigned orders and update delivery status\n\n");
    printf("This project demonstrates fundamental concepts of **file handling**, **data structures**, ");
    printf("**user authentication**, and **transaction management** in C programming.\n\n");
    
    printf("---\n\n");
    
    // Features Section
    printf("## \xE2\x9C\xA8 Features\n\n");
    
    // Admin Portal
    printf("### \xF0\x9F\x94\x90 Admin Portal\n");
    printf("| Feature | Description |\n");
    printf("|---------|-------------|\n");
    printf("| **Add Product** | Add new medicines, accessories, skincare, hygiene, and child care products |\n");
    printf("| **View Products** | Browse products by category (MED/ACC/SKN/HH/CC) |\n");
    printf("| **Search Products** | Search by product ID or name |\n");
    printf("| **Update Product** | Modify existing product details |\n");
    printf("| **Update Stock** | Adjust product stock levels |\n");
    printf("| **Delete Product** | Remove products from inventory |\n");
    printf("| **View Feedback** | Read all customer feedback |\n");
    printf("| **View Orders** | See all placed orders |\n");
    printf("| **Edit About** | Update pharmacy information page |\n\n");
    
    // Customer Portal
    printf("### \xF0\x9F\x9B\x92 Customer Portal\n");
    printf("| Feature | Description |\n");
    printf("|---------|-------------|\n");
    printf("| **Browse Products** | View products by category |\n");
    printf("| **Search Products** | Find products by ID or name |\n");
    printf("| **Add to Cart** | Add products to shopping cart |\n");
    printf("| **Update Cart** | Change quantity or remove items |\n");
    printf("| **Checkout** | Place orders with delivery address |\n");
    printf("| **Multiple Payments** | Cash on Delivery, Bkash, Nagad |\n");
    printf("| **Order History** | View past orders |\n");
    printf("| **Give Feedback** | Submit reviews and suggestions |\n");
    printf("| **About Pharmacy** | View pharmacy information |\n\n");
    
    // Deliveryman Portal
    printf("### \xF0\x9F\x9A\x9A Deliveryman Portal\n");
    printf("| Feature | Description |\n");
    printf("|---------|-------------|\n");
    printf("| **View Assigned Orders** | See orders assigned to you |\n");
    printf("| **Update Order Status** | Mark orders as DELIVERED |\n");
    printf("| **Logout** | Secure logout |\n\n");
    
    printf("---\n\n");
    
    // Data Storage Section
    printf("## \xF0\x9F\x97\x82\xEF\xB8\x8F Data Storage\n\n");
    printf("All data is stored in **plain text files** for simplicity and portability:\n\n");
    printf("| File Name | Purpose |\n");
    printf("|-----------|---------|\n");
    printf("| `product.txt` | Product inventory database |\n");
    printf("| `customer.txt` | Customer account information |\n");
    printf("| `order.txt` | Order history and details |\n");
    printf("| `feedback.txt` | Customer feedback records |\n");
    printf("| `deliverymaninfo.txt` | Deliveryman credentials |\n");
    printf("| `about.txt` | Pharmacy information |\n\n");
    
    printf("---\n\n");
    
    // Getting Started Section
    printf("## \xF0\x9F\x9A\x80 Getting Started\n\n");
    
    printf("### Prerequisites\n\n");
    printf("- **C Compiler** (GCC recommended)\n");
    printf("- **Terminal/Command Prompt**\n");
    printf("- **Git** (for cloning)\n\n");
    
    printf("### Installation\n\n");
    printf("1. **Clone the repository**\n");
    printf("   ```bash\n");
    printf("   git clone https://github.com/DiptoChaklader/Group_Project.git\n");
    printf("   cd Group_Project\n");
    printf("   ```\n");
    
    return 0;
}

# Group_Project

# ZenPharma - Online Pharmacy Management System

[![GitHub repo size](https://img.shields.io/github/repo-size/DiptoChaklader/Group_Project)](https://github.com/DiptoChaklader/Group_Project)
[![GitHub contributors](https://img.shields.io/github/contributors/DiptoChaklader/Group_Project)](https://github.com/DiptoChaklader/Group_Project)
[![GitHub stars](https://img.shields.io/github/stars/DiptoChaklader/Group_Project)](https://github.com/DiptoChaklader/Group_Project)

## 🏥 About ZenPharma

**ZenPharma** is a comprehensive **Console-Based Pharmacy Management System** developed in C. It provides a complete solution for managing an online pharmacy with three distinct user portals:

- **Admin Portal** – Full control over products, orders, and pharmacy information
- **Customer Portal** – Browse products, manage cart, place orders, and give feedback
- **Deliveryman Portal** – View assigned orders and update delivery status

This project demonstrates fundamental concepts of **file handling**, **data structures**, **user authentication**, and **transaction management** in C programming.

---

## ✨ Features

### 🔐 Admin Portal
| Feature | Description |
|---------|-------------|
| **Add Product** | Add new medicines, accessories, skincare, hygiene, and child care products |
| **View Products** | Browse products by category (MED/ACC/SKN/HH/CC) |
| **Search Products** | Search by product ID or name |
| **Update Product** | Modify existing product details |
| **Update Stock** | Adjust product stock levels |
| **Delete Product** | Remove products from inventory |
| **View Feedback** | Read all customer feedback |
| **View Orders** | See all placed orders |
| **Edit About** | Update pharmacy information page |

### 🛒 Customer Portal
| Feature | Description |
|---------|-------------|
| **Browse Products** | View products by category |
| **Search Products** | Find products by ID or name |
| **Add to Cart** | Add products to shopping cart |
| **Update Cart** | Change quantity or remove items |
| **Checkout** | Place orders with delivery address |
| **Multiple Payments** | Cash on Delivery, Bkash, Nagad |
| **Order History** | View past orders |
| **Give Feedback** | Submit reviews and suggestions |
| **About Pharmacy** | View pharmacy information |

### 🚚 Deliveryman Portal
| Feature | Description |
|---------|-------------|
| **View Assigned Orders** | See orders assigned to you |
| **Update Order Status** | Mark orders as DELIVERED |
| **Logout** | Secure logout |

---

## 🗂️ Data Storage

All data is stored in **plain text files** for simplicity and portability:

| File Name | Purpose |
|-----------|---------|
| `product.txt` | Product inventory database |
| `customer.txt` | Customer account information |
| `order.txt` | Order history and details |
| `feedback.txt` | Customer feedback records |
| `deliverymaninfo.txt` | Deliveryman credentials |
| `about.txt` | Pharmacy information |

---

## 🚀 Getting Started

### Prerequisites

- **C Compiler** (GCC recommended)
- **Terminal/Command Prompt**
- **Git** (for cloning)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/DiptoChaklader/Group_Project.git
   cd Group_Project


