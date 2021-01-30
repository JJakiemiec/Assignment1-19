#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "StringCalculator.hpp"

TEST_CASE("An empty string returns 0") {
	REQUIRE(stringCalculator("") == 0);
}
TEST_CASE("A single number returns the value") {
	REQUIRE(stringCalculator("1") == 1);
	REQUIRE(stringCalculator("5")== 5);
}
TEST_CASE("Two numbers, comma delimited, returns the sum") {
REQUIRE(stringCalculator("1,10")==11);
REQUIRE(stringCalculator("3,2")==5);
}
TEST_CASE("Two numbers, newline delimited, returns the sum") {
	REQUIRE(stringCalculator("1 \n 2")==3);
	REQUIRE(stringCalculator("4 \n 5")== 9);
	))
}