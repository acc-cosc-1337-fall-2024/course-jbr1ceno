//bank_account.h
#include<iostream>
#include<stdlib.h> //access to rand() function

#ifndef BANK_ACCOUNT_H  //header guard
#define BANK_ACCOUNT_H

class BankAccount
{

public: //other regions of code, main, test, other function, another class can see the get_balance
    BankAccount(){std::cout<<"BankAccount Default constructor fired: \n";} //constructor with no parameters - default synthesized constructor ON QUIZ & EXAM
    BankAccount(int b) : balance(b) {std::cout<<"BankAccount Constructor with balance parameter fired: \n";}

    int get_balance(){std::cout<<"Bank get balance: "; return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private: //only BankAccount can read/write to the balance directly
    int balance{0}; //initializa the balance to zero on class creation
};

#endif