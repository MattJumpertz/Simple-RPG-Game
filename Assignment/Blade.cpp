//
//  Blade.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 9/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Blade.hpp"

//Draw fucntion states what wepaon is being used.
void Blade::Draw()
{
    while (Name == "Sword" || Name == "sword")
    {
        cout << "You are using the sword!" << endl;
    }
    
    while (Name == "Dagger" || Name == "dagger")
    {
        cout << "You are using the dagger!" << endl;
    }
}
