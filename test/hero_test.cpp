#include <hero.hpp>

#include "catch/single_include/catch.hpp"

using namespace hiroz;
namespace
{
const char* test_suite = "[Hero]";

TEST_CASE("Actual life cannot go above maximum life", test_suite)
{
    const int max_life = 42;
    Hero hero(max_life);

    hero.gain_life(11);
    REQUIRE(hero.life() == max_life);
}
} // namespace
