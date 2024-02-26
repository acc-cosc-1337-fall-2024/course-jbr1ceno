#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "static.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value parameter") //copy parameter
{
	int num = 5; //function local variable
	value_params(num);

	REQUIRE(num == 5);
}

TEST_CASE("Test reference parameter")
{
	int num = 5; //local variable
	reference_params(num); //pass the address where num is stored

	REQUIRE(num == 10);
}

TEST_CASE("Test get gross pay with two parameters")
{
	REQUIRE(get_gross_pay(40, 20.0) == 800.0);
}

TEST_CASE("Test get gross pay w one parameter")
{
	REQUIRE(get_gross_pay(12000) == 1000.0);
}