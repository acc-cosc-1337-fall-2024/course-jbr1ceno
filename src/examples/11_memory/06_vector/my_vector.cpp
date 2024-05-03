#include "my_vector.h"

using std::cout;
//
Vector::Vector(int s) : capacity(s), elements{new int[s]}
{
    cout<<"Memory allocated at: "<<elements<<"\n";

}

/*
    Copy Constructor
    1 - Copy size from v1 to v2
    2 - Copy capacity from v1 to v2
    3 - Create new memory for v2
    4 - Copy the values from v1 to v2 
*/
Vector::Vector(const Vector& v1)
: size{v1.size}, capacity{v1.capacity}, elements{new int[v1.size]}    //copy constructor
{
    cout<<"Memory allocated in Copy Constructor "<<elements<<"\n";    //without *, displays address, with *, displays value

    for(auto i = 0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

Vector::~Vector()
{
    cout<<"Deallocate memory at: "<<elements<<"\n";
    delete[] elements;
}
