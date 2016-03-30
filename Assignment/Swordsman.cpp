//
//  Swordsman.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Swordsman.hpp"

//Swordsman Contructor displays message to the console stating that the Swordsman class is now being controlled.
Swordsman::Swordsman()
{
    cout << endl;
    cout << "You are now in control of the Swordsman class." << endl;
    sleep(3);
    cout << "You can either attack using a Dagger or a Sword." << endl;
    cout << endl;
    
}

void Swordsman::Attack()
{
    
    //Create the objects of the two weapons Dagger and Sword
    Dagger Dagger1;
    Sword Sword1;
    
    //Check which weapon the player wnats to use first
    cout << "Attack using the (1)Sword or (2)Dagger?" << endl;
    getline(cin, WeaponChoice);
    
    if (WeaponChoice == "1")
    {
        cout << endl<< endl;
        
        Sword1.Attack();
        sleep(3);
        Sword1.Output();
        
        SecondTurn1 = true;
    }
    
    if (WeaponChoice == "2")
    {
        cout << endl << endl;
        
        
        Dagger1.Attack();
        sleep(3);
        Dagger1.Output();
        
        SecondTurn1 =true;
        
    }
    
    
    //Once thw first wepaon has been used, automatically uses the second weapon.
    while (SecondTurn1 == true)
    {
        cout << endl << "You will now Attack using the remaining weapon!" << endl;
        sleep(3);
        
        if (WeaponChoice == "1")
        {
            
            Dagger1.Attack();
            sleep(3);
            Dagger1.Output();
            
            SecondTurn1 = false;
        }
        
        if (WeaponChoice == "2")
        {

            Sword1.Attack();
            sleep(3);
            Sword1.Output();
            
            SecondTurn1 = false;
            
        }
        
        
    }
    
    
}