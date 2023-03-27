#pragma once
#include <iostream>
#include <string>


class item_sword
{
public:
    

 item_sword() : name("Sword"), damage(9), health(0), defence(2) {}
    std::string getName()
    {return name;}
    int getDamage()
    {return damage;}
    int getHealth()
    {return health;}
    int getDefence()
    {return defence;}

private:

    std::string name;
    int damage;
    int health;
    int defence;
};