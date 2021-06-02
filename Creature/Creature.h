#ifndef _CREATURE_H_
#define _CREATURE_H_
#include <string>
using std::string;
using namespace std;
class Creature
{
private:
     string c_name{};
     char c_symbol{};
     int c_amount_of_healt{};
     int c_amount_of_demage_on_attack{};
     int c_amount_of_carry_gold{};

public:
     Creature(string name = "no name", char symbol = '0', int amount_of_healt = 100, int amount_of_demage = 25, int amount_of_carry_gold = 0);
     ~Creature();

     const string &getCreatureName() const;
     char getCreatureSymbol() const;
     int getCreatureHealth() const;
     int getCretureDemageAtack() const;
     int getCreatureCarryGold() const;
     void reduceHealth(int hp);
     bool isDead() const;
     void addGold(int unit);
};
#endif // !_CREATURE_H_