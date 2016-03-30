//
//  Player.cpp
//  Assignment
//
//  Created by Matthaeus Jumpertz on 17/03/2016.
//  Copyright © 2016 Matthaeus Jumpertz. All rights reserved.
//

#include "Player.hpp"

//Player Choice function
void Player::Choice()
{
    //Check which class the player wants to use as their primary (which class will always go first)
    cout << "You have the choice to play as an Archer and a Swordsman." << endl;
    sleep(3);
    cout << "The Archer has two weapons, a Bow and a Crossbow." << endl;
    sleep(3);
    cout << "The Swordsman also has two weapons, a Dagger and a Sword." << endl;
    sleep(3);
    cout << endl << "Which Class would you like as your Primary?" << endl;
    cout << "(1)Archer or (2)Swordsman" << endl;
    getline(cin, PlayerChoice);
    
    if (PlayerChoice == "1")
    {
        cout << "Your primary class is an Archer." << endl;
        sleep(3);
        cout << "Along your journey will be your trusty friend the Potion Thrower." << endl;
        sleep(3);
        cout << "The Potion Thrower is sometimes very clumsy though, so be prepared for the worst!" << endl;
        sleep(5);
        
        
    }
    
    if (PlayerChoice == "2")
    {
        cout << "Your primary class is a Swordsman." << endl;
        sleep(3);
        cout << "Along your journey will be your trusty friend the Potion Thrower." << endl;
        sleep(3);
        cout << "The Potion Thrower is sometimes very clumsy though, so be prepared for the worst!" << endl;
        sleep(5);
    }

}

//Introduciton function
void Player::Intro()
{
    
    //Output a simple intro to the game. Gives simple controls/instructions and a background to the game
    cout << "This is a simple RPG Game made in C++." << endl;
    sleep(3);
    cout << "This game will allow you to control two Characters." << endl;
    sleep(3);
    cout << "This game uses an input by you, the player, in order to run." << endl;
    sleep(3);
    cout << "If an option has a '(1)' around it, then type '1' into the console to access that option." << endl;
    sleep(3);
    cout << "This will also work for any number if there is an option equivalent." << endl;
    sleep(5);
    cout << endl << "Welcome to Runeterra!" << endl;
    sleep(3);
    cout << "Runeterra is a very dangerous place for someone like you to be wandering around in the jungle." << endl;
    sleep(3);
    cout << "Runeterra is filled with evil villains and dangerous monsters that everyone should be wary of." << endl;
    sleep(3);
    cout << "Lets see if you manage to make it out of the forest alive or if you shall perish like many before you!" << endl<< endl;
    sleep(3);

}

//Encounter function
void Player::Encounter()
{
    //Exp is equal to the health of the Monster. i.e Higher Difficulty gives more experience
    Exp = MonsterHealth;

//goto reciever
PlayAgain:
    cout << endl << "HWOOOOAAAARRR!" << endl;
    sleep(3);
    cout << "Oh no! A Giant Wolf has attempted to attack you!" << endl;
    sleep(3);
    cout << "Will you (1)Fight the Giant Wolf or (2)Flee from battle?" << endl;
    getline(cin, FightorFlee);
    
    //Allow the user to fight or flee the battle
    while (FightorFlee != "1" && FightorFlee != "2")
    {
        cout << "Will you (1)Fight the bunny rabbit or (2)Flee from battle?" << endl;
        getline(cin, FightorFlee);
    }
    
    //If the player chooses to fight.
    if (FightorFlee == "1")
    {
        //Checks what the user has chosen as their primary class, that class will go first
        if (PlayerChoice == "1")
            {
                while (Running == true){
                    
                    Archer Player1;
                    Player1.Archer::Attack();
                    
                    //Check between weapons if the Monster has died
                    if (MonsterHealth <= 0)
                    {
                        Running = false;
                        break;
                    }
                   
                    Swordsman Player2;
                    Player2.Swordsman::Attack();
                    
                    if (MonsterHealth <= 0)
                    {
                        Running = false;
                        break;
                    }
                    
                    PotionThrower Player3;
                    Player3.Weapon::Attack();
                    Player3.Output();
                    
                    Running = false;
                }
                
                //Once the monster has iether been killed or the player has been killed
                while (Running == false)
                {
                    //If the Monster's Health is less than or equal to 0 than the player has survived
                    if (MonsterHealth <= 0)
                    {
                        cout << "You have survived that enocuter, perhaps raise the difficulty?" << endl;
                        cout << "You have gained " << Exp << " experience." << endl;
                        //Run the Experience function to output total experience
                        Experience();
                        //Store total experience and level into a .txt document to access it even after the game has closed. This allows the player to somewhat save their progress.
                        ExperienceStorage();
                        cout << endl;
                    }
                    
                    //If the Monster Health is greater than 0 then the player has died.
                    if (MonsterHealth > 0)
                    {
                        cout << "You have died..." << endl;
                        sleep (3);
                        cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                        //Check if the player would like to try again
                        cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                        getline(cin, PlayAgain);
                        
                        //If they chose yes
                        if (PlayAgain == "1")
                        {
                            //goto function to restart this encounter
                            goto PlayAgain;
                        }
                        //If they chose no
                        if (PlayAgain == "2")
                        {
                            //exit function to exit the program.
                            exit(0);
                        }
                        
                        //Debug
                        if (PlayAgain != "1" && PlayAgain != "2")
                        {
                            cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                            cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                            getline(cin, PlayAgain);
                        }
                        
                    }
                    
                    break;
                }
            }
        //Exactly the same thing but this time if they chose the Swordsman as their main class.
        if (PlayerChoice == "2")
        {
            while (Running == true)
            {
                Swordsman Player2;
                Player2.Swordsman::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
            
                Archer Player1;
                Player1.Archer::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
                
                PotionThrower Player3;
                Player3.Weapon::Attack();
                Player3.Output();
                
                Running = false;
            }
            while (Running == false)
            {
                if (MonsterHealth <= 0)
                {
                    cout << "You have survived that enocuter, perhaps raise the difficulty?" << endl;
                    cout << "You have gained " << Exp << " experience." << endl;
                    Experience();
                    ExperienceStorage();
                    cout << endl;
                    
                }
                
                if (MonsterHealth > 0)
                {
                    cout << "You have died..." << endl;
                    sleep (3);
                    cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                    cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                    getline(cin, PlayAgain);
                    
                    if (PlayAgain == "1")
                    {
                        goto PlayAgain;
                    }
                    
                    if (PlayAgain == "2")
                    {
                        exit(0);
                    }
                    
                    if (PlayAgain != "1" && PlayAgain != "2")
                    {
                        cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                        cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                        getline(cin, PlayAgain);
                    }
                    
                }
                
                break;
            }
        }
    }
    
    if (FightorFlee == "2")
    {
        cout << "A cowards descision. The Giant Wolf decides to leave you alone. It appears he doesn't want a cat for dinner." << endl;
        exit(0);
        
    }
    
    
}

//Encounter 2 function. Exactly the same as the first encounter but this time a different enemy.
void Player::Encounter2()
{
    Exp = MonsterHealth;
    
PlayAgain:
    
    Running  = true;
    cout << endl << "Graaaaaarr!" << endl;
    sleep(3);
    cout << "Haha! A little bunny rabbit has jumped out in fornt of you." << endl;
    sleep(3);
    cout << "Will you (1)Fight the bunny rabbit or (2)Flee from battle?" << endl;
    getline(cin, FightorFlee);
    
    while (FightorFlee != "1" && FightorFlee != "2")
    {
        cout << "Will you (1)Fight the bunny rabbit or (2)Flee from battle?" << endl;
        getline(cin, FightorFlee);
    }
    
    if (FightorFlee == "1")
    {
        cout << "OOOHHH MMMYYYY GGGGOOOODDDDDDDD! Your glasses were broken, that is one giant flesh eating rabbit! Lucky you chose to fight." << endl;
        
        //Primary classes
        if (PlayerChoice == "1")
        {
            while (Running == true){
                
                Archer Player1;
                Player1.Archer::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
                
                Swordsman Player2;
                Player2.Swordsman::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
                
                PotionThrower Player3;
                Player3.Weapon::Attack();
                Player3.Output();
                
                Running = false;
            }
            while (Running == false)
            {
                if (MonsterHealth <= 0)
                {
                    cout << "You have survived that enocuter, perhaps raise the difficulty?" << endl;
                    cout << "You have gained " << Exp << " experience." << endl;
                    Experience();
                    ExperienceStorage();
                    cout << endl;
                }
                
                if (MonsterHealth > 0)
                {
                    cout << "You have died..." << endl;
                    sleep (3);
                    cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                    cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                    getline(cin, PlayAgain);
                    
                    if (PlayAgain == "1")
                    {
                        goto PlayAgain;
                    }
                    
                    if (PlayAgain == "2")
                    {
                        exit(0);
                    }
                    
                    if (PlayAgain != "1" && PlayAgain != "2")
                    {
                        cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                        cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                        getline(cin, PlayAgain);
                    }
                }
                
                break;
            }
        }
        
        if (PlayerChoice == "2")
        {
            while (Running == true)
            {
                Swordsman Player2;
                Player2.Swordsman::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
                
                Archer Player1;
                Player1.Archer::Attack();
                
                if (MonsterHealth <= 0)
                {
                    Running = false;
                    break;
                }
                
                PotionThrower Player3;
                Player3.Weapon::Attack();
                Player3.Output();
                
                Running = false;
            }
            while (Running == false)
            {
                if (MonsterHealth <= 0)
                {
                    cout << "You have survived that enocuter, perhaps raise the difficulty?" << endl;
                    cout << "You have gained " << Exp << " experience." << endl;
                    Experience();
                    ExperienceStorage();
                    cout << endl;
                    
                }
                
                if (MonsterHealth > 0)
                {
                    cout << "You have died..." << endl;
                    sleep (3);
                    cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                    cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                    getline(cin, PlayAgain);
                    
                    if (PlayAgain == "1")
                    {
                        goto PlayAgain;
                    }
                    
                    if (PlayAgain == "2")
                    {
                        exit(0);
                    }
                    
                    if (PlayAgain != "1" && PlayAgain != "2")
                    {
                        cout << "Better luck next time. Maybe lower the difficulty?" << endl << endl;
                        cout << "Would you like to try again?" << "(1)Play Again or (2)Exit?" << endl;
                        getline(cin, PlayAgain);
                    }
                    
                }
                
                break;
            }
        }
    
    }
    
    if (FightorFlee == "2")
    {
        cout << "Smart Decision. Who would want to hurt the little bunny rabbBBITY OOHHH MYY GOOODDD. IT TURNED INTO A GIANT CARNIVORE RABBIT! Lucky you walked away just in time though." << endl;
        exit(0);
        
    }
    
}

//Experience function
void Player::Experience()
{
    //Open the Experience.txt file
    ifstream myfile;
    myfile.open("/Volumes/BOTBBB/Assignment/Assignment/Experience.txt");

    //Input the first line into the ExpHolder. This is the Exp that is already saved into the file
    myfile >> ExpHolder;
    
    //Curent Exp is equal to Exp (MonsterHealth) plus ExpHolder (Alread gained Exp)
    Exp = Exp + ExpHolder;
    cout << "Your current Experience is "<< Exp << "." << endl;
    
    //Checks what level they are
    if (Exp >= 100 && Exp < 200 && Level1 == false)
    {
        cout << "You are level 2!" << endl;
        Level1 = true;
        Level = 2;
    }
    
    if (Exp >= 200 && Exp < 300 && Level2 == false)
    {
        cout << "You are level 3!" << endl;
        Level2 = true;
        Level = 3;
    }
    
    if (Exp >= 300 && Exp < 400 && Level3 == false)
    {
        cout << "You are level 4!" << endl;
        Level3 = true;
        Level = 4;
        
    }

    //Close the file.
    myfile.close();
}

//Experience Storage function
void Player::ExperienceStorage()
{
    
    //Open the Experience.txt file
    fstream myfile;
    myfile.open("/Volumes/BOTBBB/Assignment/Assignment/Experience.txt");
    
    
    //Store the Exp and Level into the file. Now the experience can be accessed next time the user plays the game.
    myfile << Exp << endl << Level;
    
    myfile.close();
}







