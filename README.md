# Hotel Management System

A simple console-based Hotel Management System developed in **C++**. This application handles room bookings and food orders, tracks inventory in real-time, and calculates daily sales and collections.

## 🚀 Features

* **Inventory Management**: Initialize quantities for rooms and various food items (Pasta, Burger, Noodles, Shake, Chicken) at the start of the application.
* **Room Booking**: Allocates rooms to guests and tracks availability.
* **Food Ordering**: Process orders for multiple food items, ensuring orders do not exceed available stock.
* **Sales Reporting**:
    * View detailed statistics for each item: Total Quantity, Quantity Sold, Remaining Quantity, and Total Collection.
    * Calculate the grand total revenue generated from all sales.

## 📋 Menu Options

The system provides the following interactive menu options:

1.  **Rooms**: Book rooms (Price: 1200 per room).
2.  **Pasta**: Order Pasta (Price: 250 per plate).
3.  **Burger**: Order Burgers (Price: 250 per piece).
4.  **Noodles**: Order Noodles (Price: 250 per plate).
5.  **Shake**: Order Shakes (Price: 250 per glass).
6.  **Chicken**: Order Chicken (Price: 250 per serving).
7.  **Information regarding sales and collection**: Displays a comprehensive report of inventory and earnings for the day.
8.  **Total Expense**: Calculates and displays the total sales revenue (labeled as Expense in the output).
9.  **Exit**: Closes the application.

## ⚙️ How to Run

1.  **Compile the Code**: Use a C++ compiler (like g++) to compile the source file.
    ```bash
    g++ management.cpp -o management
    ```
2.  **Run the Executable**:
    * **Windows**: `management.exe`
    * **Linux/Mac**: `./management`
3.  **Initialize Data**: Upon running, you will be prompted to enter the initial quantity for rooms and food items.
4.  **Select Options**: Use the number keys (1-9) to navigate the menu.

## 🛠️ Tech Stack

* **Language**: C++
* **Concepts Used**:
    * Input/Output Streams (`iostream`)
    * Control Structures (`switch`, `if-else`)
    * Labels and Goto statements (`goto`)

## 📜 License

This project is open-source and free to use for educational purposes.
