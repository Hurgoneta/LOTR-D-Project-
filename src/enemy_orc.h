#pragma once
#include <iostream>
#include <string>
#include "enemy.h"


class Enemy_orc : public Enemy {
 public:
  int getHealth() 
  {return health;}
  int getDamage() 
  {return damage;}
  int getDefence() 
  {return defence;}
  std::string getType() 
  {return "Orc";}

 private:
  int health = 72;
  int damage = 20;
  int defence = 0;
};

