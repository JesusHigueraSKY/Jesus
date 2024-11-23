#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "Card.h"

class DebitCard : public Card {
private:
    double balance; // Funds available for purchases

public:
    DebitCard(const string& cardNumber, const string& holderName, double balance);

    // Attempts to make a purchase. Returns true if successful.
    bool makePurchase(double amount);

    // Displays debit card details, overriding the base class method
    void displayDetails() const override;
};

#endif