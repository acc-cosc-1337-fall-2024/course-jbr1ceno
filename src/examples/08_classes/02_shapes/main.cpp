//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape* s; //pointer to a Shape type that includes Circle and Line

	Circle c; //stack variable (created in the stack)
	s = &c;
	s->draw();

	Line l;	//stack variable (created in the stack)
	s = &l;
	s->draw();

	return 0;
}