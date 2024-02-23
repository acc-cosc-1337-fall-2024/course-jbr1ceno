#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value parameter") //copy parameter
{
	int num = 5; //function local variable
	value_params(num);

	REQUIRE(num == 5);
}
