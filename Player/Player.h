#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "/home/dexy-kaly/Documents/C++/MosterGame/Creature/Creature.h"
class Player : public Creature
{
private:
     int player_level{};

public:
     Player(int pl_level = 1,
            string pl_name = "No name",
            char player_sy = '@',
            int pl_health = 10,
            int pl_demage = 1,
            int pl_gold = 0);
     ~Player();
};

#endif // !_PLAYER_H_
