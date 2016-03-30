//
//  Difficulty.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Difficulty.hpp"

//Difficulty Check function
void Difficulty::DifficultyCheck()
{
   //What Difficulty they would like to play on
    cout << endl << "What Difficulty would you like to play on?" << endl;
    sleep(3);
    cout << "(1)Easy, (2)Medium, (3)Hard, (4)It's All Luck Anyway?" << endl;
    getline(cin, Difficulty);
    
    
    //Depending on what difficulty the player has chosen, changes the MonsterHealth accordingly
    if (Difficulty == "1")
    {
        MonsterHealth = 20;
    }
    
    if (Difficulty == "2")
    {
        MonsterHealth = 30;
    }
    
    if (Difficulty == "3")
    {
        MonsterHealth = 40;
    }
    
    if (Difficulty == "4")
    {
        MonsterHealth = 50;
    }
    
    
    //Debug
    while (Difficulty != "1" && Difficulty !="2" && Difficulty != "3" && Difficulty != "4")
    {
        cout << "Please enter a valid Difficulty option." << endl;
        sleep(3);
        cout << "(1)Easy, (2)Medium, (3)Hard, (4)It's All Luck Anyway?" << endl;
        getline(cin, Difficulty);
    }
}

