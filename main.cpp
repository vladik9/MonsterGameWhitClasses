// simple game whit monster
#include <iostream>
using std::string;
using namespace std;
#include "Creature/Creature.h"
#include "Creature/Creature.cpp"
#include "Player/Player.h"
#include "Player/Player.cpp"

int main()
{
     string new_pleyer_Name{};
     std::cout << "Enter your name: " << std::endl;
     std::getline(std::cin, new_pleyer_Name);
     std::cout << "Welcome " << new_pleyer_Name << std::endl;
     Player new_pleyer_object{};
     std::cout << "You have: " << new_pleyer_object.getCreatureHealth()
               << " healt and are carryng "
               << new_pleyer_object.getCreatureCarryGold()
               << " gold." << std::endl;

     return 0;
}
