#pragma once
#include <iostream>
#include <string>

class Player
{
public:
 Player(): name("Player"), damage(5), health(50), defence(1) {}
    std::string getName() {
        return name;}
    int getDamage() {
        return damage;}
    int getHealth() {
        return health;}
    int getDefence() {
        return defence;}

private:

    std::string name;
    int damage;
    int health;
    int defence;
};

