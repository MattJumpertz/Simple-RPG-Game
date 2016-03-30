//
//  Difficulty.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Difficulty_hpp
#define Difficulty_hpp
#pragma once

#include "Global.hpp"

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Difficulty class
class Difficulty
{
public:
    //Difficulty string to determine which difficulty has been chosen
    string Difficulty;
    //Function to ask what Difficulty the player wants to chose
    void DifficultyCheck();
};
#endif /* Difficulty_hpp */
