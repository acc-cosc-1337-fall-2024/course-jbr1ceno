#include "ref_pointers.h"

//
void reference_parameter(int& num)
{
    num = 20;
}

void pointer_parameter(int* num)
{
    *num = 30; //with the asterisk *, it tells the program to change value
}