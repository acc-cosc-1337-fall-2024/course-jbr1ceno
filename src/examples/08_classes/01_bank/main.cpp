#include "atm.h"
#include "bank_DB.h"
#include "bank_account.h"
#include<iostream>
#include<time.h>

using std::cout;

int main()
{
	srand(time(NULL));
	//assume some other class retrieved the balance from the database
	BankDB bankDB;

	BankAccount account(bankDB.retrieve_balance()); //create a variable/object

	ATM atm(account);
	run_menu(atm);

	cout<<account.get_balance()<<"\n";

	return 0;
}