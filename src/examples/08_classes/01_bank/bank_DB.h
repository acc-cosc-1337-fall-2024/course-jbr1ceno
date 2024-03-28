#include<stdlib.h> //access to rand() function

#ifndef BANK_DB_H
#define BANK_DB_H

class BankDB
{
public:
    BankDB(){get_balance_from_db();}
    int retrieve_balance(){return balance;};

private:
    int balance{0};
    void get_balance_from_db();
};

#endif