//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size); //constructor
    ~Vector();        //destructor
private:
    int size{0}; //keep track of the current index and the number of elements in the list
    int capacity; //the max number of elements the list can store
    int* elements; //list of elements in this vector
};

#endif