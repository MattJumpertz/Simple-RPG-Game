//
//  Archer.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Archer.hpp"

//Archer Constructor displays message that you are in control of the Archer class
Archer::Archer()
{
    cout << endl <<  "You are now in control of the Archer class." << endl;
    sleep(3);
    cout << "You can either attack using a Crossbow or a Bow." << endl;
    cout << endl;

}

//Archer Attack function
void Archer::Attack()
{
    //Create Objects for Bow and Crossbow
    Crossbow CBow1;
    Bow Bow1;
    
    //Check what the player wants to use first
    cout << "Attack using the (1)Crossbow or (2)Bow?" << endl;
    getline(cin, WeaponChoice);
    
    if (WeaponChoice == "1")
    {
        Name = "Crossbow";
        cout << endl << endl;
       
        CBow1.Attack();
        sleep(3);
        CBow1.Output();
        
        SecondTurn = true;
    }
    
    if (WeaponChoice == "2")
    {
        Name = "Bow";
        cout << endl << endl;
        
        Bow1.Attack();
        sleep(3);
        Bow1.Output();
        
        SecondTurn =true;
        
    }
    
    //Once the first weapon has been fired, automatically fires the second weapon
    while (SecondTurn == true)
    {
        cout << "You will now Attack using the remaining weapon!" << endl;
        sleep(3);
        
        if (WeaponChoice == "1")
        {
            Name = "Bow";
            cout << endl << endl;

            Bow1.Attack();
            sleep(3);
            Bow1.Output();
            
            SecondTurn = false;
        }
        
        if (WeaponChoice == "2")
        {
            Name = "Crossbow";
            cout << endl << endl;
            
            CBow1.Attack();
            sleep(3);
            CBow1.Output();
            
            SecondTurn = false;
            
        }

        
    }
    
    
}