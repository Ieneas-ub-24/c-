#include "Bank.h"

Bank::Bank(float initialBalance) {
setBalance(initialBalance);
}


void Bank::setBalance(float newBalance) {
if (newBalance < 0) {
balance = 0; 
} else {
balance = newBalance;
}
}

float Bank::getBalance() const {
return balance;
}