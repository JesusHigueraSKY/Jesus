#include "classsimulator.h"
#include <iostream>
using namespace std;

Simulator::Simulator(User _user, CreditCard _card, InterestManager _manager){
        user = _user
        creditCard = _card
        interestManager = _manager
    }

void Simulator::simulatePurchase(double amount){
    if (creditCard.makePurchase(amount)) {
        cout << "Purchase of $" << amount << " approved.\n";
    } else {
        cout << "Purchase denied: Limit exceeded.\n";
    }
}

void Simulator::simulatePayment(double amount){
    creditCard.makePayment(amount);
    cout << "Payment of $" << amount << " processed.\n";
}

void Simulator::applyInterest(){
    interestManager.applyMonthlyInterest(creditCard);
    cout << "Monthly interest applied.\n";
}

void Simulator::applyLateFee(){
    interestManager.applyLateFee(creditCard);
    cout << "Late fee applied.\n";
}

void Simulator::applyOverLimitFee(){
    interestManager.applyOverLimitFee(creditCard);
    cout << "Overlimit fee applied.\n";
}

void Simulator::displayTransactionHistory(){
    creditCard.showTransactionHistory();
}
