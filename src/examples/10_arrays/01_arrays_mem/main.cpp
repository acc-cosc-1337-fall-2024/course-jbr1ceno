#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//arrays_and_pointers();
	//const auto SIZE = 3; 			//const means READ ONLY, SIZE IS READ ONLY, can't modify
    //int nums[SIZE] = {5, 7, 0}; 	//stack array list

	//display_array(nums, SIZE);
	
	int times_table[ROWS][COLS];	//create empty array

	populate_times_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	return 0;

}