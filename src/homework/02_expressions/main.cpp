//write include statements
#include "hwexpressions.h"
#include <iostream>
#include <cmath> //using cmath to round the amounts to two decimal points

//write namespace using statement for cout
using std::cin; using std::cout;


int main()
{
	//testing rounding to two decimal points
	/*double num = 3.647;

	double roundnum = round(num*100) / 100;

	cout<<" The number "<<num<<" rounded to two decimal points is: "<<roundnum;*/

	double meal_amount= 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;

	cout<<"Enter a meal amount: $";
	cin>>meal_amount;
	
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter tip rate (no percent symbol): ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	double total_cost = meal_amount + tip_amount + tax_amount;

	cout<<"\n"<<"RESTAURANT BILL"<<"\n";
	cout<<"\n"<<"Meal Amount: $"<<meal_amount<<"\n"<<"Sales Tax: $"<<round(tax_amount*100) / 100
	<<"\n"<<"Tip Amount: $"<<round(tip_amount*100) / 100<<"\n"<<"Total: $"<<round(total_cost*100) / 100<<"\n";

	return 0;
}
