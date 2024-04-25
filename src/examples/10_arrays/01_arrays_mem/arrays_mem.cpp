//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout; using std::setw; //setw works with cout

void use_stack_array()
{
    const auto SIZE = 3; //const means READ ONLY, SIZE IS READ ONLY, can't modify
    int nums[SIZE] = {5, 7, 0}; //stack array list

    for(int i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3; //const means READ ONLY, SIZE IS READ ONLY, can't modify
    int nums[SIZE] = {5, 7, 0}; //stack array list

    //proof variable is a pointer
    cout<<nums<<"\n";

    int* ptr = nums; //creates a pointer that points to an existing pointer
    cout<<*ptr<<"\n";

    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr++;
    cout<<ptr<<" "<<*ptr<<"\n";

    *ptr--;
    cout<<ptr<<" "<<*ptr<<"\n";
}

void display_array(int* nums, const int SIZE)
{
    for(int i=0; i < SIZE; i++)
    {
        cout<<nums[i]<<"\n";
    }
}

void populate_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i = 0; i < ROWS; i++)
    {
        for(auto j = 0; j < COLS; j++)
        {
            times_table[i][j] = (i + 1) * (j + 1);  //get values into each elements
        }
    }   
}

void display_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i = 0; i < ROWS; i++)
    {
        for(auto j = 0; j < COLS; j++)
        {
            cout<<setw(5)<<times_table[i][j]; //i is the row, j is the column
        }

        cout<<"\n";
    }
}