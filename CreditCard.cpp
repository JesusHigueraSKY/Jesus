#include "CreditCard.h"
#include <iostream>
using namespace std;

CreditCard::CreditCard(const string& cardNumber, const string& holderName, double balance, double creditLimit)
    : Card(cardNumber, holderName), balance(balance), creditLimit(creditLimit) {}

bool CreditCard::makePurchase(double amount) {
    if (amount <= balance + creditLimit) {
        // Deduct from balance first, then from credit limit if necessary
        if (amount > balance) {
            creditLimit = creditLimit - (amount - balance);
            balance = 0;
        } else {
            balance = balance - amount;
        }
        cout << "Credit Card purchase of $" << amount << " approved.\n";
        return true;
    }
    cout << "Credit Card purchase of $" << amount << " declined. Insufficient funds.\n";
    return false;
}

void CreditCard::displayDetails() const {
    cout << "Credit Card [" << cardNumber << "] - " << holderName << endl;
    cout << "Balance: $" << balance << ", Credit Limit: $" << creditLimit << endl;
}