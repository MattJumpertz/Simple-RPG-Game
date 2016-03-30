//
//  Weapon.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Weapon.hpp"
#include "Bow.hpp"
#include "Blade.hpp"
#include <ctime>
#include <cstdlib>

//Base weapon function
int Weapon::Attack()
{
    //Seed Rand using time function. Seed will change depending on what time it is.
    srand(time(0));
    
    //RandNum int is equal to 0 - 100.
    RandNum = (1 + rand() % 101);
    
    //Debug to ensure result doesn't carry over from previous calls ot this function
    Result = 0;
    
    //If the Weapon has hit
    if (RandNum <= ChanceToHit)
    {
        //If Damage is equal to 1
        if(Damage == 1)
        {
            Result = Result + (rand() % 7) + ExtraDamage;
            
        }
        
        //If Damage is equal to 2
        if(Damage == 2)
        {
            
            Result = Result + (rand() % 7) + (rand() % 7) + ExtraDamage;

        }
        
        //If damage is equal to 3
        if(Damage == 3)
        {
            
            Result = Result + (rand() % 7) + (rand() % 7) + (rand() % 7) + ExtraDamage;
           
        }
        
        //Debug
        if(Damage == 0)
        {
            cout << "Something went wrong" << endl;
        }
    
    }
    
    //If the wepaon has missed, output miss message
    if (RandNum > ChanceToHit)
    {
        Result = 0;
        cout << "Whoops! That attack has missed!" << endl;
    }
    
    return 0;
    
}