//
//  Bow.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Bow_hpp
#define Bow_hpp
#pragma once

#include "Weapon.hpp"

#include <stdio.h>

using namespace std;


//Inherit from Weapon class
class Bow : public Weapon
{
public:
    //Bow Constructor to set the values of Damage, ExtraDamage and ChanceToHit
    Bow();
    bool loaded;
    void Output();
private:
    //Private string type, unchangeable.
    string Type = "Ranged";
};


#endif /* Bow_hpp */
