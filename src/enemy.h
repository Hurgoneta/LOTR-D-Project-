#pragma once
#include<iostream>


class Enemy
{
public:
  virtual int getHealth() = 0;
  virtual int getDamage() = 0;
  virtual int getDefence() = 0;
  virtual std::string getType() = 0;
private:

};