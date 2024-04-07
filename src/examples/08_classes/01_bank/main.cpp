#include "atm.h"
#include "bank_DB.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<memory>
#include<time.h>
#include<vector>

using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{	
	srand(time(NULL));
	
	//Inheritance + pointer + virtual function = Polymorphism. BankAccount will behave as SavingsAccount  at runtime.
	vector<unique_ptr<BankAccount>> accounts; //list of pointers of BankAccount types

	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<accounts[0]->get_balance()<<"\n";	//checking 
	cout<<accounts[1]->get_balance()<<"\n";	//savings

	return 0;
}