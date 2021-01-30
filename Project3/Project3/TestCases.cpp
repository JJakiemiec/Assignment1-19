#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "StringCalculator.hpp"

TEST_CASE("An empty string returns 0") {
	REQUIRE(stringCalculator("") == 0);
}