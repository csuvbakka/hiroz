#pragma once

namespace hiroz
{
class Hero
{
public:
    Hero(int max_hp_);

    int hp() const { return actual_hp_; }

    int gain_hp(int amount);
    int lose_hp(int amount);

private:
    void hold_hp_invariant();

private:
    int max_hp_;
    int actual_hp_;
};

} // namespace hiroz
