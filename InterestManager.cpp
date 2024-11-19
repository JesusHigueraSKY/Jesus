#include "interestmanager.h"

InterestManager::InterestManager(double_rate, double lateFee, double overLimitFee){
        annualRate = _rate
    }

void InterestManager::applyMonthlyInterest(CreditCard _card) {
    double monthlyRate = annualRate / 12.0 / 100.0;
    _card.makePurchase(_card.getBalance() * monthlyRate);
}

void InterestManager::applyLateFee(CreditCard _card) {
    _card.makePurchase(lateFee);
}

void InterestManager::applyOverLimitFee(CreditCard _card) {
    if (_card.getBalance() > _card.getCreditLimit()) {
        _card.makePurchase(overLimitFee);
    }
}