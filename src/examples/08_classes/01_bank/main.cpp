#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	//assume some other class retrieved the balance from the database

	BankAccount account(500); //create a variable/object

	run_menu(account);

	//cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}