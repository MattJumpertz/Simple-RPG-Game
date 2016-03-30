//
//  Monster.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 16/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Monster_hpp
#define Monster_hpp
#pragma once

#include "Global.hpp"
#include <stdio.h>
#include <iostream>


//Base Class for all Weapons
class Monster
{
public:
    //Result variable for damage
    int Result;
    //Monster Constructor
    Monster();
    
    //Output function
    void Output();
    //Calcualte Health function
    int HealthCalc();
    //Bool to check if a monster is being attacked
    bool Running = true;

};

#endif /* Monster_hpp */
