# LOTR-D-Project-
Creati o aplicatie joc de tip console RPG.
Un jucator poate sa isi seteze numele si clasa din care face parte
    Wizard, Warrior, Rogue
Jocul trebuie sa aibe urmatoarele scene:
O scena Intro - se prezinta lumea si se intreaba jucatorul daca vrea sa joace
O scena SetupPlayer - Se intreaba numele jucatorului si ce clasa vrea sa fie iar dupa selectie 
un mic mesaj despre alegerea facuta
O scena CrossRoads - I se prezinta jucatorului ca este la o intalnire de drumuri si poate alege
sa mearga pe una dintre cele 3 drumuri care duc catre o padure, un sat sau catre o pestera
O scena Cufar - Pe oricare drum ales jucatorului ii ies e in cale un cufar, daca alege sa deschida cufarul va trebui sa primeasca niste obiecte ce vor fi adaugate in inventar, aceste obiecte sa fie in functie de ce clasa este playerul.
O scena Battel - Pe drum ii iese un inamic random(poate fi orc, golbin sau troll) si trebuie sa lupte cu inamicul, in cazul in care castiga ajunge la destinatie, in caz contrar se va printa un 
mesaj de end game.
Codul trebuie scris in C++ si sa fie urcat in Github




# LOTR-D-Project-

A console-based RPG game written in **C++**, set in a Middle-earth-inspired world. The player creates a character, chooses a class, and journeys down one of three paths — facing random encounters, looting treasure chests, and battling enemies along the way.

## Gameplay Overview

The game is built around a sequence of scenes:

1. **Intro** - Introduces the world and asks the player whether they want to start the adventure.
2. **SetupPlayer** - The player enters their name and chooses a class:
   - Wizard
   - Warrior
   - Rogue

   After selecting a class, a short flavor message describes the choice.
3. **CrossRoads** - The player arrives at a crossroads and must choose one of three paths:
   - A forest
   - A village
   - A cave
4. **Cufar (Chest)** - Along the chosen path, the player encounters a treasure chest. Opening it grants class-specific items, which are added to the player's inventory.
5. **Battle** - The player runs into a random enemy (Orc, Goblin, or Troll) and must fight.
   - **Victory** -> the player continues on to their destination.
   - **Defeat** -> the game prints an end-game / "Game Over" message.

## Classes

| Class   | Description |
|---------|-------------|
| Wizard  | *(fill in class flavor/stats here)* |
| Warrior | *(fill in class flavor/stats here)* |
| Rogue   | *(fill in class flavor/stats here)* |

Each class receives different loot from chests and may have different combat stats/abilities.

## Enemies

- Orc
- Goblin
- Troll

Enemies are chosen at random when the player enters combat.

## Built With

- C++

## Getting Started

### Prerequisites
- A C++ compiler (e.g. `g++`) supporting at least C++11


## How to Play

1. Run the executable.
2. Read the intro and confirm you want to play.
3. Enter your character's name and pick a class.
4. At the crossroads, choose a path: forest, village, or cave.
5. Open the chest you find along the way to collect class-based loot.
6. Fight the enemy that appears. Win to keep progressing, or see the game-over message if you lose.

## Roadmap / Ideas for Future Improvements

- Add more scenes/paths beyond the initial crossroads
- Expand inventory and item system
- Add turn-based combat mechanics (attack/defend/magic)
- Save/load game state
- Add more enemy types and boss battles

## Author

Made by [Hurgoneta](https://github.com/Hurgoneta)
