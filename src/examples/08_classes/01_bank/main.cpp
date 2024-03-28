#include "atm.h"
#include "bank_account.h"
#include<iostream>
#include<time.h>

using std::cout;

int main()
{
	srand(time(NULL));
	//assume some other class retrieved the balance from the database

	BankAccount account; //create a variable/object
	cout<<account.get_balance()<<"\n";

	BankAccount account2; //create a variable/object
	cout<<account2.get_balance()<<"\n";

	return 0;
}