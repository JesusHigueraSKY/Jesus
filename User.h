#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Card.h"
#include "CreditCard.h"
#include "DebitCard.h"
using namespace std;

// Represents a user with a collection of cards
class User {
private:
    string name;              // Name of the user
    vector<Card*> cards;      // Collection of card pointers

public:
    User(const string& name);
    ~User();                 // Destructor to clean up allocated memory

    void addCard(Card* card);  // Add a new card to the user's collection
    void displayInfo() const;  // Display information about the user and their cards
    void makePurchase(int cardIndex, double amount); // Attempt a purchase with a specific card
};

#endif