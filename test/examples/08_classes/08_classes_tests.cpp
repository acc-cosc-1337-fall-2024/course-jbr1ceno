#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get balance")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test savings account get balance")
{
	SavingsAccount account;
	REQUIRE(account.get_balance() == 5);
}

TEST_CASE("Test bank account constructor with one parameter")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test checking account with one constructor parameter")
{
	SavingsAccount account(500);
	REQUIRE(account.get_balance() == 505);
}

TEST_CASE("Test case deposit with a default constructor")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

}

TEST_CASE("Test case with constructor")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(100);
	REQUIRE(account.get_balance() == 600);

}

TEST_CASE("Test withdraw with default constructor")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(20);
	REQUIRE(account.get_balance() == 80);
}

TEST_CASE("Test withdraw with begin balance 500")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Test withdraw more funds than balance")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(101);
	REQUIRE(account.get_balance() == 100);
}