//bank_account.cpp
#include "bank_account.h"

using std::cout; using std::cin;
//These functions are part of the BankAccount class
void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}









