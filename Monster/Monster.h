#ifndef _MONSTER_H_
#define _MONSTER_H_
#include "/home/dexy-kaly/Documents/C++/MosterGame/Creature/Creature.h"
#include <array>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
class Monster : public Creature
{
public:
     enum class Type
     {
          DRAGON,
          ORC,
          SLIME,
          max_types
     };

public:
     Monster(Type m_type); // to implement constructor

     ~Monster();
};

#endif // !_MONSTER_H_
