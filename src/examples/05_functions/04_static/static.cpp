#include "static.h"

using std::cout;

void use_non_static_variable()
{
    int num = 5; //creates variable
    num++;
    cout<<num<<"\n";
}

void use_static_variable()
{
    static int num = 5;
    num++;
    cout<<num<<"\n";
}

void use_static_variable_1()
{
    static int num = 5;
    num++;
    cout<<num<<"\n";
}