//
//  PotionThrower.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 16/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "PotionThrower.hpp"

//PotionThrower COnstructor
PotionThrower::PotionThrower()
{
    Damage = 1;
    ExtraDamage = 0;
    ChanceToHit = 60;
    ChanceToBackFire = 10; //Chance to backfire, this will heal the enemy for the Result/Damage that would be applied
    //Output that the PotionThrower is now being used
    cout << endl << "The Potion Thrower will now give it a go!" << endl;
}

void PotionThrower::Output()
{
    //Runs the Weapon Attack function
    Weapon::Attack();
    
    //If the result is above 0 (Rand is less than or equal to the chance to hit and if Rand is greater the than ChanceToBackfire) Display damage and then Calculate Monster Health.
    if (Result > 0 && RandNum > ChanceToBackFire)
    {
        sleep(3);
        cout << endl;
        cout << "Your Potion Thrower dealt " << Result << " damage." << endl;
        Monster::HealthCalc();
        Monster::Output();
    }
    
    
    //If the result is above 0 (Rand is less than or equal to the chance to hit and if Rand is less the than ChanceToBackfire) PotionThrower will instead heal the monster for the Result.
    if (Result > 0 && RandNum <= ChanceToBackFire)
    {
        cout << "Unfortunetly your Potion Thrower has thrown the wrong Potion!" << endl;
        cout << "A Healing Potion has been thrown instead!" << "The Monster has been healed for " << Result << "!" << endl;
        MonsterHealth = MonsterHealth + Result;
        Monster::Output();
    }
}

