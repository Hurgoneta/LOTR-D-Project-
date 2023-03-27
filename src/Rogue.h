#pragma once
#include <iostream>
#include <string>

class Rogue
{
public:
 Rogue():name("Rogue"), damage(1), health(10), defence(1) {}
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

