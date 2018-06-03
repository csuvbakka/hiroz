#include "hero.hpp"

namespace hiroz
{

Hero::Hero(int max_hp)
    : max_hp_(max_hp)
    , actual_hp_(max_hp)
{
}

int Hero::gain_hp(int amount)
{
    actual_hp_ += amount;
    hold_hp_invariant();

    return actual_hp_;
}

int Hero::lose_hp(int amount)
{
    actual_hp_ -= amount;
    hold_hp_invariant();

    return actual_hp_;
}

void Hero::hold_hp_invariant()
{
    if (actual_hp_ > max_hp_)
        actual_hp_ = max_hp_;
    if (actual_hp_ < 0)
        actual_hp_ = 0;
}
} // namespace hiroz
