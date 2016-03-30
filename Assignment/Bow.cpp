//
//  Bow.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Bow.hpp"

//Bow Constructor States Default variables for weapons
Bow::Bow()
{
    Damage = 2;
    ExtraDamage = 0;
    ChanceToHit = 65;
    Name = "Bow";
}

//Bow Output Functiion
void Bow::Output()
{
    if (Result > 0)
	{
        //If Crossbow is being used
        if (Name == "Crossbow")
        {
            cout << "'Twang' You did " << Result << " damage with your Crossbow!";
            cout << " It will take another turn to reload your Crossbow, be prepared!" << endl;
            HealthCalc();
            Monster::Output();
        }
        
        //If Bow is being used
        if (Name == "Bow")
        {
            cout << "'Twang' You did " << Result << " damage with your Bow!" << endl;
            HealthCalc();
            Monster::Output();

        }
	}

}