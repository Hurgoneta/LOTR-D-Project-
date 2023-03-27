#include "scene.h"
//sf::Music music;

scene::~scene()
{
}
void scene::PlayButon()
{ std::cout << "\033[1m"; // Bold
  std::cout << "\033[32m"; // Green
  music.openFromFile("Main_Menu.wav");
  music.play();
  music.setLoop(true);
  system("cls");
  //std::cout << "\033[2J\033[1;1H";// pentru Linux sau system("clear");        
  //std::cout << "\033[2J\033[1;1H";//escape sequences ANSI pentru a curăța terminalul, dar eu am ales din libraria standard cu system(""),fiind mai eficient, si am pus comanda clear ca sa fie compatibil si pentru Linux si pentru Windows, in loc sa fii pus (cls);


pick.logo();//tot ce contine pick. e afisarea imaginilor
getch();
system("cls");
//std::cout << "\033[2J\033[1;1H";//
std::cout << "\n\n\n\n\n\n\n\n\n\n " << std::endl;

pick.castle();
  getch();
  while(true) // Un loop pentru play buton
  {  
    std::cout << "Do you want to play?" << std::endl;
    std::cout << "Press 1 for Yes or 2 for No: ";
    int input;
    std::cin >> input;

    if (input == 1)
    { system("cls");
      //std::cout << "\033[2J\033[1;1H";//
      std::cout << "Choose your name, Hero: " <<std::endl;
      std::cin >> Name;
      system("cls");
      //std::cout << "\033[2J\033[1;1H";//


      while(true) 
      { std::cout <<"You need to choose a class, here is a short description, press any key to continue "<<std::endl;
        getch();
        system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        pick.wizard();
        getch();
        system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        pick.warrior();
        getch();
        system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        pick.rogue();
        getch();
        system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        std::cout << "\n Select your class" <<std::endl;
        std::cout << "Press 1 for Wizard" <<std::endl;
        std::cout << "Press 2 for Warrior" <<std::endl;
        std::cout << "Press 3 for Rogue" <<std::endl;
        Take_class(Character_Class);//salvez alegerea facuta
        switch (Character_Class)
        {
        case 1:
          system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Wizard"<< std::endl; 
        break;
        case 2:
         system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Warior"<< std::endl;                                                                                                                                                                    
        break;
        case 3:
        system("cls");
        //std::cout << "\033[2J\033[1;1H";//
        std::cout << "You name "<<Name<<" Class Rogue"<<std::endl;
        break;
        
        default:
        std::cout<<"You must choose between classes 1,2,3 press any key to return to choose menu"<<std::endl;
        getch();
        system("cls");
        continue;
        }
      break;
      }    
     break;
      }

      else if (input == 2)
      {
      std::cout << "Alright buddy, see you next time!" << std::endl<<"Press any key to exit";
      getch();
      std::exit(0);
      break;
      }

      else
      {
      std::cout << "You must choose between Yes or No (1,2), press any key to return to the menu" << std::endl;
      getch();
      system("cls");
    }
  }

 std::cout<<"Press any key to continue " <<std::endl;
 getch();
 system("cls");
}

//Crossroads Scene
void scene::crossroads()
{
  music.openFromFile("Exploring.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
  
  pick.road();
  getch();
  system("cls");
  std:: cout <<Name<<" Current stats are :"<<std::endl;
  Character_stat();
  getch();
  std::cout<<"Press any key to continue "<<std::endl;
  getch();
  system("cls");
  pick.crossroad();
  getch();
  system("cls");
  while(true) 
   {  
   std::cout<<"You have 3 roads, choose one of them "<<std::endl;
   std::cout << "Press 1 for (Village)" <<std::endl;
   std::cout << "Press 2 for (Forest)" <<std::endl;
   std::cout << "Press 3 for (Caves)" <<std::endl;
   Take_road(road);

  switch (road)
  {
  case 1:
    system("cls");
    std::cout <<Name<<" Choose Village road" <<std::endl; 
    break;
  case 2:
   system("cls");
    std::cout <<Name<<" Choose Forest road" <<std::endl; 
    break;
  case 3:
    system("cls");
    std::cout <<Name<<" Choose Caves road" <<std::endl; 
    break;

  default:
    std::cout<<"You must choose between roads (1,2,3), press any key to return to choose menu"<<std::endl;
    getch();
    system("cls");
    continue;
  }
  break;
}}

//Chest Scene
void scene::chest_scene()
{
  system("cls");
  std::cout<<"You found a chest: "<<std::endl;
  pick.chest();
  getch();
  system("cls");
  while(true) 
  {  
   std::cout<<"Do you want to open it? "<<std::endl;
   std::cout << "Press 1 for Yes" <<std::endl;
   std::cout << "Press 2 for No" <<std::endl;
   Take_chest(chest);

   if(chest == 1)
    {
    system("cls");
    std::cout <<"You found an item : "<<std::endl;
    Character_define();
    getch();
      while(true) 
   { 
    system("cls");
    std::cout <<"Do you want to pick up and equip item? "<<std::endl;
    std::cout << "Press 1 for Yes" <<std::endl;
    std::cout << "Press 2 for No" <<std::endl;
    Take_open(open);// salvez daca a fost echipat item ori nu

  switch (open)
  {
  case 1:
    system("cls");
      std::cout <<Name<<" equipped item, new stats are :" <<std::endl;
      Character_define_Item_stat();
      getch();
      system("cls");
      std::cout << "it's too quiet here..."<<std::endl;
      std::cout <<"you feel someone's lurking you...a monster appears" <<std::endl;
      break;
    case 2:
    system("cls");
      std:: cout <<Name<<" Current stats are :"<<std::endl;
      Character_stat();
      getch();
      system("cls");
      std::cout << "it's too quiet here..."<<std::endl;
      std::cout <<"you feel someone's gazing you...a monster appears" <<std::endl;
      break;
  
  default:
  std::cout<<"You must choose between 1,2 press any key to return to choose menu"<<std::endl;
      getch();
      system("cls");
      continue;
  }

    break;}
    }

    else if(chest == 2)
    {
    system("cls");
    std::cout <<Name<<" continue traveling...." <<std::endl;
    std:: cout <<Name<<" Current stats are :"<<std::endl;
    Character_stat(); 
    getch();
    system("cls");
    std::cout << "it's too quiet here..."<<std::endl;
    std::cout <<"you feel someonething isn't right...a monster appears" <<std::endl;
    break;
    }

    else 
    {
    std::cout<<"You must choose between (1,2), press any key to return to choose menu"<<std::endl;
    getch();
    system("cls");
   }
   break;
  }
}



void scene::displaySwordParameters()
{
  
  item_sword* swordPointer = &sword;
        std::cout << "Name: " << swordPointer->getName() << std::endl;
        std::cout << "Damage: " << swordPointer->getDamage() << std::endl;
        std::cout << "Health: " << swordPointer->getHealth() << std::endl;
        std::cout << "Defence: " << swordPointer->getDefence() << std::endl;
}
void scene::displayFinal_warrior()
{
    
        game.Final_warrior();
}
void scene::display_warrior_sword()
{
  
  game.Final_warrior_sword();
}

void scene::Take_road(int& road)
    {
        std::cin>> road;
    }
void scene::Take_chest(int& chest)
    {
        std::cin>> chest;
    }
void scene::Take_open(int& open)
    {
       std::cin>> open;
    }     
void scene::Take_class(int& Character_Class)// pentru a salva valoarea Character_class
    {
        std::cin>> Character_Class;
    }
void scene::dissplayWandParameters()
{
  
  item_wand* wandPointer = &wand;
        std::cout << "Name: " << wandPointer->getName() << std::endl;
        std::cout << "Damage: " << wandPointer->getDamage() << std::endl;
        std::cout << "Health: " << wandPointer->getHealth() << std::endl;
        std::cout << "Defence: " << wandPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Wizard()
{
        game.Final_wizard();  
}
void scene::display_wizard_wand()
{
  game.Final_wizard_wand();  
}
void scene::displayDaggerParameters()
{
  
  item_dagger* daggerPointer = &dagger;
        std::cout << "Name: " << daggerPointer->getName() << std::endl;
        std::cout << "Damage: " << daggerPointer->getDamage() << std::endl;
        std::cout << "Health: " << daggerPointer->getHealth() << std::endl;
        std::cout << "Defence: " << daggerPointer->getDefence() << std::endl;  
}
void scene::displayFinal_Rogue()
{
        game.Final_Rogue();    
}
void scene::display_rogue_dagger()
{
  game.Final_Rogue_dagger();  
}



void scene::Character_define() //in functie de clasa in chest apare item pentru clasa lui
{
  switch (Character_Class)
  {
  case 1:
    pick.wand();
  dissplayWandParameters();
    break;
  case 2:
   pick.sword();
  displaySwordParameters();
  break;

  case 3:
  pick.dagger();
  displayDaggerParameters();
  break;


    
  }
 
}

void scene::Character_define_Item_stat()  // afiseaza parametri la jucator cu parametri la item
{
  {
    if(Character_Class == 1)
    {
    display_wizard_wand();
     
    }

    else if(Character_Class == 2)
    {
    display_warrior_sword();
    
    }

    else if(Character_Class == 3)
    {
    display_rogue_dagger();
    
    }
  }
}

void scene::Character_stat()  // afiseaza parametri claselor fara item
{
 if(Character_Class == 1)
  {
  displayFinal_Wizard();
   
  }

  else if(Character_Class == 2)
  {
  displayFinal_warrior();
  
  }

  else if(Character_Class == 3)
  {
  displayFinal_Rogue();
  
  }
}

void scene::BattleScene()
{  music.openFromFile("BattleFinal.wav");
  music.setVolume(70);
  music.play();
  music.setLoop(true);
    scene Scene;
    getch();
    if(Character_Class == 1)
 {//wizard
      if(chest == 1 && open ==1)
      {//wizard + wand parametri
        
        game.PlayerAddWizard_wand();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
        
      }
      else 
      { // wizard parametri
        
        game.PlayerAddWizard();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  
  }

  else if(Character_Class == 2)
   {//warrior
      if(chest == 1 && open ==1)
      {//warrior + sword
        
        game.PlayerAddWarrior_sword();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // warrior
         
        game.PlayerAddWarrior();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  }

  else if(Character_Class == 3)
   {//rogue 
      if(chest == 1 && open ==1)
      {//rogue + dagger
         
        game.PlayerAddRogue_dagger();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      else 
      { // rogue
         
        game.PlayerAddRogue();
         heroHealth =game.geTotaltHealth();
         heroDamage =game.getTotalDamage();
         heroDefence =game.geTotaltDefence();
      }
      
  }
   
    std::random_device rd;
  std::mt19937 eng(rd()); //generator de numere pseudo-aleatoare, 
  //rd() returneaza un seed generat din surse externe, cum ar fi timpul de sistem sau performanta hard disk-ului
  std::uniform_int_distribution<> distr(0, 2); //generam numere intregi intre 0 si 2 adica 3 variante

    Enemy* enemy;
  switch (distr(eng))// random intre 0 si 3
   {
      case 0:
        enemy = new Enemy_goblin();
        pick.goblin();
        break;
      case 1:
        enemy = new Enemy_orc();
        pick.orc();
        break;
      case 2:
        enemy = new Enemy_skelet();
        pick.skeleton();
        break;
    }

  int enemyHealth = enemy->getHealth(); //in functie de care Enemy a nimerit luam parametrii lui
  int enemyDamage = enemy->getDamage();
  int enemyDefence = enemy->getDefence();

  while (heroHealth > 0 && enemyHealth > 0) //un loop pentru battle ca sa luam jucatori si Enemy vii :D
  {
    enemyHealth = enemyHealth - (heroDamage - enemyDefence); // aici jucatorul paleste Enemy si pur si simplu scadem damage din defence
    std::cout << "Hero attacked " << enemy->getType() << "! Enemy health is now "<< enemyHealth << std::endl;
    getch();

    if (enemyHealth <= 0) // daca Enemy HP ajunge la 0 oprim loop
    {
      break;
    }
    heroHealth = heroHealth - (enemyDamage - heroDefence);// aici HP eroului se scade din Enemy damage
    std::cout <<"                                                  "<< enemy->getType() << " attacked hero! Hero health is now "<< heroHealth << std::endl;
    getch();
  }
  if (heroHealth <= 0)  // daca eroul moare game over
  { system("cls");
    std::cout << "Nooo... You were defeated... but please don't give up yet Hero..." << std::endl; 
    pick.gameover();
    getch();
    delete enemy; //stergem Enemy din Heap
  } else {
    std::cout << "Hero has defeated the " << enemy->getType() << "!" << std::endl; // eroul castiga
    getch();
    system("cls");
    std::cout<< "You continued the journey "<<std::endl;
    getch();
    system("cls");
    music.stop();// oprim muzica precedenta
    music.openFromFile("arrive.wav"); // si pornim noul soundtrack pentru cei care au ajuns :D
    music.setVolume(70);
    music.play();
    music.setLoop(true);
    std::cout<< "You arrived, well it seems you have restored balance to the realm. Congratiulations! "<<std::endl;
    pick.arrive();
    delete enemy; //stergem Enemy din Heap
    getch();
  }
 


    
}




