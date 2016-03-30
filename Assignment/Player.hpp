//
//  Player.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#pragma once

#include <stdio.h>
#include <fstream>
#include "PotionThrower.hpp"
#include "Swordsman.hpp"
#include "Archer.hpp"
#include "Monster.hpp"

//Player class Inherits from Monster class
class Player : public Monster
{
public:
    //Functions
    void Choice();
    void Intro();
    void Encounter();
    void Encounter2();
    void Experience();
    void ExperienceStorage();
    //Strings
    string PlayerChoice;
    string FightorFlee;
    string PlayAgain;
    //Int Variables
    int Exp;
    int ExpHolder;
    int Level;
    //Bool Variables
    bool Level1;
    bool Level2;
    bool Level3;

    
};

#endif /* Player_hpp */
