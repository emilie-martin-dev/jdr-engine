#define CONFIG_CATCH_MAIN

#include "catch2/catch_test_macros.hpp"

TEST_CASE( "Catch2 verification" "[verification][meta]") {
    REQUIRE(1 == 1);
}
