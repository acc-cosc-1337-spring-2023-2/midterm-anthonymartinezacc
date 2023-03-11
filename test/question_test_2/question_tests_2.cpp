#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Increment value parameter") {
    int num = 0;
    incrementValue(num);
    REQUIRE(num == 0);
}

TEST_CASE("Increment reference parameter") {
    int num = 0;
    incrementReference(num);
    REQUIRE(num == 1);
}
