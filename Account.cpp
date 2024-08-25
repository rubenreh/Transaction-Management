//Author : Ruben Rehal
//Date : December 5, 2023

#include "Account.h"
#include <iostream>
#include <iomanip>

// Constructor implementation
Account::Account(double initial_balance)
    : balance(initial_balance) {}

// Add a transaction to the account
void Account::addTransaction(const Transaction& transaction) {
    if (validateTransaction(transaction)) {
        transactions.push_back(transaction);
        // Update the balance based on the transaction type
        if (transaction.getType() == "deposit") {
            balance += transaction.getAmount();
        } else if (transaction.getType() == "withdrawal") {
            balance -= transaction.getAmount();
        }
    } else {
        std::cerr << "Invalid transaction: " << transaction << std::endl;
    }
}

// Calculate the current balance
double Account::calculateBalance() const {
    return balance;
}

// Print all transactions
void Account::printTransactions() const {
    std::cout << "Type      | Amount     | Date" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    for (const auto& transaction : transactions) {
        std::cout << transaction << std::endl;
    }
}

// Generate a financial report
void Account::generateReport() const {
    std::cout << "Financial Report" << std::endl;
    std::cout << "================" << std::endl;
    printTransactions();
    std::cout << "----------------" << std::endl;
    std::cout << "Final Balance: $" << std::fixed << std::setprecision(2) << calculateBalance() << std::endl;
}

// Validate the transaction (basic validation for example purposes)
bool Account::validateTransaction(const Transaction& transaction) const {
    if (transaction.getType() != "deposit" && transaction.getType() != "withdrawal") {
        return false;
    }
    if (transaction.getAmount() < 0) {
        return false;
    }
    // Add more validation as necessary
    return true;
}
