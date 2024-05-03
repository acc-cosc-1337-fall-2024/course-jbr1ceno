#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
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

TEST_CASE("Test vector initial size")
{
	Vector v(3);

	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test vector capacity value")
{
	Vector v(3);

	REQUIRE(v.Capacity() == 3);
}*/

TEST_CASE("Test my vector creation from existing vector")
{
	Vector v1(3);
	v1[0] = 5;

	Vector v2 = v1;	//user-defined class
	v2[0] = 10;

	REQUIRE(v1[0] == 5);
}