//checking_account.h
#include "bank_account.h"


#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(){std::cout<<"CheckingAccount Default constructor fired: \n";}
    CheckingAccount(int b) : BankAccount(b) {std::cout<<"CheckingAccount Constructor with balance parameter fired: \n";}
    int get_balance(){std::cout<<"Checking get balance: "; return balance;} //can access balance directly now bc balance is moved to protected

private:
};

#endif