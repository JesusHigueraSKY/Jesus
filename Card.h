#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

// Base class for cards. Contains shared attributes and methods for all cards.
class Card {
protected:
    string cardNumber;   // Unique identifier for the card
    string holderName;   // Name of the cardholder

public:
    Card(const string& cardNumber, const string& holderName);
    virtual ~Card() = default; // Virtual destructor to ensure proper cleanup in derived classes

    string getCardNumber() const;
    string getHolderName() const;

    // Pure virtual function to enforce implementation in derived classes
    virtual void displayDetails() const = 0;
};

#endif