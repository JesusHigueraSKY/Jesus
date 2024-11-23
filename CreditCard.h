#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Card.h"

class CreditCard : public Card {
private:
    double balance;      // Available funds on the card
    double creditLimit;  // Maximum allowed credit for the card

public:
    CreditCard(const string& cardNumber, const string& holderName, double balance, double creditLimit);

    // Attempts to make a purchase. Returns true if successful, false otherwise.
    bool makePurchase(double amount);

    // Displays credit card details, overriding the base class method
    void displayDetails() const override;
};

#endif