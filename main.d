import hero;
import std.stdio;

void main()
{
    Hero hero = new Hero(42, 11, 12, 13);

    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.recover_hp(5));
    writeln(hero.recover_hp(5));
    writeln(hero.recover_hp(5));
    writeln(hero.recover_hp(5));
    writeln(hero.recover_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5));
    writeln(hero.lose_hp(5000));
}
