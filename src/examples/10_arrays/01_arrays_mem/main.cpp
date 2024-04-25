#include "arrays_mem.h"

int main() 
{
	const auto SIZE = 3;
    int nums[SIZE] {5, 7, 0}; //stack array list

	display_array(nums, SIZE);

	return 0;
}