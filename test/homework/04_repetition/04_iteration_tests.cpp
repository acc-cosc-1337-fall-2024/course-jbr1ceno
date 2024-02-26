#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Get factorial")
{
	REQUIRE(get_factorial(3) == 6);
	REQUIRE(get_factorial(5) == 120);
	REQUIRE(get_factorial(6) == 720);
}

TEST_CASE("Get greatest common divisor")
{
	REQUIRE(get_gcd(5, 15) == 5);
	REQUIRE(get_gcd(21, 28) == 7);
	REQUIRE(get_gcd(25, 100) == 25);
}