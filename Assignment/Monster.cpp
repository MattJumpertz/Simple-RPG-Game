//
//  Monster.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 16/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Monster.hpp"
#include <iostream>

//Monster Constructor
Monster::Monster()
{

}


//Monster Output function
void Monster::Output()
{
    if (MonsterHealth > 0)
    {
        std::cout << "The Monster's Health is now " << MonsterHealth << "!" << std::endl;
    }
}

//Monster Health Calculation function
int Monster::HealthCalc()
{
    //Monster Health is equal to current MonsterHealth minus Result
    MonsterHealth = MonsterHealth - Result;
    
    //If the health is less than or equal to 0 display defeat message.
    if (MonsterHealth <= 0)
    {
        std::cout << "Congratulations you have defeated the Enemy!" << std::endl;
        //No longer fighter the monster.
        Running = false;
    }
    
    return MonsterHealth;
}