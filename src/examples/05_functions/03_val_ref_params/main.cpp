#include <iostream>

using std::cout;

int main()
{
    int num = 5;
    int& num_ref = num; //reference variable-reference the address of another variable
    int num1 = 10;
    int& num1_ref = num1;

    cout<<"Memory address of num: "<<&num_ref<<"\n";
    cout<<"Memory address of num1: "<<&num1_ref<<"\n\n";

    cout<<"Show me the value of the variable num that you reference: "<<num_ref<<"\n";
    num_ref = 10;
    cout<<"Show me the value of the variable num that you reference: "<<num_ref<<"\n";

    return 0;
}