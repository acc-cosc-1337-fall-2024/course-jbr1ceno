//
#include "my_vector.h"

using std::cout;

int main()
{
    Vector v(3);
    v[0] = 5;

    cout<<"Size is: "<<v.Size()<<"\n";
    cout<<"Capacity is: "<<v.Capacity()<<"\n";
    cout<<v[0]<<"\n";
    return 0;
}

