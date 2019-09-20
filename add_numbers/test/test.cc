#define CATCH_CONFIG_MAIN
#include "testing/catch.hh"
#include "add_numbers.hh"

TEST_CASE("Sums are computed", "[sum]") {
  REQUIRE(add_numbers(3, 4) == 7);
}