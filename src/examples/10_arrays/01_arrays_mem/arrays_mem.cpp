//write code for for stack_array and display each element to screen
#include "arrays_mem.h"
using std::cout; using std::setw;
void use_stack_array()
{
    const auto SIZE = 3;
    int nums[SIZE] {5, 7, 0}; //stack array list
    for(int i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3;
    int nums[SIZE] {5, 7, 0}; //stack array list

    cout<<nums<<"\n";

    int* ptr = nums;
    cout<<*ptr<<"\n";

    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr--;
    cout<<ptr<<" "<<*ptr<<"\n";
}