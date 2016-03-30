//
//  Archer.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Archer_hpp
#define Archer_hpp
#pragma once

#include "Bow.hpp"
#include "Crossbow.hpp"
#include <stdio.h>
#include <cstdlib>


//Archer class. Sums up all of the ranged weapons into one class.
class Archer : public Crossbow
{
public:
    //Archer Contructor outputs a console message stating that the Archer has been selected or controlled
    Archer();
    
    //Attack function
    void Attack();
    //Weapon Choice string, either using Bow or Crossbow
    string WeaponChoice;
    //If the remaining weapon is being fire or not.
    bool SecondTurn = false;
};

#endif /* Archer_hpp */
