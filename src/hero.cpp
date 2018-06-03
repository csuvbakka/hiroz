#include "hero.hpp"

namespace hiroz
{

Hero::Hero(int max_life)
    : max_life_(max_life)
    , actual_life_(max_life)
{
}

int Hero::gain_life(int amount)
{
    actual_life_ += amount;
    if (actual_life_ > max_life_)
        actual_life_ = max_life_;

    return actual_life_;
}

int Hero::lose_life(int amount)
{
    actual_life_ -= amount;
    if (actual_life_ < 0)
        actual_life_ = 0;

    return actual_life_;
}
} // namespace hiroz
