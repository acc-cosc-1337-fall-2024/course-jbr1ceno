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
	Shape s;
	s.draw();

	Circle c;
	c.draw();

	Line l;
	l.draw();

	return 0;
}