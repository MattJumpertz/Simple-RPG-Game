void Player::Flee()
{
	cout << "You see an opportunity to flee from the battle!" << endl;
	cout << "Would you like to flee?" endl << "1: Flee" << endl << "2: Fight" << endl;
	cin >> choice;

	if (choice == "1")
	{
		End();
	}

	if (choice == "2")
	{
		Attack();
	}
	
	system("CLS");
}

void Player::End()
{
	cout << "You have chosen to flee the fight." << endl;
	cout << "Shame, you were shaping into a worthy fighter! The King will be very dissapointed in you." << endl;
	cout << "A true Hero would fight until death!" << endl;
	 system("CLS");
}