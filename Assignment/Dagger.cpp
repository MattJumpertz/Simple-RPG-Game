//
//  Dagger.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Dagger.hpp"

#include <iostream>
#include <string>

//Dagger Constructor States Default variables for weapons
Dagger::Dagger()
{
	Damage = 1;
	ExtraDamage = -1;
	ChanceToHit = 70;
	Name = "Dagger";
}

//Attack function
void Dagger::Attack()
{
	//Runs default Attack function from Weapon class
    Weapon::Attack();
	//Checks if the Dagger has hit
    if (Result > 0)
    {
        //Doubles the result/damage for the Daggers doublehit passive.
        Result = Result + Result;
    }
}

//Output function
void Dagger::Output()
{
    //If the Dagger hit.
    if (Result > 0)
    {
            cout << "'Swing' You attacked twice in quick succession with your Dagger." << endl;
            cout << "You did " << Result << " damage with your Dagger!" << endl;
            HealthCalc();
            Monster::Output();
            
    }

}