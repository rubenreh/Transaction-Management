#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>
#include <iomanip>

class Transaction {
public:
    // Constructor to initialize a transaction with type, amount, and date
    Transaction(const std::string& type, double amount, const std::string& date);

    // Getter functions
    std::string getType() const;
    double getAmount() const;
    std::string getDate() const;

    // Overload the stream insertion operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Transaction& transaction);

private:
    std::string type; // Type of transaction (e.g., "deposit", "withdrawal")
    double amount;    // Amount of the transaction
    std::string date; // Date of the transaction in the format "YYYY-MM-DD"
};

#endif // TRANSACTION_H
