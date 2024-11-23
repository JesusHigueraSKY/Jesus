#include <iostream>
#include "User.h"
#include "CreditCard.h"
#include "DebitCard.h"
using namespace std;

int main() {
    User user("Jesús Higuera");

    // Create and add a Credit Card
    CreditCard* creditCard = new CreditCard("1234-5678-9101-1121", "Jesús Higuera", 500.0, 1000.0);
    user.addCard(creditCard);

    // Create and add a Debit Card
    DebitCard* debitCard = new DebitCard("4321-8765-1098-7654", "Jesús Higuera", 300.0);
    user.addCard(debitCard);

    // Display user and card information
    user.displayInfo();

    // Simulate purchases
    cout << "\nMaking purchases...\n";
    user.makePurchase(0, 200.0); // Use the credit card
    user.makePurchase(1, 50.0);  // Use the debit card
    user.makePurchase(0, 1500.0); // Exceed credit limit

    // Display updated card information
    cout << "\nUpdated card details:\n";
    user.displayInfo();

    return 0;
}