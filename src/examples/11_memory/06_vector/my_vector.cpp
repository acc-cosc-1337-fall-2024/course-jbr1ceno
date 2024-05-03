#include "my_vector.h"

using std::cout;
//
Vector::Vector(int s) : capacity(s), elements{new int[s]}
{
    cout<<"Memory allocated at: "<<elements<<"\n";

}

Vector::~Vector()
{
    delete[] elements;
    cout<<"Deallocate memory at: "<<elements<<"\n";
}
