#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("gcd case 1") {
    REQUIRE(find_ged(15, 25) == 5);
}

TEST_CASE("gcd case 2") {
    REQUIRE(find_ged(16, 32) == 16);
}

TEST_CASE("gcd case 3") {
    REQUIRE(find_ged(159, 309) == -1); //invalid because 309 > 200
}
