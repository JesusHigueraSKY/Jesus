#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <vector>
#include "classtransaction.h"
using namespace std; 

class CreditCard {
private:
    double creditLimit;
    double balance;
    vector<Transaction> transactionHistory;

public:
    CreditCard(double limit);
    bool makePurchase(double amount);
    void makePayment(double amount);
    void showTransactionHistory();
    double getBalance();
    double getCreditLimit();
};

#endif 