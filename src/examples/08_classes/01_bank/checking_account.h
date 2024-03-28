//checking_account.h
#include "bank_account.h"


#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(){/*empty code block*/}
    CheckingAccount(int b) : BankAccount(b) {/*empty code block*/}

private:
};

#endif