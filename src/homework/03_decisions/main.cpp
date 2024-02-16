//write include statements
#include<iostream>
#include "decisions.h"

using std::string; using std::cout; using std::cin;

int main() 
{
	auto option = 0;
	string result = "";
	
	cout<<"-----MENU-----\n";
	cout<<"1 - Letter grade using if\n2 - Letter grade using switch\n3 - Exit\n";
	cout<<"Enter option: ";
	cin>>option;

	result = menu(option);

	cout<<result<<"\n";

	return 0;
}