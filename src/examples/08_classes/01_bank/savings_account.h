//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount: public BankAccount
{
public:
    SavingsAccount(){/*empty code block*/};
    SavingsAccount(int b) : BankAccount(b) {/*empty code block*/}
    int get_balance(){return BankAccount::get_balance() + 5;}
};

#endif