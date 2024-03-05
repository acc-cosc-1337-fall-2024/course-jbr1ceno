#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums {7, 2, 9}; //create and initialize a vector
    cout<<nums[1]<<"\n";

    for(auto i = 0; i < nums.size(); i++) //iterate a vector with for loop
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"\n";

    for(auto num: nums) //iterate a vector with for range
    {
        cout<<num<<"\n";
    }

    return 0;
}