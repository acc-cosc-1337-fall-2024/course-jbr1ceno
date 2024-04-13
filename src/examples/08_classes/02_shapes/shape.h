//shape.h
#include<iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape //an abstract class has one pure virtual function
{
public:
    virtual void draw() = 0; //make this a pure virtual function
};

#endif