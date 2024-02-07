#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto result = false;
	auto ch = 'a';

	cout<<"Enter a letter: ";
	cin>>ch;

	result = is_vowel(ch);

	cout<<result<<"\n";

	return 0;
}
