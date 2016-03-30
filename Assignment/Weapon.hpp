//
//  Weapon.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp
#pragma once

#include "Monster.hpp"

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Main Weapon class
//Inherits from Monster class
class Weapon : public Monster
{
public:
    //Strings
    string Name;
    string SwordType;
    //int Variables
    int Damage;
    float ChanceToHit;
    int ExtraDamage;
    int RandNum;
    int ChanceToBackFire;
    //Functions
    int Attack();
    void ClearScreen();
};


#endif /* Weapon_hpp */
