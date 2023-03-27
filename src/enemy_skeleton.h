#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"


class Enemy_skelet : public Enemy {
 public:
  int getHealth() { return health; }
  int getDamage() { return damage; }
  int getDefence() { return defence; }
  std::string getType() { return "Skeleton"; }

 private:
  int health = 70;
  int damage = 11;
  int defence = 1;
};

