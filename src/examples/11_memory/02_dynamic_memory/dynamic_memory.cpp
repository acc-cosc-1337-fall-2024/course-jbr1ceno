#include "dynamic_memory.h"

//
using std::unique_ptr; using std::make_unique;

void use_unique_ptr()
{
    unique_ptr<int> num = make_unique<int>(5);
	std::cout<<*num<<"\n";
}
