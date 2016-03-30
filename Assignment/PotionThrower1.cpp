class PotionThrower : public Weapon
{
	public:
		PotionThrower();
		void Attack();
		void Output();
};

PotionThrower::PotionThrower()
{
	Damage = 1;
	ExtraDamage = 0;
	ChanceToHit = 60;
	ChanceToBackfire = 10; //Chance to backfire, this will heal the enemy for the Result/Damage that would be applied
}

void PotionThrower::Output()
{
	//Standard Output function in my program.
	if (Result > 0)
	{
		cout << "Your Potion Thrower dealt " << Result << " damage." << endl;
	}

	if (Result > 0 && RandNum <= ChanceToBackfire)
	{
		cout << "Unfortunetly your Potion Thrower has thrown the wrong Potion!" << endl;
		cout << "A Healing Potion has been thrown instead!" << "The Monster has been healed for " << Result << " !" << endl;
	}

	else
	{
		cout << "Looks like the Potion Throw has completely missed everything!" << endl;
	}
}

