#pragma once
#include <iostream>
#include <string>


class Wizard
{
public:

 Wizard():name("Wizard"), damage(2), health(5), defence(0) {}
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
