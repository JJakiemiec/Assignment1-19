#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "StringCalculator.hpp"

TEST_CASE("An empty string returns 0") {
	REQUIRE(stringCalculator("") == 0);
}

TEST_CASE("A single number returns the value") {
	REQUIRE(stringCalculator("1") == 1);
	REQUIRE(stringCalculator("7") == 7);
	REQUIRE(stringCalculator("0") == 0);
}