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

TEST_CASE("Verify the boolean logic order of precedence")
{
	REQUIRE((!true && true || true) == true);
	REQUIRE((true || true && !true) == true);
}

TEST_CASE("Verify the is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(999) == false);
	REQUIRE(is_even(1002) == true);
}

TEST_CASE("Verify the is odd function")
{
	REQUIRE(is_odd(2) == false);
	REQUIRE(is_odd(3) == true);
	REQUIRE(is_odd(999) == true);
	REQUIRE(is_odd(1002) == false);
}

TEST_CASE("Verify is vowel function")
{
	REQUIRE(is_vowel('a') == true);
	REQUIRE(is_vowel('e') == true);
	REQUIRE(is_vowel('i') == true);
	REQUIRE(is_vowel('o') == true);
	REQUIRE(is_vowel('u') == true);

	REQUIRE(is_vowel('b') == false);
	REQUIRE(is_vowel('m') == false);
}