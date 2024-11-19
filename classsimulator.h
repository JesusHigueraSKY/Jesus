#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "classuser.h"
#include "classcreditcard.h"
#include "classinterestmanager.h"

class Simulator {
private:
    User user;
    CreditCard creditCard;
    InterestManager interestManager;

public:
    Simulator(User _user, CreditCard _card, InterestManager _manager);
    void simulatePurchase(double amount);
    void simulatePayment(double amount);
    void applyInterest();
    void applyLateFee();
    void applyOverLimitFee();
    void displayTransactionHistory();
};

#endif