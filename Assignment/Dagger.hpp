//
//  Dagger.hpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#ifndef Dagger_hpp
#define Dagger_hpp
#pragma once

#include <stdio.h>
#include "Blade.hpp"

//Inherit from Blade class
class Dagger : public Blade
{
public:
    //Dagger Constructor to set the values of Damage, ExtraDamage and ChanceToHit
	Dagger();
	//It's own Attack function that doulbes the Result int to simulate double hit
    void Attack();
    //Output Function to set text to console
    void Output();
	
};

#endif /* Dagger_hpp */
