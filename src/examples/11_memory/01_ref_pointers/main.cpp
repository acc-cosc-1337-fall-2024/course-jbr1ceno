#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5, num2 = 10;
	int* num_ptr; //don't have to point to anything
	num_ptr = &num1; //no asterisk *, meaning not gonna work with value but gonna work with address
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n"; 	//num_ptr saving address of num1 to its memory block
	cout<<"Value of the variable num_ptr points to: "<<*num_ptr<<"\n";	//with asterisk * work with values, *num_ptr gors to memory block

	num_ptr = &num2;
	cout<<*num_ptr<<"\n"; //with asterisk * work with values

	
	return 0;
}