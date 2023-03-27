#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"


class Enemy_goblin : public Enemy {
 public:
  int getHealth() 
  {return health;}
  int getDamage(){ return damage;}
  int getDefence(){
     return defence;}
  std::string getType() 
  {return "Goblin";}

 private:
  int health = 69;
  int damage = 10;
  int defence = 0;
};

