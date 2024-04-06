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
	srand(time(NULL));
	
	//Inheritance + pointer + virtual function = Polymorphism. BankAccount will behave as SavingsAccount  at runtime.
	vector<BankAccount*> accounts; //list of pointers of BankAccount types

	CheckingAccount checking;	//0 balance
	SavingsAccount savings;		//0 balance

	accounts.push_back(&checking);
	accounts.push_back(&savings);

	cout<<accounts[0]->get_balance()<<"\n";	//checking 
	cout<<accounts[1]->get_balance()<<"\n";	//savings

	return 0;
}