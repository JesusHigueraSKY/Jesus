#include "DebitCard.h"
#include <iostream>
using namespace std;

DebitCard::DebitCard(const string& cardNumber, const string& holderName, double balance)
    : Card(cardNumber, holderName), balance(balance) {}

bool DebitCard::makePurchase(double amount) {
    if (amount <= balance) {
        balance = balance - amount;
        cout << "Debit Card purchase of $" << amount << " approved.\n";
        return true;
    }
    cout << "Debit Card purchase of $" << amount << " declined. Insufficient funds.\n";
    return false;
}

void DebitCard::displayDetails() const {
    cout << "Debit Card [" << cardNumber << "] - " << holderName << endl;
    cout << "Balance: $" << balance << endl;
}