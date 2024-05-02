#include "arrays_dyn_1.h"

using std::cout; using std::shared_ptr;

void limit_dynamic_memory_scope(const int SIZE)
{
    int *nums = new int[SIZE]; //how to make dynamic memory, need a pointer, need keyword "new", and is always a list/array
    nums[0] = 5;

    cout<<nums[0]<<"\n";

    delete[] nums;
}

int* get_dynamic_memory(const int SIZE)
{
    int* nums = new int[SIZE];                  //point to a location on the heap
    cout<<"Memory allocation: \n"<<nums<<"\n";
    return nums;                                //give me address you are pointing to
}

void delete_dynamic_memory(int* nums)
{
    cout<<"Deleting memory allocation: "<<nums<<"\n";
    delete[] nums;                          //open close [] required since we are working with a dynamic list/array
}

void use_dynamic_memory(const int size)
{
    //allocate memory
    shared_ptr<int[]> nums(get_dynamic_memory(size), delete_dynamic_memory);
    nums[0] = 5;
    cout<<nums[0]<<"\n";

    cout<<"Exiting the use dynamic memory function\n";
}