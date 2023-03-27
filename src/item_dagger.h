#pragma once
#include <iostream>
#include <string>

class item_dagger
{
public:


 item_dagger() : name("Dagger"), damage(10), health(0), defence(1) {}
    std::string getName(){return name;}
    int getDamage(){return damage;}
    int getHealth(){return health;}
    int getDefence(){return defence;}

private:

    std::string name;
    int damage;
    int health;
    int defence;
};