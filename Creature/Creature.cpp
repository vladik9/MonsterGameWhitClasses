#include "Creature.h"
#include <iostream>
using namespace std;
Creature::Creature(string name, char symbol, int amount_of_healt,
                   int amount_of_demage, int amount_of_carry_gold)
    : c_name(name),
      c_symbol(symbol),
      c_amount_of_healt(amount_of_healt),
      c_amount_of_demage_on_attack(amount_of_demage),
      c_amount_of_carry_gold(amount_of_carry_gold)
{
     //std::cout << "constructor" << std::endl;
}

Creature::~Creature()
{ //std::cout << "distructor" << std::endl;
}

const string &Creature::getCreatureName() const { return c_name; }
char Creature::getCreatureSymbol() const { return c_symbol; }
int Creature::getCreatureHealth() const { return c_amount_of_healt; }
int Creature::getCretureDemageAtack() const { return c_amount_of_demage_on_attack; }
int Creature::getCreatureCarryGold() const { return c_amount_of_carry_gold; }
void Creature::reduceHealth(int hp) { c_amount_of_healt -= hp; }
bool Creature::isDead() const { return (c_amount_of_healt <= 0) ? true : false; }
void Creature::addGold(int unit) { c_amount_of_carry_gold += unit; }
