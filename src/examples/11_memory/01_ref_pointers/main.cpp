#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5;
	int& num1_ref = num1;

	cout<<num1_ref<<"\n";
	num1_ref = 10;

	cout<<num1_ref<<"\n";

	cout<<num1<<"\n";

	int num2 = 5; //create variable num2
	int* num2_ptr = &num2; //&num2 tell the pointer to give me the memory address of num2 and save it to the num2_ptr (pointer)
	cout<<*num2_ptr<<"\n";

	*num2_ptr = 10; // with *num2_ptr; whatever you're pointing to, I want to work with/change that value
	cout<<*num2_ptr<<"\n";
	cout<<num2<<"\n";
	
	return 0;
}