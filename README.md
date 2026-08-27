<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>ZenPharma · UI Design</title>
  <!-- Font Awesome 6 (free) -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css" />
  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
      font-family: 'Segoe UI', Roboto, system-ui, sans-serif;
    }

    body {
      background: #f4f7fc;
      padding: 2rem 1.5rem;
      display: flex;
      flex-direction: column;
      align-items: center;
    }

    .design-container {
      max-width: 1400px;
      width: 100%;
    }

    /* header / badge */
    .brand-header {
      display: flex;
      align-items: center;
      justify-content: space-between;
      flex-wrap: wrap;
      gap: 1rem 1.5rem;
      margin-bottom: 2.5rem;
      background: white;
      padding: 1.2rem 2rem;
      border-radius: 32px;
      box-shadow: 0 8px 24px rgba(0, 20, 40, 0.06);
    }

    .brand-left {
      display: flex;
      align-items: center;
      gap: 0.8rem;
    }

    .brand-left i {
      font-size: 2.2rem;
      color: #0b6e4f;
      background: #e2f0ea;
      padding: 10px;
      border-radius: 18px;
    }

    .brand-left h1 {
      font-weight: 700;
      font-size: 1.9rem;
      letter-spacing: -0.5px;
      color: #0b2b22;
    }

    .brand-left h1 span {
      font-weight: 300;
      color: #3c6b5a;
    }

    .badge-group {
      display: flex;
      flex-wrap: wrap;
      gap: 0.8rem 1.2rem;
    }

    .badge-group a {
      text-decoration: none;
      color: #1f3d32;
      background: #f0f5f3;
      padding: 0.5rem 1.2rem;
      border-radius: 60px;
      font-size: 0.85rem;
      font-weight: 500;
      display: inline-flex;
      align-items: center;
      gap: 8px;
      transition: 0.2s;
    }

    .badge-group a i {
      color: #0b6e4f;
    }

    .badge-group a:hover {
      background: #dcebe4;
      color: #063d2e;
    }

    /* section title */
    .section-title {
      font-size: 1.5rem;
      font-weight: 600;
      color: #1b3d31;
      margin-top: 2.5rem;
      margin-bottom: 1.2rem;
      display: flex;
      align-items: center;
      gap: 10px;
      border-left: 6px solid #0b6e4f;
      padding-left: 1rem;
    }

    .section-title i {
      color: #0b6e4f;
      font-size: 1.4rem;
    }

    .portal-grid {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
      gap: 2rem;
      margin-bottom: 2.5rem;
    }

    /* portal card */
    .portal-card {
      background: white;
      border-radius: 36px;
      box-shadow: 0 12px 32px rgba(0, 20, 30, 0.06);
      padding: 1.8rem 1.5rem 2rem;
      transition: 0.25s ease;
      border: 1px solid rgba(11, 110, 79, 0.08);
      display: flex;
      flex-direction: column;
    }

    .portal-card:hover {
      transform: translateY(-6px);
      box-shadow: 0 20px 40px rgba(0, 40, 30, 0.08);
    }

    .portal-header {
      display: flex;
      align-items: center;
      gap: 14px;
      margin-bottom: 1.6rem;
    }

    .portal-header .icon-circle {
      width: 54px;
      height: 54px;
      border-radius: 20px;
      display: flex;
      align-items: center;
      justify-content: center;
      font-size: 1.8rem;
      color: white;
      background: #0b6e4f;
    }

    .portal-header .icon-circle.admin {
      background: #1f4e6f;
    }
    .portal-header .icon-circle.customer {
      background: #2a6b4c;
    }
    .portal-header .icon-circle.delivery {
      background: #b8682c;
    }

    .portal-header h2 {
      font-size: 1.5rem;
      font-weight: 600;
      color: #1e2f28;
    }

    .portal-header h2 small {
      font-size: 0.8rem;
      font-weight: 400;
      color: #5f7a6d;
      display: block;
      margin-top: 2px;
    }

    .feature-list {
      list-style: none;
      margin: 0.8rem 0 1.2rem;
      flex: 1;
    }

    .feature-list li {
      padding: 0.55rem 0;
      border-bottom: 1px solid #eef3f1;
      display: flex;
      align-items: center;
      gap: 12px;
      font-size: 0.95rem;
      color: #1a372c;
      font-weight: 450;
    }

    .feature-list li:last-child {
      border-bottom: none;
    }

    .feature-list li i {
      width: 20px;
      color: #0b6e4f;
      font-size: 0.95rem;
      text-align: center;
    }

    .feature-list li .fa-truck {
      color: #b8682c;
    }

    .feature-list li .fa-user-shield {
      color: #1f4e6f;
    }

    .feature-tag {
      background: #eaf3ef;
      padding: 0.2rem 0.8rem;
      border-radius: 30px;
      font-size: 0.7rem;
      font-weight: 600;
      color: #0b4e3a;
      margin-left: auto;
      letter-spacing: 0.3px;
      text-transform: uppercase;
    }

    .portal-footer {
      margin-top: 1.2rem;
      display: flex;
      justify-content: flex-end;
    }

    .portal-footer .btn-outline {
      background: transparent;
      border: 1.5px solid #0b6e4f;
      color: #0b6e4f;
      padding: 0.5rem 1.6rem;
      border-radius: 60px;
      font-weight: 600;
      font-size: 0.85rem;
      transition: 0.2s;
      text-decoration: none;
    }

    .portal-footer .btn-outline:hover {
      background: #0b6e4f;
      color: white;
    }

    /* data storage + extra */
    .data-section {
      background: white;
      border-radius: 32px;
      padding: 1.8rem 2rem;
      margin-top: 2.5rem;
      box-shadow: 0 8px 28px rgba(0, 20, 30, 0.04);
    }

    .data-grid {
      display: grid;
      grid-template-columns: repeat(auto-fill, minmax(160px, 1fr));
      gap: 1rem 0.8rem;
      margin-top: 1rem;
    }

    .data-item {
      background: #f6faf8;
      padding: 0.7rem 1rem;
      border-radius: 60px;
      display: flex;
      align-items: center;
      gap: 10px;
      font-size: 0.9rem;
      font-weight: 500;
      color: #1a3a2d;
    }

    .data-item i {
      color: #0b6e4f;
      font-size: 1rem;
      width: 20px;
    }

    .code-block {
      background: #0b1e18;
      color: #c9e6db;
      padding: 1.4rem 2rem;
      border-radius: 24px;
      font-family: 'JetBrains Mono', monospace;
      font-size: 0.9rem;
      margin: 1.5rem 0 0.2rem;
      display: flex;
      align-items: center;
      flex-wrap: wrap;
      gap: 8px 16px;
    }

    .code-block i {
      color: #7fc9b0;
      margin-right: 6px;
    }

    .code-block span {
      background: #1d3a30;
      padding: 0.2rem 1rem;
      border-radius: 30px;
      font-size: 0.75rem;
      color: #b2dfd0;
    }

    hr {
      border: none;
      border-top: 1.5px dashed #c6ddd2;
      margin: 2rem 0 0.5rem;
    }

    .footer-credit {
      display: flex;
      justify-content: space-between;
      align-items: center;
      flex-wrap: wrap;
      margin: 1.8rem 0 0.6rem;
      color: #3f6354;
      font-size: 0.9rem;
    }

    .footer-credit i {
      color: #0b6e4f;
    }

    .shields {
      display: flex;
      gap: 0.8rem;
      flex-wrap: wrap;
    }

    .shields span {
      background: #e2ede7;
      padding: 0.2rem 1rem;
      border-radius: 60px;
      font-size: 0.75rem;
      font-weight: 500;
    }

    @media (max-width: 600px) {
      .brand-header {
        flex-direction: column;
        align-items: flex-start;
      }
      .portal-card {
        padding: 1.5rem 1.2rem;
      }
      .code-block {
        flex-direction: column;
        align-items: flex-start;
      }
    }
  </style>
</head>
<body>
<div class="design-container">

  <!-- header -->
  <header class="brand-header">
    <div class="brand-left">
      <i class="fas fa-pills"></i>
      <h1>Zen<span>Pharma</span></h1>
    </div>
    <div class="badge-group">
      <a href="#"><i class="fas fa-code-branch"></i> repo size</a>
      <a href="#"><i class="fas fa-users"></i> contributors</a>
      <a href="#"><i class="fas fa-star"></i> stars</a>
    </div>
  </header>

  <!-- About ZenPharma -->
  <div style="background:white; border-radius:28px; padding:1.6rem 2rem; margin-bottom:0.5rem; box-shadow:0 6px 20px rgba(0,0,0,0.02);">
    <div style="display:flex; flex-wrap:wrap; gap:1.2rem; align-items:center;">
      <div style="display:flex; gap:8px; flex-wrap:wrap;">
        <span style="background:#dcebe4; padding:0.3rem 1.2rem; border-radius:40px; font-weight:600; color:#0a3d2e;"><i class="fas fa-user-shield" style="margin-right:6px;"></i>Admin</span>
        <span style="background:#dcebe4; padding:0.3rem 1.2rem; border-radius:40px; font-weight:600; color:#0a3d2e;"><i class="fas fa-user" style="margin-right:6px;"></i>Customer</span>
        <span style="background:#dcebe4; padding:0.3rem 1.2rem; border-radius:40px; font-weight:600; color:#0a3d2e;"><i class="fas fa-truck" style="margin-right:6px;"></i>Deliveryman</span>
      </div>
      <div style="margin-left:auto; color:#2b5a48;"><i class="fas fa-database"></i> file handling · data structures · auth</div>
    </div>
  </div>

  <!-- ========== ADMIN PORTAL ========== -->
  <div class="section-title"><i class="fas fa-user-shield"></i> Admin Portal</div>
  <div class="portal-grid">
    <!-- admin card -->
    <div class="portal-card">
      <div class="portal-header">
        <div class="icon-circle admin"><i class="fas fa-shield-halved"></i></div>
        <h2>Admin <small>full control</small></h2>
      </div>
      <ul class="feature-list">
        <li><i class="fas fa-plus-circle"></i> Add Product <span class="feature-tag">MED/ACC/SKN/HH/CC</span></li>
        <li><i class="fas fa-list-ul"></i> View Products <span class="feature-tag">by category</span></li>
        <li><i class="fas fa-search"></i> Search (ID / name)</li>
        <li><i class="fas fa-edit"></i> Update Product / Stock</li>
        <li><i class="fas fa-trash-can"></i> Delete Product</li>
        <li><i class="fas fa-comment"></i> View Feedback</li>
        <li><i class="fas fa-truck"></i> View Orders</li>
        <li><i class="fas fa-info-circle"></i> Edit About pharmacy</li>
      </ul>
      <div class="portal-footer">
        <span class="btn-outline"><i class="fas fa-key"></i> manage</span>
      </div>
    </div>

    <!-- ========== CUSTOMER PORTAL ========== -->
    <div class="portal-card">
      <div class="portal-header">
        <div class="icon-circle customer"><i class="fas fa-user"></i></div>
        <h2>Customer <small>browse &amp; buy</small></h2>
      </div>
      <ul class="feature-list">
        <li><i class="fas fa-store"></i> Browse Products <span class="feature-tag">category</span></li>
        <li><i class="fas fa-search"></i> Search product</li>
        <li><i class="fas fa-cart-plus"></i> Add to Cart</li>
        <li><i class="fas fa-pen-to-square"></i> Update Cart (qty / remove)</li>
        <li><i class="fas fa-credit-card"></i> Checkout <span class="feature-tag">COD, Bkash, Nagad</span></li>
        <li><i class="fas fa-clock-rotate-left"></i> Order History</li>
        <li><i class="fas fa-star"></i> Give Feedback</li>
        <li><i class="fas fa-hospital"></i> About Pharmacy</li>
      </ul>
      <div class="portal-footer">
        <span class="btn-outline"><i class="fas fa-bag-shopping"></i> shop</span>
      </div>
    </div>

    <!-- ========== DELIVERYMAN PORTAL ========== -->
    <div class="portal-card">
      <div class="portal-header">
        <div class="icon-circle delivery"><i class="fas fa-truck-fast"></i></div>
        <h2>Deliveryman <small>on the road</small></h2>
      </div>
      <ul class="feature-list">
        <li><i class="fas fa-clipboard-list"></i> Assigned Orders <span class="feature-tag">view</span></li>
        <li><i class="fas fa-check-circle"></i> Update status <span class="feature-tag">DELIVERED</span></li>
        <li><i class="fas fa-right-from-bracket"></i> Logout</li>
      </ul>
      <div class="portal-footer">
        <span class="btn-outline"><i class="fas fa-route"></i> deliveries</span>
      </div>
    </div>
  </div>

  <!-- ========== DATA STORAGE ========== -->
  <div class="section-title"><i class="fas fa-database"></i> Data Storage · plain text files</div>
  <div class="data-section">
    <div class="data-grid">
      <div class="data-item"><i class="fas fa-capsules"></i> product.txt</div>
      <div class="data-item"><i class="fas fa-user"></i> customer.txt</div>
      <div class="data-item"><i class="fas fa-clipboard"></i> order.txt</div>
      <div class="data-item"><i class="fas fa-comment"></i> feedback.txt</div>
      <div class="data-item"><i class="fas fa-truck"></i> deliverymaninfo.txt</div>
      <div class="data-item"><i class="fas fa-info"></i> about.txt</div>
    </div>

    <!-- code-like demo -->
    <div class="code-block">
      <i class="fas fa-terminal"></i> 
      <span>product.txt</span> 
      <span>customer.txt</span> 
      <span>order.txt</span> 
      <span>feedback.txt</span> 
      <span>deliverymaninfo.txt</span> 
      <span>about.txt</span>
      <span style="background:#204a3a;"><i class="fas fa-check"></i> portable</span>
    </div>
  </div>

  <!-- Getting started + badges -->
  <hr />
  <div style="display:flex; flex-wrap:wrap; gap:2rem 3rem; background:white; border-radius:28px; padding:1.8rem 2rem; margin-top:1.5rem;">
    <div>
      <div style="font-weight:600; color:#1d4233; font-size:1.1rem; margin-bottom:0.6rem;"><i class="fas fa-rocket"></i> Getting started</div>
      <div style="background:#f0f7f3; padding:0.7rem 1.4rem; border-radius:60px; display:inline-block; font-family:monospace;">git clone https://github.com/DiptoChaklader/Group_Project.git</div>
      <div style="margin-top:12px; color:#2b5a48;"><i class="fas fa-code"></i> C compiler (GCC) · terminal</div>
    </div>
    <div>
      <div style="font-weight:600; color:#1d4233;"><i class="fas fa-crown"></i> ZenPharma features</div>
      <div style="display:flex; gap:10px; flex-wrap:wrap; margin-top:8px;">
        <span style="background:#e2ede7; padding:0.2rem 1.2rem; border-radius:40px; font-size:0.8rem;">🔐 admin</span>
        <span style="background:#e2ede7; padding:0.2rem 1.2rem; border-radius:40px; font-size:0.8rem;">🛒 customer</span>
        <span style="background:#e2ede7; padding:0.2rem 1.2rem; border-radius:40px; font-size:0.8rem;">🚚 delivery</span>
        <span style="background:#e2ede7; padding:0.2rem 1.2rem; border-radius:40px; font-size:0.8rem;">📦 orders</span>
        <span style="background:#e2ede7; padding:0.2rem 1.2rem; border-radius:40px; font-size:0.8rem;">💬 feedback</span>
      </div>
    </div>
  </div>

  <!-- footer -->
  <div class="footer-credit">
    <div><i class="fas fa-leaf"></i> ZenPharma · console-based pharmacy system</div>
    <div class="shields">
      <span><i class="fas fa-code"></i> C file handling</span>
      <span><i class="fas fa-users"></i> group project</span>
      <span><i class="fas fa-github"></i> DiptoChaklader</span>
    </div>
  </div>

  <!-- small design note -->
  <div style="margin-top:0.8rem; font-size:0.75rem; color:#4d7663; text-align:center; border-top:1px solid #d0e3da; padding-top:1.2rem; width:100%;">
    <i class="fas fa-paintbrush"></i> UI Design prototype — reflects ZenPharma portal &amp; feature set
  </div>

</div>
</body>
</html>
