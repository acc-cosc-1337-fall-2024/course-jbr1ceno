#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{7, 2, 9};

    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";

    nums.push_back(5);

    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";

    return 0;
}