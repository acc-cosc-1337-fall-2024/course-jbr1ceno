#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account constructor with one parameter")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test case deposit with a default constructor")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

}

TEST_CASE("Test case with constructor")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(100);
	REQUIRE(account.get_balance() == 600);

}