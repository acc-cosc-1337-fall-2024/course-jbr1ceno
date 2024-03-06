#include "function_vec.h"

using std::vector;

void value_param(std::vector<int> nums)
{
    for(auto i = 0; i < nums.size(); i++)
    {
        nums[i] = -1;
    }
}

void ref_param(std::vector<int>& nums) //& means dealing with original variable in main
{
    for(auto i = 0; i < nums.size(); i++)
    {
        nums[i] = -1;
    }
}