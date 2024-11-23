#include "Transaction.h"

Transaction::Transaction(const string& type, double amount) : type(type), amount(amount) {}

string Transaction::getType() const {
    return type;
}

double Transaction::getAmount() const {
    return amount;
}