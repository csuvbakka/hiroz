module hero;

import std.algorithm : min, max;

int max_life(int level, int vitality)
in
{
    assert(level > 0);
    assert(vitality >= 0);
}
out (result)
{
    assert(result >= 4);
}
do
{
    if (level < 35)
        return vitality * 10 + level * 4;
    else
        return vitality * (level - 25) + level * 4;
}

class Hero
{
    invariant
    {
        assert(strength_ >= 0);
        assert(dexterity_ >= 0);
        assert(vitality_ >= 0);
        assert(damage_ >= 0);
        assert(damage_ <= max_life(level_, vitality_));
    }

    this(int level, int strength, int dexterity, int vitality)
    {
        level_ = level;
        strength_ = strength;
        dexterity_ = dexterity;
        vitality_ = vitality;
    }

    int hp()
    {
        return max_life(level_, vitality_) - damage_;
    }

    int recover_hp(int amount)
    {
        damage_ = max(damage_ - amount, 0);
        return hp();
    }

    int lose_hp(int amount)
    {
        damage_ = min(damage_ + amount, max_life(level_, vitality_));
        return hp();
    }

private:
    int level_;

    int strength_;
    int dexterity_;
    int vitality_;

    int damage_;
}
