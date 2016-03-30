//
//  Swordsman.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Swordsman_hpp
#define Swordsman_hpp
#pragma once

#include "Dagger.hpp"
#include "Sword.hpp"
#include "Blade.hpp"
#include <stdio.h>
#include <cstdlib>

//Archer class. Sums up all of the melee weapons into one class.
class Swordsman : public Dagger, Sword
{
    public:
    //Swordsman Contrustor outputs a message stating that the Swordsman is now being controlled
    Swordsman();
    //Attack Function
    void Attack();
    //Weapon Choice string to declare what wepaon is being used first
    string WeaponChoice;
    //Whether or not the second weapon is being used or not.
    bool SecondTurn1 = false;

    
};


#endif /* Swordsman_hpp */
