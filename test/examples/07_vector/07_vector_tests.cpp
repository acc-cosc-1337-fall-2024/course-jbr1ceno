#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector value param")
{
	vector<int> nums{7, 2, 9};
	vector<int> expected{7, 2, 9};

	value_param(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("Test vector reference param")
{
	vector<int> nums{7, 2, 9};
	vector<int> expected{-1, -1, -1};

	ref_param(nums);

	REQUIRE(nums == expected);
}
