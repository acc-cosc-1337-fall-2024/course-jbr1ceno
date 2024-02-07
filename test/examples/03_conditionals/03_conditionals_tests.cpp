#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the AND truth table")
{
	REQUIRE(get_and_result(true, true) == true);
	REQUIRE(get_and_result(true, false) == false);
	REQUIRE(get_and_result(false, true) == false);
	REQUIRE(get_and_result(false, false) == false);
}

TEST_CASE("Verify the OR truth table")
{
	REQUIRE(get_or_result(true, true) == true);
	REQUIRE(get_or_result(true, false) == true);
	REQUIRE(get_or_result(false, true) == true);
	REQUIRE(get_or_result(false, false) == false);
}

TEST_CASE("Verify the NOT truth table")
{
	REQUIRE(get_not_result(true) == false);
	REQUIRE(get_not_result(false) == true);
}