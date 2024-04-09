//customer.h
#include<memory>
#include<string>
#include<vector>

#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer(int id, std::string n); //cunstructor
    std::unique_ptr<BankAccount>& get_account(int index){return accounts[index];}

private:
    int customer_id;
    std::string name;
    std::vector<std::unique_ptr<BankAccount>> accounts; //list of unique_ptr bank accounts type

};

#endif