#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sample1.h"
#include <iostream>


/*TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify function f of x works")
{
	REQUIRE(get_numeric_fx(2) == 0.5);
	REQUIRE(get_numeric_fx(4) == 0.25);
	REQUIRE(get_numeric_fx(8) == 0.125);
	REQUIRE(get_numeric_fx(3) == 1.0/3.0);
}

TEST_CASE("Verify function f' of x works, foward diff approx")
{
	REQUIRE(get_numeric_deriv_right(1.0, 0.5) == 2.0*((1.0/1.5)-1.0));
	REQUIRE(get_numeric_deriv_right(1.0, 0.1) == 10.0*((1.0/1.1)-1.0));
	REQUIRE(get_numeric_deriv_right(1.0, 0.01) == 100.0*((1.0/1.01)-1.0));
	REQUIRE(get_numeric_deriv_right(1.0, 0.001) == 1000.0*((1.0/1.001)-1.0));
	REQUIRE(get_numeric_deriv_right(1.0, 0.0001) == 10000.0*((1.0/1.0001)-1.0));
}

TEST_CASE("Verify function f' of x works, backward diff approx")
{
	REQUIRE(get_numeric_deriv_left(1.0, 0.5) == 2.0*(1.0-(1.0/0.5)));
	REQUIRE(get_numeric_deriv_left(1.0, 0.1) == 10.0*(1.0-(1.0/0.9)));
	REQUIRE(get_numeric_deriv_left(1.0, 0.01) == 100.0*(1.0-(1.0/0.99)));
	REQUIRE(get_numeric_deriv_left(1.0, 0.001) == 1000.0*(1.0-(1.0/0.999)));
	REQUIRE(get_numeric_deriv_left(1.0, 0.0001) == 10000.0*(1.0-(1.0/0.9999)));
}

TEST_CASE("Verify function f' of x works, center diff approx")
{
	REQUIRE(get_numeric_deriv_center(1.0, 0.5) == (1.0/1.5) - (1.0/0.5));
	REQUIRE(get_numeric_deriv_center(1.0, 0.1) == 5.0*((1.0/1.1)-(1.0/0.9)));
	REQUIRE(get_numeric_deriv_center(1.0, 0.01) == 50.0*((1.0/1.01)-(1.0/0.99)));
	REQUIRE(get_numeric_deriv_center(1.0, 0.001) == 500.0*((1.0/1.001)-(1.0/0.999)));
	REQUIRE(get_numeric_deriv_center(1.0, 0.0001) == 5000.0*((1.0/1.0001)-(1.0/0.9999)));
	REQUIRE(get_numeric_deriv_center(1.0, 0.00000000000001) == -1.0);
}*/