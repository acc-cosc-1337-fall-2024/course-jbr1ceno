#include<iostream>
#include<string>
#include<vector>

using std::cout; using std::vector; using std::string;

int main()
{
    vector<int> nums {7, 2, 9}; //create and initialize a vector
    cout<<nums[1]<<"\n\n";

    vector<int> nums1;
    nums1.push_back(5);
    nums1.push_back(0);

    for(auto num: nums1)
    {
        cout<<num<<"\n";
    }

    cout<<"\n\n";

    vector<string> str{9, "X"};
    for(auto i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<"\n";
    }

    return 0;
}