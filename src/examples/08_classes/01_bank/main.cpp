#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	//assume some other class retrieved the balance from the database

	BankAccount account(500); //create a variable/object
	ATM atm(account);		//atm object uses account

	run_menu(atm);			//run atm menu

	//cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}