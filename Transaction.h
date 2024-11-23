#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

// Represents a transaction with its type and amount
class Transaction {
private:
    string type;    // Type of transaction (e.g., "purchase")
    double amount;  // Amount involved in the transaction

public:
    Transaction(const string& type, double amount);

    string getType() const;
    double getAmount() const;
};

#endif