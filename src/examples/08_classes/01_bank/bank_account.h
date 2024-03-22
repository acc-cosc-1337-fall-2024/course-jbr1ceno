//bank_account.h
#include<iostream>

class BankAccount
{

public: //other regions of code, main, test, other function, another class can see the get_balance
    BankAccount(){} //constructor with no parameters - default synthesized constructor ON QUIZ & EXAM
    BankAccount(int b) : balance(b) {/*empty class function/method block */}

    int get_balance(){return balance;}
    void deposit(int amount);

private: //only BankAccount can read/write to the balance directly
    int balance{0}; //initializa the balance to zero on class creation
};

void display_menu();
void run_menu(BankAccount& account);
void handle_menu(int choice, BankAccount& account);