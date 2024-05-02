#include "arrays_dyn_1.h"

using std::cout;

void limit_dynamic_memory_scope(const int SIZE)
{
    int *nums = new int[SIZE];
    nums[0] = 5;

    cout<<nums[0]<<"\n";

    delete[] nums;
}