#include "atm.h"
#include "bank_DB.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<time.h>
#include<vector>

using std::cout; using std::vector;

int main()
{
	//Inheritance + pointer + virtual function = Polymorphism. BankAccount will behave as SavingsAccount  at runtime.
	BankAccount* account_ptr; //you can declare pointer and not point to anything
	SavingsAccount savings;
	account_ptr = &savings;

	cout<<account_ptr->get_balance()<<"\n";

	return 0;
}