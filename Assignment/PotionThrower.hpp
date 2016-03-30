//
//  PotionThrower.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 16/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef PotionThrower_hpp
#define PotionThrower_hpp
#pragma once

#include <stdio.h>

#include "Weapon.hpp"


//Potion Thrower class. This is the computer class
class PotionThrower : public Weapon
{
public:
    //Potion Thrower class to determine Damage, ExtraDamage, ChanceToHit and ChanceToBackfire
    PotionThrower();
    //Attack function
    void Attack();
    //Output function
    void Output();
};


#endif /* PotionThrower_hpp */
