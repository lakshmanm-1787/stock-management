
# stock-management
✅ Project Title

Stock Management System in C


---

✅ Project Abstract

The Stock Management System is a simple C-based application designed to manage inventory efficiently. The main goal of the project is to provide a basic computerized system that helps store, update, search, and display stock items.

The system allows the user to add new items with details such as item ID, name, quantity, and price. It also provides options to update stock levels when items are sold or added. Users can search for specific items and view the complete list of available stock.

This project demonstrates the use of structures, arrays, loops, conditional statements, and string functions in C programming. It is suitable for beginners and helps understand how real-life inventory systems work.


---

✅ Project Features

1. Add New Stock Item

User can add new items with ID, name, quantity, and price.

Items are stored using structures.


2. Update Stock Quantity

User can increase or decrease stock.

Prevents negative stock levels.

Useful for sales and new stock entries.


3. Display All Stock Items

Shows a formatted list of all items.

Displays ID, name, quantity, and price.


4. Search Item by Name

Searches the inventory by item name.

Displays complete details if found.


5. Menu-Driven Interface

Easy to use.

Repeats operations until the user exits the system.


6. Simple and Efficient

Uses basic C concepts.


📋 Functional Requirements
1. Input Handling
- The system must prompt the user to enter the number of items received.
- For each item, the system must collect:
- Item name (string)
- Quantity (integer)
- Unit price (float)
2. Data Storage
- The system must store item details in a structured format (struct Item) with fields:
- name
- quantity
- price
- total
3. Processing
- The system must calculate the total cost per item:
\mathrm{total}=\mathrm{quantity}\times \mathrm{unit\  price}- The system must maintain a grand total - by summing all item totals.
- The system must ensure that the number of items does not exceed the defined maximum (MAX_ITEMS = 50).
4. Output
- The system must display a title/header (“GOODS RECEIPT SYSTEM”).
- The system must print a formatted table with columns:
- Item Name
- Quantity
- Unit Price
- Total
- The system must display the grand total at the end of the receipt.
5. Termination
- After printing the receipt, the system must exit successfully.



Technical requirements:-

1. Programming Language & Compiler
- Written in C language.
- Requires a C compiler (e.g., GCC, Clang, or MSVC).
- Must support C standard libraries (stdio.h, string.h).
2. System Environment
- Runs on any operating system with a C compiler (Windows, Linux, macOS).
- Console/terminal access is required for user input and output.
3. Memory & Data Structures
- Uses a struct Item to store:
- name (string, max 50 characters)
- quantity (integer)
- price (float)
- total (float)
- Array items[MAX_ITEMS] with a maximum of 50 items.
- Memory allocation is static (no dynamic allocation used).
4. Input/Output Requirements
- Input via standard input (stdin) using scanf.
- Output via standard output (stdout) using printf.
- Requires formatted printing with alignment (%-20s, %-10d, etc.).
5. Functional Constraints
- Number of items (n) must be ≤ 50.
- Item names must be single words (due to scanf("%s", ...)).
- Quantities and prices must be valid numeric values.
- Floating-point arithmetic is used for price and totals.
6. Execution Flow
- Program starts with a title display.
- Prompts user for number of items.
- Loops through each item to collect details.
- Calculates totals and grand total.
- Prints a formatted receipt.
- Terminates with return 0.

How to run a program:-


1. Save the Code
• 	Copy your code into a text file.
• 	Save it with a  extension, for example:

goods_receipt.c

3. Open a Terminal / Command Prompt
• 	On Windows: open Command Prompt or PowerShell.
• 	On Linux/macOS: open Terminal.
4. Compile the Program
You need a C compiler (like GCC).
Run this command in the terminal:

gcc goods_receipt.c -o goods_receipt


• 	 → the compiler
• 	 → your source file
• 	 → creates an executable named 
If you don’t have GCC installed:
- On Windows, install MinGW or use WSL (Windows Subsystem for Linux).
- On Linux/macOS, GCC is usually preinstalled or can be installed via package manager.
4. Run the Program
After successful compilation, run:
- On Windows:
goods_receipt.exe
- On Linux/macOS:
./goods_receipt


5. Provide Input
The program will prompt you:
===== GOODS RECEIPT SYSTEM =====
Enter number of items received: 2

























WORKS FAST AND STORES ITEMS IN MEMORY.
<img width="527" height="516" alt="Screenshot 2025-11-27 131040" src="https://github.com/user-attachments/assets/03a59410-5229-431f-aaf5-8ce7278ca36f" />
