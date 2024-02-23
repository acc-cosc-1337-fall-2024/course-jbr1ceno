#include "val_ref.h"

void value_params(int num)
{
    num = 20;
}

void reference_params(int& num)
{
    num = 10;
}

void const_reference_param(const int& num)
{
    //num = 90; statement shows that we can protect variable data by using const which means read only
}