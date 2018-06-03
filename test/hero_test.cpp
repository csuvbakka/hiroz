#include <hero.hpp>

#include "catch/single_include/catch.hpp"

using namespace hiroz;
namespace
{
const char* test_suite = "[Hero]";

TEST_CASE("Actual HP cannot go above maximum HP", test_suite)
{
    const int max_hp = 42;
    Hero hero(max_hp);

    hero.gain_hp(11);
    REQUIRE(hero.hp() == max_hp);

    hero.lose_hp(-11);
    REQUIRE(hero.hp() == max_hp);
}

SCENARIO("Life is always between 0 and maximum HP.", "[Hero]")
{
    GIVEN("A hero with maximum HP")
    {
        const int max_hp = 42;
        Hero hero(max_hp);

        WHEN("the hero gains HP")
        {
            hero.gain_hp(10);
            THEN("HP does not go above maximum") { REQUIRE(hero.hp() == max_hp); }
        }

        WHEN("the hero loses more than maximum HP")
        {
            hero.lose_hp(max_hp + 10);
            THEN("HP becomes 0") { REQUIRE(hero.hp() == 0); }
        }
    }
}

} // namespace
