#include "Sword.hpp"

//Sword Constructor States Default variables for weapons
Sword::Sword()
{
	Damage = 3;
	ExtraDamage = 3;
	ChanceToHit = 50;
	Name = "Sword";
}

//Output function
void Sword::Output()
{
    //Checks if the Sword hit
    if (Result > 0)
    {
         cout << "'Swing' You did " << Result << " damage with your Sword!" << endl;
         HealthCalc();
         Monster::Output();
         
     }
}