The KFC Billing Console is a console-based application developed in C++ that simulates a customer billing system for a KFC store. The application provides a user-friendly interface to perform tasks such as user login, product selection, purchase calculation, discount application, and generating a customer receipt. The program also maintains a record of customer transactions by saving purchase data in a .txt file for future reference.

Key Features:
User Login System:

The system requires users to log in using a valid username and password. Multiple user accounts are supported, and access is granted only to those with correct credentials.
Product Catalog:

The system displays a list of available products offered at the KFC store, including items like Chicken Bucket, Fried Chicken, Burgers, Fries, and Soft Drinks, each with its corresponding price.
Product Selection and Quantity Input:

Customers can browse the product catalog and select items by specifying the product number. After selecting an item, they can enter the quantity they wish to purchase.
Bill Calculation:

The application calculates the total price based on the selected products and quantities. The price of each product is multiplied by the quantity, and the total cost is calculated.
Discounts:

The system applies a discount to the total purchase if the total amount exceeds a certain threshold (e.g., 10% off on orders over $50). The discount is automatically deducted from the final amount.
Receipt Generation:

After completing the purchase, a detailed receipt is displayed, showing each purchased item, its quantity, and the total price for that item. The final bill is also displayed with the discounted total amount.
Data Storage:

The system saves all customer purchase details, including the username, purchased products, quantities, and the final total, in a text file (customer_data.txt). This enables record-keeping for future reference.
Project Structure:
Login and Authentication:

A basic authentication system that validates user credentials (username and password) from a predefined list of users.
Product Management:

The products are stored in an array or vector and displayed dynamically for customers to choose from. Each product has a name and a price.
Transaction Logic:

The user selects products and enters quantities. The application calculates the total price, applies any applicable discounts, and displays a summary of the transaction.
File Handling:

After the transaction is complete, the system writes the customer's purchase details, including item names, quantities, and the total bill amount (with discounts applied), to a text file for record-keeping.
Technologies Used:
C++: The project is built using C++, utilizing core concepts such as data structures (arrays/vectors), file handling, conditionals, and loops.
Text File Handling: The customer transaction data is stored in a .txt file using file I/O operations (ofstream).
