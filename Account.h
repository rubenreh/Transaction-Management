#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Transaction.h"

class Account {
public:
    // Constructor to initialize an account with a given balance
    Account(double initial_balance = 0.0);

    // Function to add a transaction to the account
    void addTransaction(const Transaction& transaction);

    // Function to calculate the current balance
    double calculateBalance() const;

    // Function to print all transactions
    void printTransactions() const;

    // Function to generate a financial report
    void generateReport() const;

private:
    double balance; // Current balance
    std::vector<Transaction> transactions; // List of transactions

    // Function to validate the transaction
    bool validateTransaction(const Transaction& transaction) const;
};

#endif // ACCOUNT_H
