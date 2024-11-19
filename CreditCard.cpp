#include "classcreditcard.h"
#include <iostream>
using namespace std;

CreditCard::CreditCard(double_limit){
    creditLimit = _limit
    balance = 0
}

bool CreditCard::makePurchase(double amount) {
    if (balance + amount > creditLimit) return false;
        balance = balance + amount;
        transactionHistory.emplace_back("Purchase", amount);
    return true;
}

void CreditCard::makePayment(double amount) {
    balance = balance - amount;
    if (balance < 0) balance = 0;
    transactionHistory.emplace_back("Payment", amount);
}

void CreditCard::showTransactionHistory(){
    for (auto_transaction : transactionHistory) {
        cout << transaction.getType() << ": $" << transaction.getAmount() << "\n";
    }
}

double CreditCard::getBalance(){
    return balance;
}

double CreditCard::getCreditLimit(){
    return creditLimit;
}