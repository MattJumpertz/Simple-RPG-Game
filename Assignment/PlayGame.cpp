//
//  main.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Weapon.hpp"
#include "Archer.hpp"
#include "Swordsman.hpp"
#include "PotionThrower.hpp"
#include "Player.hpp"
#include "Difficulty.hpp"

//Main PlayGame file.


using namespace std;


int main()
{
    //Create Objects of the two classes.
    Difficulty Diff;
    Player Game;
    
    //Run Intro function
    Game.Intro();
    //Difficulty function
    Diff.DifficultyCheck();
    //Choice function
    Game.Choice();
    //Encounter function
    Game.Encounter();
    //Difficulty function again to see if the player wants to increase difficiculty for the second encounter
    Diff.DifficultyCheck();
    //Encounter 2 function
    Game.Encounter2();
    return 0;
}