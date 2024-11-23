#include "User.h"
#include <iostream>
using namespace std;

User::User(const string& name) : name(name) {}

User::~User() {
    // Free dynamically allocated card objects
    for (Card* card : cards) {
        delete card;
    }
}

void User::addCard(Card* card) {
    cards.push_back(card);
}

void User::displayInfo() const {
    cout << "User: " << name << endl;
    for (size_t i = 0; i < cards.size(); ++i) {
        cout << "Card " << i + 1 << ": ";
        cards[i]->displayDetails();
    }
}

void User::makePurchase(int cardIndex, double amount) {
    if (cardIndex < 0 || cardIndex >= cards.size()) {
        cout << "Invalid card index.\n";
        return;
    }

    // Attempt to use the selected card for the purchase
    if (auto* creditCard = dynamic_cast<CreditCard*>(cards[cardIndex])) {
        creditCard->makePurchase(amount);
    } else if (auto* debitCard = dynamic_cast<DebitCard*>(cards[cardIndex])) {
        debitCard->makePurchase(amount);
    } else {
        cout << "Unknown card type.\n";
    }
}