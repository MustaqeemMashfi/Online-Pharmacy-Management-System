<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>ZenPharma · Design & Implementation</title>
    <!-- Font Awesome 6 (free) -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css" />
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            background: #f4f7fc;
            font-family: 'Segoe UI', Roboto, system-ui, -apple-system, sans-serif;
            color: #1e293b;
            padding: 2rem 1.5rem;
            line-height: 1.6;
        }

        .container {
            max-width: 1300px;
            margin: 0 auto;
            background: white;
            border-radius: 32px;
            padding: 2.5rem 2.8rem;
            box-shadow: 0 25px 50px -12px rgba(0, 0, 0, 0.15);
        }

        /* headings */
        h1,
        h2,
        h3,
        h4 {
            font-weight: 600;
            letter-spacing: -0.02em;
        }

        h1 {
            font-size: 2.6rem;
            border-left: 8px solid #0b8a6f;
            padding-left: 1.2rem;
            margin-bottom: 0.5rem;
            color: #0f2b3d;
        }

        .subhead {
            font-size: 1.1rem;
            color: #475569;
            margin-bottom: 2.5rem;
            padding-left: 2rem;
            border-bottom: 2px solid #e9edf2;
            padding-bottom: 0.75rem;
        }

        h2 {
            font-size: 1.9rem;
            margin-top: 2.8rem;
            margin-bottom: 1.2rem;
            color: #0b2b3c;
            display: flex;
            align-items: center;
            gap: 0.75rem;
        }

        h2 i {
            color: #0b8a6f;
            font-size: 1.8rem;
        }

        h3 {
            font-size: 1.4rem;
            margin: 1.8rem 0 1rem 0;
            color: #1e3a5f;
        }

        h4 {
            font-size: 1.1rem;
            margin: 1.2rem 0 0.5rem 0;
            color: #1e3a5f;
        }

        /* cards & boxes */
        .card-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));
            gap: 1.2rem;
            margin: 1.2rem 0 1.8rem 0;
        }

        .stat-card {
            background: #f8fafc;
            border-radius: 20px;
            padding: 1.2rem 1.4rem;
            border: 1px solid #e2e8f0;
            transition: 0.15s ease;
        }

        .stat-card:hover {
            background: #f1f5f9;
            border-color: #b9c7da;
        }

        .badge {
            display: inline-block;
            background: #d9f0e9;
            color: #0b5e4b;
            font-weight: 600;
            padding: 0.2rem 1rem;
            border-radius: 30px;
            font-size: 0.75rem;
            letter-spacing: 0.3px;
        }

        .table-wrap {
            overflow-x: auto;
            margin: 1.2rem 0 1.8rem 0;
            border-radius: 18px;
            border: 1px solid #e2e8f0;
            background: #fafcfd;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 0.95rem;
            min-width: 500px;
        }

        th {
            background: #eef2f6;
            text-align: left;
            padding: 0.9rem 1rem;
            font-weight: 600;
            color: #1e3a5f;
        }

        td {
            padding: 0.8rem 1rem;
            border-bottom: 1px solid #e9edf2;
        }

        tr:last-child td {
            border-bottom: none;
        }

        .flow-box {
            background: #f8fafc;
            border-radius: 24px;
            padding: 1.5rem 1.8rem;
            margin: 1.5rem 0;
            border: 1px solid #dde3ec;
            font-family: 'Courier New', monospace;
            font-size: 0.9rem;
            overflow-x: auto;
            white-space: pre-wrap;
            word-break: break-word;
        }

        .code-block {
            background: #0f1a24;
            color: #e2e8f0;
            padding: 1.2rem 1.6rem;
            border-radius: 18px;
            overflow-x: auto;
            font-family: 'JetBrains Mono', 'Fira Code', monospace;
            font-size: 0.9rem;
            margin: 1.2rem 0;
        }

        .code-block .comment {
            color: #7aa2b0;
        }

        .code-block .kw {
            color: #bb9af7;
        }

        .code-block .fn {
            color: #7dcfff;
        }

        .code-block .str {
            color: #9ece6a;
        }

        .inline-code {
            background: #eef2f6;
            padding: 0.2rem 0.7rem;
            border-radius: 12px;
            font-family: 'JetBrains Mono', monospace;
            font-size: 0.9rem;
            color: #0b2b3c;
        }

        .flex-icon-row {
            display: flex;
            flex-wrap: wrap;
            gap: 1.2rem 2.2rem;
            margin: 0.8rem 0 1.2rem 0;
        }

        .flex-icon-row span {
            font-size: 1rem;
            background: #f1f5f9;
            padding: 0.4rem 1.1rem;
            border-radius: 40px;
            display: inline-flex;
            align-items: center;
            gap: 0.5rem;
        }

        .flex-icon-row i {
            color: #0b8a6f;
        }

        hr {
            border: none;
            border-top: 2px dashed #d5dee8;
            margin: 2.5rem 0;
        }

        .color-dots {
            display: flex;
            flex-wrap: wrap;
            gap: 1.5rem 2.5rem;
            margin: 0.8rem 0 1.2rem 0;
        }

        .color-dots div {
            display: flex;
            align-items: center;
            gap: 0.6rem;
        }

        .dot {
            width: 22px;
            height: 22px;
            border-radius: 30px;
        }

        .dot-green {
            background: #0f9d76;
        }
        .dot-red {
            background: #d14545;
        }
        .dot-yellow {
            background: #d4a22b;
        }
        .dot-cyan {
            background: #1f8b9e;
        }
        .dot-white {
            background: #2c3e50;
        }

        .menu-example {
            background: #0f1a24;
            color: #dce3ec;
            padding: 1.4rem 2rem;
            border-radius: 24px;
            font-family: 'Courier New', monospace;
            line-height: 1.7;
            font-size: 0.95rem;
            margin: 1.2rem 0;
        }

        .menu-example .hl {
            color: #7dcfff;
        }

        .menu-example .dim {
            color: #8a9aad;
        }

        .mermaid-placeholder {
            background: #f1f6fa;
            border-radius: 24px;
            padding: 1.8rem;
            font-family: 'Courier New', monospace;
            border: 1px solid #d0dbe8;
            margin: 1.5rem 0;
            white-space: pre;
            overflow-x: auto;
            font-size: 0.85rem;
            color: #1e3a5f;
        }

        @media (max-width: 700px) {
            .container {
                padding: 1.5rem 1rem;
            }
            h1 {
                font-size: 2rem;
                padding-left: 0.8rem;
            }
            .subhead {
                padding-left: 0.8rem;
            }
            .flow-box {
                font-size: 0.8rem;
                padding: 1rem;
            }
        }

        /* small tweaks */
        .mt-1 {
            margin-top: 0.6rem;
        }
        .mb-1 {
            margin-bottom: 0.6rem;
        }
        .text-muted {
            color: #64748b;
        }
        .flex-between {
            display: flex;
            flex-wrap: wrap;
            justify-content: space-between;
            align-items: center;
        }
    </style>
</head>
<body>
<div class="container">

    <!-- Header -->
    <div style="display: flex; align-items: center; gap: 0.8rem; flex-wrap: wrap;">
        <h1>🎨 Design &amp; Implementation</h1>
        <span class="badge" style="background: #0b8a6f; color: white; padding: 0.3rem 1.2rem;">ZenPharma v1.0</span>
    </div>
    <div class="subhead">
        <i class="fas fa-pills" style="color: #0b8a6f; margin-right: 0.5rem;"></i>
        Console‑based Pharmacy Management System · C · flat‑file architecture
    </div>

    <!-- ========== SYSTEM DESIGN OVERVIEW ========== -->
    <h2><i class="fas fa-drafting-compass"></i> System Design Overview</h2>

    <h3>👤 User Interface Design</h3>
    <p>The system employs a <strong>menu-driven console interface</strong> with clear hierarchical navigation. Each user portal features:</p>
    <ul style="margin-left: 1.8rem; margin-bottom: 1rem;">
        <li><strong>Colored output</strong> for better visual distinction (green for success, red for errors, yellow for warnings)</li>
        <li><strong>Structured menus</strong> with numbered options for easy navigation</li>
        <li><strong>Input validation</strong> to prevent invalid entries</li>
        <li><strong>Loading animations</strong> and progress indicators for better user experience</li>
        <li><strong>Clear screen functionality</strong> to maintain interface cleanliness</li>
    </ul>

    <h3>🗄️ Database Design</h3>
    <p>The system uses <strong>flat-file database architecture</strong> with structured text files:</p>

    <div class="table-wrap">
        <table>
            <thead><tr><th>File</th><th>Purpose</th><th>Fields (sample)</th></tr></thead>
            <tbody>
                <tr><td><code>product.txt</code></td><td>Product inventory</td><td>ID, Name, Category, Price, Stock, Description</td></tr>
                <tr><td><code>customer.txt</code></td><td>Customer accounts</td><td>ID, Name, Username, Password, Phone, Address</td></tr>
                <tr><td><code>order.txt</code></td><td>Order history</td><td>ID, CustomerID, ProductID, Qty, Total, Address, Payment, Status, DeliverymanID</td></tr>
                <tr><td><code>feedback.txt</code></td><td>Customer feedback</td><td>CustomerID, Feedback, Date</td></tr>
                <tr><td><code>deliverymaninfo.txt</code></td><td>Delivery credentials</td><td>ID, Name, Username, Password, Phone, AssignedOrders</td></tr>
                <tr><td><code>about.txt</code></td><td>Pharmacy info</td><td>Name, Address, Phone, Email, Description</td></tr>
            </tbody>
        </table>
    </div>

    <div class="flow-box">
        <strong>┌─────────────────────────────────────────────────────────────┐</strong><br />
        <strong>│                      DATA STORAGE LAYER                     │</strong><br />
        <strong>├───────────────┬────────────────┬────────────────────────────┤</strong><br />
        │   product.txt  │  customer.txt  │     order.txt              │<br />
        │  ────────────  │  ─────────────  │     ─────────              │<br />
        │  Product ID    │  Customer ID   │     Order ID               │<br />
        │  Product Name  │  Full Name     │     Customer ID            │<br />
        │  Category      │  Username      │     Product ID             │<br />
        │  Price         │  Password      │     Quantity               │<br />
        │  Stock         │  Phone         │     Total Price            │<br />
        │  Description   │  Address       │     Delivery Address       │<br />
        │                │                │     Payment Method         │<br />
        │                │                │     Order Status           │<br />
        │                │                │     Deliveryman ID         │<br />
        <strong>├───────────────┼────────────────┼────────────────────────────┤</strong><br />
        │ feedback.txt  │ deliverymaninfo.txt │  about.txt            │<br />
        │  ────────────  │  ─────────────────  │  ─────────            │<br />
        │  Customer ID  │  Deliveryman ID    │  Pharmacy Name         │<br />
        │  Feedback     │  Full Name         │  Address               │<br />
        │  Date         │  Username          │  Phone                 │<br />
        │               │  Password          │  Email                 │<br />
        │               │  Phone             │  Description           │<br />
        │               │  Assigned Orders   │                        │<br />
        <strong>└───────────────┴────────────────┴────────────────────────────┘</strong>
    </div>

    <h4>📋 Database Schema Detail</h4>
    <div class="table-wrap">
        <table>
            <thead><tr><th>Table</th><th>Fields</th><th>Data Type</th><th>Description</th></tr></thead>
            <tbody>
                <tr><td><strong>Product</strong></td><td>ID, Name, Category, Price, Stock, Description</td><td>int, char[], char[], float, int, char[]</td><td>Product inventory management</td></tr>
                <tr><td><strong>Customer</strong></td><td>ID, Name, Username, Password, Phone, Address</td><td>int, char[], char[], char[], char[], char[]</td><td>Customer account records</td></tr>
                <tr><td><strong>Order</strong></td><td>ID, CustomerID, ProductID, Quantity, Total, Address, Payment, Status, DeliverymanID</td><td>int, int, int, int, float, char[], char[], char[], int</td><td>Order processing and tracking</td></tr>
                <tr><td><strong>Feedback</strong></td><td>CustomerID, Feedback, Date</td><td>int, char[], char[]</td><td>Customer reviews and suggestions</td></tr>
                <tr><td><strong>Deliveryman</strong></td><td>ID, Name, Username, Password, Phone, AssignedOrders</td><td>int, char[], char[], char[], char[], char[]</td><td>Delivery personnel management</td></tr>
                <tr><td><strong>About</strong></td><td>Name, Address, Phone, Email, Description</td><td>char[], char[], char[], char[], char[]</td><td>Pharmacy information</td></tr>
            </tbody>
        </table>
    </div>

    <hr />

    <!-- ========== SYSTEM WORKFLOW ========== -->
    <h2><i class="fas fa-route"></i> System Workflow</h2>

    <h3>🔐 Authentication Flow</h3>
    <div class="flow-box">
        ┌─────────────┐    ┌─────────────────┐    ┌─────────────────┐<br />
        │   START     │───▶│  Login Screen   │───▶│  Role Selection │<br />
        └─────────────┘    └─────────────────┘    └────────┬────────┘<br />
                                                            │<br />
                                            ┌───────────────┼───────────────┐<br />
                                            │               │               │<br />
                                            ▼               ▼               ▼<br />
                                    ┌──────────────┐┌──────────────┐┌──────────────┐<br />
                                    │   Admin      ││  Customer    ││  Deliveryman │<br />
                                    │   Portal     ││   Portal     ││   Portal     │<br />
                                    └──────┬───────┘└──────┬───────┘└──────┬───────┘<br />
                                           │               │               │<br />
                                           └───────────────┼───────────────┘<br />
                                                           │<br />
                                                           ▼<br />
                                                    ┌─────────────┐<br />
                                                    │  Logout     │<br />
                                                    └─────────────┘
    </div>

    <h3>🧑‍💼 Customer Journey</h3>
    <div class="mermaid-placeholder">
        graph TD
        A[Login] --&gt; B[Browse Products]
        B --&gt; C[Search Products]
        B --&gt; D[Add to Cart]
        D --&gt; E[Update Cart]
        E --&gt; F[Checkout]
        F --&gt; G[Select Payment]
        G --&gt; H[Confirm Order]
        H --&gt; I[Order Confirmed]
        I --&gt; J[View Order History]
        J --&gt; K[Give Feedback]
        K --&gt; L[Logout]
    </div>

    <h3>📦 Order Processing Flow</h3>
    <div class="flow-box">
        ┌─────────────────────────────────────────────────────────────────┐<br />
        │                        ORDER PROCESSING                         │<br />
        ├─────────────────────────────────────────────────────────────────┤<br />
        │                                                                 │<br />
        │  Customer      ──────▶  Order Placed  ──────▶  Pending         │<br />
        │    Adds                    │                      │              │<br />
        │    Items                   │                      │              │<br />
        │                            ▼                      ▼              │<br />
        │  Cart       ──────▶  Confirmation   ──────▶  Processing        │<br />
        │  Checkout                │                      │              │<br />
        │                          │                      │              │<br />
        │                          ▼                      ▼              │<br />
        │                     Assigned  ──────▶  Out for     ──────▶     │<br />
        │                     Delivery             Delivery              │<br />
        │                          │                      │              │<br />
        │                          └──────────────────────┘              │<br />
        │                                          │                      │<br />
        │                                          ▼                      │<br />
        │                                     DELIVERED                  │<br />
        │                                                                 │<br />
        └─────────────────────────────────────────────────────────────────┘
    </div>

    <hr />

    <!-- ========== TECHNOLOGY STACK ========== -->
    <h2><i class="fas fa-cogs"></i> Technology Stack</h2>

    <div class="card-grid">
        <div class="stat-card"><strong>Programming Language</strong><br />C</div>
        <div class="stat-card"><strong>Compiler</strong><br />GCC</div>
        <div class="stat-card"><strong>Data Storage</strong><br />Plain Text Files</div>
        <div class="stat-card"><strong>Version Control</strong><br />Git</div>
        <div class="stat-card"><strong>Platform</strong><br />Cross‑platform (Win, Linux, macOS)</div>
    </div>

    <h4>📚 Libraries Used</h4>
    <div class="code-block">
        <span class="comment">// Core libraries</span><br />
        #include &lt;stdio.h&gt;      <span class="comment">// Input/output operations</span><br />
        #include &lt;stdlib.h&gt;     <span class="comment">// Memory allocation, system calls</span><br />
        #include &lt;string.h&gt;     <span class="comment">// String manipulation</span><br />
        #include &lt;ctype.h&gt;      <span class="comment">// Character classification</span><br />
        #include &lt;time.h&gt;       <span class="comment">// Date and time handling</span><br />
        #include &lt;conio.h&gt;      <span class="comment">// Console I/O (Windows)</span><br />
        #include &lt;unistd.h&gt;     <span class="comment">// POSIX operating system API</span>
    </div>

    <hr />

    <!-- ========== DATA FLOW ========== -->
    <h2><i class="fas fa-project-diagram"></i> Data Flow Diagram</h2>

    <h4>Level 0 (Context Diagram)</h4>
    <div class="flow-box">
        ┌─────────────────────────────────────────────────────────────────┐<br />
        │                                                                 │<br />
        │  ┌─────────┐         ┌──────────────────┐        ┌─────────┐  │<br />
        │  │  Admin  │────────▶│                  │◀───────│  Data   │  │<br />
        │  └─────────┘         │                  │        │  Files  │  │<br />
        │                      │   ZENPHARMA      │        └─────────┘  │<br />
        │  ┌─────────┐         │   SYSTEM         │                       │<br />
        │  │Customer │────────▶│                  │                      │<br />
        │  └─────────┘         │                  │                      │<br />
        │                      │                  │                      │<br />
        │  ┌──────────┐        │                  │                      │<br />
        │  │Delivery- │────────▶                  │                      │<br />
        │  │man       │        └──────────────────┘                      │<br />
        │  └──────────┘                                                  │<br />
        │                                                                 │<br />
        └─────────────────────────────────────────────────────────────────┘
    </div>

    <h4>Level 1 (Process Decomposition)</h4>
    <div class="flow-box">
        ┌─────────────────────────────────────────────────────────────────┐<br />
        │                                                                 │<br />
        │  ┌───────────────────────────────────────────────────────────┐  │<br />
        │  │                    User Authentication                   │  │<br />
        │  └───────────────────────────────────────────────────────────┘  │<br />
        │                              │                                  │<br />
        │           ┌──────────────────┼──────────────────┐              │<br />
        │           │                  │                  │              │<br />
        │           ▼                  ▼                  ▼              │<br />
        │  ┌────────────────┐  ┌──────────────┐  ┌─────────────────┐   │<br />
        │  │   Admin        │  │   Customer   │  │   Deliveryman   │   │<br />
        │  │   Functions    │  │   Functions  │  │   Functions     │   │<br />
        │  └──────┬─────────┘  └──────┬───────┘  └──────┬──────────┘   │<br />
        │         │                   │                  │              │<br />
        │         └──────────┬────────┘                  │              │<br />
        │                    │                           │              │<br />
        │                    ▼                           ▼              │<br />
        │         ┌─────────────────┐        ┌──────────────────┐      │<br />
        │         │  Product        │        │   Order          │      │<br />
        │         │  Management     │        │   Management     │      │<br />
        │         └─────────────────┘        └──────────────────┘      │<br />
        │                                                                 │<br />
        └─────────────────────────────────────────────────────────────────┘
    </div>

    <hr />

    <!-- ========== MODULE STRUCTURE ========== -->
    <h2><i class="fas fa-cubes"></i> Module Structure</h2>

    <h3>🔧 Admin Module Functions</h3>
    <div class="table-wrap">
        <table>
            <thead><tr><th>Function</th><th>Description</th><th>Parameters</th><th>Return</th></tr></thead>
            <tbody>
                <tr><td><code>adminMenu()</code></td><td>Main admin dashboard</td><td>None</td><td>void</td></tr>
                <tr><td><code>addProduct()</code></td><td>Add new product to inventory</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewProducts()</code></td><td>Display all products</td><td>None</td><td>void</td></tr>
                <tr><td><code>searchProduct()</code></td><td>Search by ID or name</td><td>None</td><td>void</td></tr>
                <tr><td><code>updateProduct()</code></td><td>Modify product details</td><td>None</td><td>void</td></tr>
                <tr><td><code>updateStock()</code></td><td>Adjust stock levels</td><td>None</td><td>void</td></tr>
                <tr><td><code>deleteProduct()</code></td><td>Remove product</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewFeedback()</code></td><td>Display customer feedback</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewOrders()</code></td><td>Display all orders</td><td>None</td><td>void</td></tr>
                <tr><td><code>editAbout()</code></td><td>Update pharmacy info</td><td>None</td><td>void</td></tr>
            </tbody>
        </table>
    </div>

    <h3>🛒 Customer Module Functions</h3>
    <div class="table-wrap">
        <table>
            <thead><tr><th>Function</th><th>Description</th><th>Parameters</th><th>Return</th></tr></thead>
            <tbody>
                <tr><td><code>customerMenu()</code></td><td>Main customer dashboard</td><td>None</td><td>void</td></tr>
                <tr><td><code>customerBrowseProducts()</code></td><td>Browse by category</td><td>None</td><td>void</td></tr>
                <tr><td><code>customerSearchProduct()</code></td><td>Search products</td><td>None</td><td>void</td></tr>
                <tr><td><code>addToCart()</code></td><td>Add product to cart</td><td>None</td><td>void</td></tr>
                <tr><td><code>updateCart()</code></td><td>Modify cart items</td><td>None</td><td>void</td></tr>
                <tr><td><code>checkout()</code></td><td>Place order</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewOrderHistory()</code></td><td>View past orders</td><td>None</td><td>void</td></tr>
                <tr><td><code>giveFeedback()</code></td><td>Submit feedback</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewAbout()</code></td><td>View pharmacy info</td><td>None</td><td>void</td></tr>
            </tbody>
        </table>
    </div>

    <h3>🚚 Deliveryman Module Functions</h3>
    <div class="table-wrap">
        <table>
            <thead><tr><th>Function</th><th>Description</th><th>Parameters</th><th>Return</th></tr></thead>
            <tbody>
                <tr><td><code>deliverymanMenu()</code></td><td>Main delivery dashboard</td><td>None</td><td>void</td></tr>
                <tr><td><code>viewAssignedOrders()</code></td><td>View assigned orders</td><td>None</td><td>void</td></tr>
                <tr><td><code>updateOrderStatus()</code></td><td>Update delivery status</td><td>None</td><td>void</td></tr>
            </tbody>
        </table>
    </div>

    <hr />

    <!-- ========== SECURITY ========== -->
    <h2><i class="fas fa-lock"></i> Security Implementation</h2>

    <h4>🔐 User Authentication</h4>
    <div class="code-block">
        <span class="kw">int</span> <span class="fn">authenticateUser</span>(<span class="kw">char</span>* username, <span class="kw">char</span>* password, <span class="kw">char</span>* role) {<br />
        &nbsp;&nbsp;&nbsp;&nbsp;<span class="comment">// Validates user credentials against respective data files</span><br />
        &nbsp;&nbsp;&nbsp;&nbsp;<span class="comment">// Returns 1 for success, 0 for failure</span><br />
        &nbsp;&nbsp;&nbsp;&nbsp;<span class="comment">// Implements secure string comparison</span><br />
        }
    </div>

    <ul style="margin-left: 1.8rem; margin-bottom: 1rem;">
        <li><strong>Data Type Validation</strong>: Ensures numeric fields accept only numbers</li>
        <li><strong>Range Checking</strong>: Validates stock quantities and prices within acceptable limits</li>
        <li><strong>String Sanitization</strong>: Prevents buffer overflow attacks</li>
        <li><strong>File Access Control</strong>: Proper file permissions and error handling</li>
    </ul>

    <hr />

    <!-- ========== FILE HANDLING ========== -->
    <h2><i class="fas fa-file-alt"></i> File Handling Strategy</h2>

    <h4>📂 File Operations</h4>
    <div class="code-block">
        <span class="comment">// File Modes Used</span><br />
        <span class="str">"r"</span>  - Read only<br />
        <span class="str">"w"</span>  - Write only (overwrites existing)<br />
        <span class="str">"a"</span>  - Append only<br />
        <span class="str">"r+"</span> - Read and write<br />
        <span class="str">"w+"</span> - Read and write (overwrites)<br />
        <span class="str">"a+"</span> - Read and append
    </div>

    <div class="table-wrap">
        <table>
            <thead><tr><th>Operation</th><th>Method</th><th>Description</th></tr></thead>
            <tbody>
                <tr><td><strong>Create</strong></td><td><code>fprintf()</code></td><td>Write new records to file</td></tr>
                <tr><td><strong>Read</strong></td><td><code>fscanf()</code></td><td>Read records sequentially</td></tr>
                <tr><td><strong>Update</strong></td><td>Temporary file</td><td>Create new file, copy modified data</td></tr>
                <tr><td><strong>Delete</strong></td><td>Temporary file</td><td>Skip deleted record while copying</td></tr>
            </tbody>
        </table>
    </div>

    <hr />

    <!-- ========== PERFORMANCE ========== -->
    <h2><i class="fas fa-tachometer-alt"></i> Performance Considerations</h2>

    <div class="table-wrap">
        <table>
            <thead><tr><th>Aspect</th><th>Optimization</th><th>Benefit</th></tr></thead>
            <tbody>
                <tr><td><strong>File I/O</strong></td><td>Buffered operations</td><td>Reduced disk access time</td></tr>
                <tr><td><strong>Memory</strong></td><td>Fixed-size arrays</td><td>No dynamic allocation overhead</td></tr>
                <tr><td><strong>Search</strong></td><td>Sequential with early exit</td><td>Faster product lookups</td></tr>
                <tr><td><strong>Validation</strong></td><td>Pre-processing checks</td><td>Prevents invalid operations</td></tr>
            </tbody>
        </table>
    </div>

    <hr />

    <!-- ========== ERROR HANDLING ========== -->
    <h2><i class="fas fa-exclamation-triangle"></i> Error Handling</h2>

    <div class="table-wrap">
        <table>
            <thead><tr><th>Error Type</th><th>Response</th><th>Recovery</th></tr></thead>
            <tbody>
                <tr><td><strong>File Not Found</strong></td><td>Create new file</td><td>Continue operation</td></tr>
                <tr><td><strong>Invalid Input</strong></td><td>Prompt re-entry</td><td>User correction</td></tr>
                <tr><td><strong>Memory Error</strong></td><td>Display error message</td><td>Exit gracefully</td></tr>
                <tr><td><strong>Permission Denied</strong></td><td>Display error message</td><td>Exit operation</td></tr>
                <tr><td><strong>Data Corruption</strong></td><td>Backup restoration</td><td>Revert to backup</td></tr>
            </tbody>
        </table>
    </div>

    <hr />

    <!-- ========== UX DESIGN ========== -->
    <h2><i class="fas fa-palette"></i> User Experience Design</h2>

    <h4>🎨 Color Scheme</h4>
    <div class="color-dots">
        <div><span class="dot dot-green"></span> Green – Success messages</div>
        <div><span class="dot dot-red"></span> Red – Error messages</div>
        <div><span class="dot dot-yellow"></span> Yellow – Warnings</div>
        <div><span class="dot dot-cyan"></span> Cyan – Headers</div>
        <div><span class="dot dot-white"></span> White – Normal text</div>
    </div>

    <h4>📋 Menu Structure Example</h4>
    <div class="menu-example">
        <span class="hl">╔══════════════════════════════════════╗</span><br />
        <span class="hl">║         ADMIN DASHBOARD             ║</span><br />
        <span class="hl">╠══════════════════════════════════════╣</span><br />
        <span class="dim">║</span>  1. Add Product                     <span class="dim">║</span><br />
        <span class="dim">║</span>  2. View Products                   <span class="dim">║</span><br />
        <span class="dim">║</span>  3. Search Products                 <span class="dim">║</span><br />
        <span class="dim">║</span>  4. Update Product                  <span class="dim">║</span><br />
        <span class="dim">║</span>  5. Update Stock                    <span class="dim">║</span><br />
        <span class="dim">║</span>  6. Delete Product                  <span class="dim">║</span><br />
        <span class="dim">║</span>  7. View Feedback                   <span class="dim">║</span><br />
        <span class="dim">║</span>  8. View Orders                     <span class="dim">║</span><br />
        <span class="dim">║</span>  9. Edit About Us                   <span class="dim">║</span><br />
        <span class="dim">║</span>  10. Logout                         <span class="dim">║</span><br />
        <span class="hl">╚══════════════════════════════════════╝</span><br />
        Enter your choice (1-10):
    </div>

    <hr />

    <!-- ========== TESTING ========== -->
    <h2><i class="fas fa-vial"></i> Testing Strategy</h2>

    <div class="table-wrap">
        <table>
            <thead><tr><th>Test Case</th><th>Expected Result</th><th>Status</th></tr></thead>
            <tbody>
                <tr><td>Valid Login</td><td>Access granted</td><td>✅</td></tr>
                <tr><td>Invalid Login</td><td>Access denied</td><td>✅</td></tr>
                <tr><td>Add Product</td><td>File updated</td><td>✅</td></tr>
                <tr><td>Update Product</td><td>Changes saved</td><td>✅</td></tr>
                <tr><td>Delete Product</td><td>Product removed</td><td>✅</td></tr>
                <tr><td>Place Order</td><td>Order created</td><td>✅</td></tr>
                <tr><td>Update Status</td><td>Status changed</td><td>✅</td></tr>
                <tr><td>Submit Feedback</td><td>Feedback saved</td><td>✅</td></tr>
            </tbody>
        </table>
    </div>

    <h4>🧩 Edge Cases Handled</h4>
    <ul style="margin-left: 1.8rem; margin-bottom: 1rem;">
        <li>Empty files and missing data</li>
        <li>Maximum buffer limits</li>
        <li>Concurrent file access</li>
        <li>Invalid file permissions</li>
        <li>Data type mismatches</li>
    </ul>

    <hr style="margin: 3rem 0 1.5rem 0;" />

    <div style="display: flex; justify-content: space-between; flex-wrap: wrap; gap: 1rem; font-size: 0.9rem; color: #475569; border-top: 1px solid #e2e8f0; padding-top: 1.8rem;">
        <span><i class="fas fa-code"></i> ZenPharma · Design &amp; Implementation</span>
        <span><i class="fas fa-calendar-alt"></i> 2026 · GitHub README</span>
    </div>

</div>
</body>
</html>
