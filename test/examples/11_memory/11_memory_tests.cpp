#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference parameter")
{
	int num = 5;
	reference_parameter(num);

	REQUIRE(num == 20);
}

TEST_CASE("Test pointer parameter")
{
	int num = 5;
	pointer_parameter(&num);

	REQUIRE(num == 30);
}