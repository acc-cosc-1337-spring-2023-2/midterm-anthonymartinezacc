#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Valid RNA string") {
    REQUIRE(transcribe_dna_to_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU");
}
