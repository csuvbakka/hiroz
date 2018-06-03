#pragma once

namespace hiroz
{
class Hero
{
public:
    Hero(int max_life_);

    int life() const { return actual_life_; }

    int gain_life(int amount);
    int lose_life(int amount);

private:
    int max_life_;
    int actual_life_;
};

} // namespace hiroz
