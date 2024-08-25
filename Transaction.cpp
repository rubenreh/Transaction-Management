//Author : Ruben Rehal
//Date : December 5, 2023

#include "Transaction.h"

// Constructor implementation
Transaction::Transaction(const std::string& type, double amount, const std::string& date)
    : type(type), amount(amount), date(date) {
    // You might want to add validation here for the type, amount, and date
}

// Getter function implementations
std::string Transaction::getType() const {
    return type;
}

double Transaction::getAmount() const {
    return amount;
}

std::string Transaction::getDate() const {
    return date;
}

// Overload the stream insertion operator for easy output
std::ostream& operator<<(std::ostream& os, const Transaction& transaction) {
    os << std::setw(10) << transaction.type << " | "
       << std::setw(10) << std::fixed << std::setprecision(2) << transaction.amount << " | "
       << transaction.date;
    return os;
}
