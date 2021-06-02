#include "Player.h"
#include <iostream>

Player::Player(int pl_level,
               string pl_name,
               char player_sy,
               int pl_health,
               int pl_demage,
               int pl_gold)
    : player_level(pl_level),
      Creature(pl_name, player_sy,
               pl_health,
               pl_demage,
               pl_gold)
{
     //std::cout << "Player Constructor" << std::endl;
}
Player::~Player()
{ //std::cout << "Player Distructor" << std::endl;
}
