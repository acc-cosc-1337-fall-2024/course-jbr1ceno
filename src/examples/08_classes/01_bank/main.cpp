#include "atm.h"
#include "customer.h"

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
	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Mary Hancock"));
	customers.push_back(Customer(5, "Bjarne Stroustrup"));

	ATM atm(customers);

	run_menu(atm);

	return 0;
}