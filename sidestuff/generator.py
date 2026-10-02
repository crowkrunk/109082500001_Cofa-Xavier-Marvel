import csv
import random
import string
from datetime import datetime, timedelta

# --- Configuration ---
NUM_MASTERS = 3000
NUM_TRANSACTIONS = 5000

# --- Helper Functions ---
def random_string(length=8):
    return ''.join(random.choices(string.ascii_letters, k=length))

def random_date(start_year=2023, end_year=2025):
    start_date = datetime(start_year, 1, 1)
    end_date = datetime(end_year, 12, 31)
    delta = end_date - start_date
    random_days = random.randint(0, delta.days)
    return (start_date + timedelta(days=random_days)).strftime("%Y-%m-%d")

# --- Generate Master Products (3,000 records) ---
categories = ["Electronics", "Clothing", "Home", "Books", "Toys", "Sports", "Food", "Beauty"]
with open('master_products.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['product_id', 'product_name', 'category', 'price'])
    for i in range(1, NUM_MASTERS + 1):
        name = f"Product_{random_string(6)}"
        cat = random.choice(categories)
        price = round(random.uniform(5.00, 500.00), 2)
        writer.writerow([i, name, cat, price])

print(f"Generated master_products.csv with {NUM_MASTERS} records")

# --- Generate Master Customers (3,000 records) ---
cities = ["New York", "London", "Tokyo", "Paris", "Berlin", "Sydney", "Toronto", "Mumbai"]
with open('master_customers.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['customer_id', 'customer_name', 'email', 'city'])
    for i in range(1, NUM_MASTERS + 1):
        name = f"Customer_{random_string(6)}"
        email = f"{name.lower().replace('_', '')}@example.com"
        city = random.choice(cities)
        writer.writerow([i, name, email, city])

print(f"Generated master_customers.csv with {NUM_MASTERS} records")

# --- Generate Transactions (5,000 records) ---
with open('transactions.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['transaction_id', 'customer_id', 'product_id', 'quantity', 'transaction_date'])
    for i in range(1, NUM_TRANSACTIONS + 1):
        # Randomly link to existing IDs (1 to 3000)
        cust_id = random.randint(1, NUM_MASTERS)
        prod_id = random.randint(1, NUM_MASTERS)
        qty = random.randint(1, 10)
        date = random_date()
        writer.writerow([i, cust_id, prod_id, qty, date])

print(f"Generated transactions.csv with {NUM_TRANSACTIONS} records")