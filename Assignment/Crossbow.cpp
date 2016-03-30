//
//  Crossbow.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Crossbow.hpp"

//Crossbow Constructor States Default variables for weapons
Crossbow::Crossbow()
{
    loaded = true;
    Damage = 2;
    ExtraDamage = 4;
    ChanceToHit = 75;
    Name = "Crossbow";
}

int Crossbow::Attack()
{
    //Checks if loaded = true. If Crossbow is eligible to be fired.
    if (loaded == true || NumHolder == 1)
    {
        loaded = false;
        NumHolder = 0.5;
        Weapon::Attack();
    }
    
    else //If it isn't error message outputs.
    {
        cout << "The Crossbow is still reloading try again next turn!" << endl;
        loaded = true;
    }
    
    return 1;
    
}