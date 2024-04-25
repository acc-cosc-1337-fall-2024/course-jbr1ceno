//arrays_mem.h - stack array example
#include<iostream>
#include<iomanip>

const auto COLS = 10;
const auto ROWS = 10;

//function prototype for stack_array
void use_stack_array();
void arrays_and_pointers();
void display_array(int* nums, const int SIZE);
void populate_times_table(int times_table[][COLS], const int ROWS);
void display_times_table(int times_table[][COLS], const int ROWS);