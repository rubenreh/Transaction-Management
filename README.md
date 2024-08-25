# Transaction Management and Financial Reporting System
First Year Computer Engineering Project

## Overview

**Mo' Money** is a C++ project designed to manage financial transactions and generate detailed reports. The system allows users to add deposits and withdrawals, track the balance over time, and produce a summary of all transactions. This project demonstrates the use of object-oriented programming principles, file I/O, and basic financial calculations.

## Features

- **Transaction Management**: Add and store transactions with details like type, amount, and date.
- **Balance Calculation**: Automatically updates the account balance based on the transactions.
- **Financial Report**: Generates a comprehensive report showing all transactions and the current balance.
- **Error Handling**: Ensures that only valid transactions are processed, with basic validation of input.

## Skills Required

To successfully understand and work on this project, you should be familiar with the following C++ concepts:

- **Pointers and Dynamic Memory Management** : Efficiently handling memory allocation, deallocation, and pointer usage.
- **Classes and Object-Oriented Programming** : Designing and implementing classes, encapsulation, and object management.
- **Simple Sorting Algorithms** : Implementing basic sorting techniques for organizing data.
- **Operator Overloading** : Customizing operators for class objects to perform specific tasks.
- **Linked Lists** : Using linked lists to manage dynamic collections of data.

## File Structure

- **`Transaction.h`**: Header file defining the `Transaction` class.
- **`Transaction.cpp`**: Implementation of the `Transaction` class methods.
- **`Account.h`**: Header file defining the `Account` class, which manages multiple transactions.
- **`Account.cpp`**: Implementation of the `Account` class methods.
- **`main.cpp`**: The entry point of the application, handling user input and managing the overall flow.
- **`transactions.txt`**: (Optional) Example input file containing a list of transactions to be processed by the program.

### Example Transaction File (`transactions.txt`)

```txt
deposit 500.00 2024-08-01
withdrawal 150.00 2024-08-05
deposit 200.00 2024-08-10
