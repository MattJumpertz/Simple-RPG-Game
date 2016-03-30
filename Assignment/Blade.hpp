//
//  Blade.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Blade_hpp
#define Blade_hpp
#pragma once


#include "Weapon.hpp"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

//Blade Header File

class Blade : public Weapon
{
public:
    //Public so that other Classes can Inherit it.
    void Draw();
    //Private so it cannot be access or changed.
private:
    string Type = "Melee";
};

#endif /* Blade_hpp */
