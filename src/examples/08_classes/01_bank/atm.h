//atm.h
#include "bank_account.h"
#include "customer.h"
#include<iostream>
#include<vector>
#include<stdlib.h> //rand

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(std::vector<Customer>& c) : customers(c){/*represents empty code block*/}    //initialize account to the incoming account (b);
    void display_balance();
    void make_deposit();
    void make_withdraw();
    void scan_card();
private:
    std::vector<Customer>& customers;
    int customer_index;     //current customer from the customers vector at the ATM
    int account_index;      //current customer account in use (Checking/Savings)
};

#endif

void display_menu();
void run_menu(ATM& atm);
void handle_menu(int choice, ATM& atm);