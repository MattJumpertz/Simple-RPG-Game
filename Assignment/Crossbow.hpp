//
//  Crossbow.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Crossbow_hpp
#define Crossbow_hpp
#pragma once

#include "Bow.hpp"

#include <stdio.h>
#include <iostream>
#include <string>

//Inherit Bow class functions.

class Crossbow : public Bow
{
public:
    // Crossbow Constructor to set the values of Damage, ExtraDamage and ChanceToHit
    Crossbow();
    //Attack function to allow change for loaded
    int Attack();
    int NumHolder;
};

#endif /* Crossbow_hpp */
