#include <iostream>
#include <fstream>
#include "Account.h"
#include "Transaction.h"

// Function to read transactions from a file and add them to the account
void readTransactionsFromFile(const std::string& filename, Account& account) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::string type, date;
    double amount;
    while (file >> type >> amount >> date) {
        Transaction transaction(type, amount, date);
        account.addTransaction(transaction);
    }
}

int main() {
    Account myAccount(1000.0); // Create an account with an initial balance of $1000

    // Read transactions from a file (replace "transactions.txt" with your actual file name)
    readTransactionsFromFile("transactions.txt", myAccount);

    // Generate and display the financial report
    myAccount.generateReport();

    return 0;
}
