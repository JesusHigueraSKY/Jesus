#ifndef INTERESTMANAGER_H
#define INTERESTMANAGER_H

#include "classcreditcard.h"

class InterestManager {
private:
    double annualRate;
    double lateFee;
    double overLimitFee;

public:
    InterestManager(double rate, double lateFee, double overLimitFee);
    void applyMonthlyInterest(CreditCard_card);
    void applyLateFee(CreditCard_card);
    void applyOverLimitFee(CreditCard_card);
};

#endif 