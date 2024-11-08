#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
using namespace std;


class Transaction {
    private:
        string type; // "buy" or "payment"
        double amount; 

    public: 
        Transaction(string type, double amount);
        string getType();
        double getAmount();
};

#endif
