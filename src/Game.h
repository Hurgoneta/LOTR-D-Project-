#pragma once
#include "Player.h"
#include "Warrior.h"
#include "item_sword.h"
#include "Wizard.h"
#include "item_wand.h"
#include "Rogue.h"
#include "item_dagger.h"
#include "enemy_goblin.h"
#include "enemy_orc.h"
#include "enemy_skeleton.h"

class Game 
{
public:
    Game();
    ~Game();
//Warrior method   
void PlayerAddWarrior();       
void PlayerAddWarrior_sword(); 
void Final_warrior();          
void Final_warrior_sword();    


//Wizard method    
void PlayerAddWizard();        
void PlayerAddWizard_wand();   
void Final_wizard();           
void Final_wizard_wand();      


//Rogue method   
void PlayerAddRogue();         
void PlayerAddRogue_dagger(); 
void Final_Rogue();            
void Final_Rogue_dagger();     



int getTotalDamage() {return totalDamage;}
int geTotaltHealth() {return totalHealth;}
int geTotaltDefence() {return totalDefence;}
private:
int totalDamage;
int totalHealth;
int totalDefence;




Warrior warrior;
Wizard wizard;
Rogue rogue;

Player player;
item_sword sword;
item_wand wand;
item_dagger dagger;

};