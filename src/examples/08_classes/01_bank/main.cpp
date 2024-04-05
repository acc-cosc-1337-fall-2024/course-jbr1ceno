#include "atm.h"
#include "bank_DB.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<time.h>

using std::cout;

int main()
{
	srand(time(NULL));
	BankAccount account; //parent class
	cout<<account.get_balance()<<"\n";

	SavingsAccount savings;
	cout<<savings.get_balance()<<"\n";

	return 0;
}