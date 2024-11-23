#include "Card.h"

Card::Card(const string& cardNumber, const string& holderName)
    : cardNumber(cardNumber), holderName(holderName) {}

string Card::getCardNumber() const {
    return cardNumber;
}

string Card::getHolderName() const {
    return holderName;
}