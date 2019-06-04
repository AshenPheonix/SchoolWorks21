#include "CinReader.h"
#include "rocketship.h"

#include <algorithm>
#include <iostream>
using namespace std;

CinReader reader;

unsigned int getPasscode ();
unsigned int hashSaturn (string s, unsigned int mod);
void clearScreen ();
void keyPause (string prompt="PRESS ENTER TO CONTINUE");

/* for unit testing -- do not alter */
const unsigned int TOTAL_NUM_TESTS = 3;
template <typename X, typename A>
void btassert(A assertion);
unsigned int unittest ();

int main ()
{
	clearScreen();
	
	cout << "Welcome to Saturn!\n\n";
	cout << "You made it, which means you have built yourself a rocket ship.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "It would be wise to have a shakedown cruise before moving on.\n\n";
	cout << "By shakedown cruise, I mean I will try everything I can to break\n";
	cout << "your little rocket ship.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "Hopefully I cannot. If I can break something built from those simple\n";
	cout << "specifications, I would NOT recommend you trying to fly it to Earth.\n\n";
	
	cout << "Ready to give it a try?\n\n";
	
	keyPause("PRESS ENTER TO START TEST FLIGHT");
	clearScreen();
	
	unsigned int testsPassed = unittest();
	
	keyPause();
	clearScreen();
	
	if (testsPassed == TOTAL_NUM_TESTS)
	{
		cout << "That is a huge, huge relief... your ship completed its test flight\n";
		cout << "and we have it back in one piece. Not that I did not trust your skills...\n\n";
		cout << "Well, let us be honest... I did not trust your skills.\n\n";
		cout << "All in the past, I say! No hard feelings?\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "You pressed enter. I guess you have recovered from the emotional trauma\n";
		cout << "caused by my lack of faith in you.\n\n";
		cout << "So...sittin' here on Saturn, hopin' to get to Jupiter...\n\n";
		cout << "Hold it -- are my words pure gold for a country song or what?\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "...incoming transmission from Earth\n\n";
		cout << "To:      Captain, RS PuddleJumper\n";
		cout << "From:    Home Base, Earth\n";
		cout << "Subject: Mega Weapon and Passcode\n\n";
		cout << "\tCaptain, we have developed a new Mega Weapon\n";
		cout << "\tto eliminate the OKRA menace on Earth.\n\n";
		cout << "\tTo ensure the security of the Mega Weapon,\n";
		cout << "\tyou will need a series of passcodes to engage.\n\n";
		cout << "\tPasscodes are hashes of the names of our would-be heroes.\n\n";
		cout << "\tPlease safeguard these passcodes.\n\n";
		cout << "\t-MoTU\n\n";
		
		keyPause();
		clearScreen();
		
		unsigned int passcode = 0;
		while (passcode == 0)
			passcode = getPasscode();
		
		keyPause();
		clearScreen();
		
		cout << "Your SATURN KEY: " << passcode << "\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "Right. Back to the task at hand. If you are to get to Jupiter, you are going to\n";
		cout << "need a LOT more fuel capacity. Which means time to upgrade your rocketship.\n\n";
		cout << "I know, still has that \"new rocket ship\" smell and already we want upgrades?\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "-- START RocketShip update specification --\n\n";
		cout << "\tnew private data members\n";
		cout << "\t\tvector<unsigned int> fuelCells\n\n";
		cout << "\tnew public function interface\n";
		cout << "\t\tvoid addFuelCell(unsigned int fuelAmount)\n";
		cout << "\t\tbool removeFuelCell(unsigned int cellNumber)\n\n";
		cout << "\t\tbool addFuelToCell(unsigned int cellNumber,\n";
		cout << "\t\t                   unsigned int fuelAmount)\n\n";
		cout << "\t\tstring burnFuel(unsigned int cellNumber)\n\n";
		cout << "-- END RocketShip update specification --\n\n";

		keyPause();
		clearScreen();

		cout << "I know what you are thinking. Could I be a bit more specific about the upgrades?\n\n";
		cout << "OK big baby. Here are a few more details...\n\n";
		cout << "You probably want to stretch your console view so you can see the spec\n";
		cout << "I am sending you.\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "-- START RocketShip update specification --\n\n";
		cout << "\tnew private data members\n";
		cout << "\t\tvector<unsigned int> fuelCells\n";
		cout << "\t\t-- each element of the vector represents a fuel cell --\n";
		cout << "\t\t-- with a specific amount (unsigned int) of fuel --\n\n";
		cout << "\tnew public function interface\n";
		cout << "\t\tvoid addFuelCell(unsigned int fuelAmount)\n";
		cout << "\t\t-- add a new element to fuelCells to contain fuelAmount --\n\n";
		cout << "\t\tbool removeFuelCell(unsigned int cellNumber)\n";
		cout << "\t\t-- removes the specified cell (0-indexed) from fuelCells --\n\n";
		cout << "\t\tbool addFuelToCell(unsigned int cellNumber,\n";
		cout << "\t\t                   unsigned int fuelAmount)\n";
		cout << "\t\t-- add fuelAmount to the specified fuelCell (0-indexed) --\n\n";
		cout << "\t\tstring burnFuel(unsigned int cellNumber)\n";
		cout << "\t\t-- zero out/burn all of the fuel in the specified cell (0-indexed) --\n";
		cout << "\t\t-- returns a string of asterisks representing the fuel in the cell --\n\n";
		cout << "-- END RocketShip specification --\n\n";
		
		keyPause();
		clearScreen();

		cout << "This should be enough to get you to Jupiter.\n";
		cout << "Find the Jupiter object file and compile your upgraded rocket ship in.\n\n";
		cout << "I believe in you, Captain.\n\n";

		keyPause();
		clearScreen();
		
		cout << "There I go again. To be honest,\n";
		cout << "I don't know if I \"believe\" in you,\n";
		cout << "but you seem like the kind of person who needs reassurance.\n\n";
		
		keyPause();
		clearScreen();

		cout << "That is all I have for you now. See you on Jupiter.\n\n";

		keyPause("PRESS ENTER TO DEPART FOR JUPITER");
		clearScreen();
	}
	else
	{
		cout << "Umm, sorry about this. We broke your ship.\n\n";
		cout << "On the up side, you were not in it. On the down side\n";
		cout << "you no longer have a ship.\n\n";
		cout << "On the down down side, the Earth folks were kind of planning\n";
		cout << "for your arrival. Alien invasion and all.\n\n";
		cout << "I recommend you rebuild fast and get back to your \"grand adventure\"!\n\n";
		keyPause();
	}
	
	return 0;
}

/*
 * Unit testing functions. Do not alter.
 */

unsigned int unittest ()
{
	unsigned int testsPassed = 0;
	RocketShip ship;
	
	cout << "\nTEST FLIGHT :: BASIC ROCKET SHIP\n\n";

	try {
		btassert<bool>(ship.getName() == "RS NullPointer" && ship.getFuel() == 1000);
		cout << "Passed TEST 1: constructor \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 1: constructor #\n";
	}
	
	ship.setName("RS PuddleJumper");
	try {
		btassert<bool>(ship.getName() == "RS PuddleJumper");
		cout << "Passed TEST 2: setName/getName \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 2: setName/getName #\n";
	}
	
	ship.setFuel(9999);
	try {
		btassert<bool>(ship.getFuel() == 9999);
		cout << "Passed TEST 3: setFuel/getFuel \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 3: setFuel/getFuel #\n";
	}
	
	cout << "\nTEST FLIGHT :: COMPLETE\n\n";
	
	return testsPassed;
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
		throw X();
}

unsigned int getPasscode ()
{
	unsigned int numNames = 22;
	static string names[22] = {
		"MATT_CERVANTES", "BOYD_TROLINGER", "RICK_ARRIOLA", 
		"ROBERT_BISHOP", "SEBASTIAN_BRENTON", "DAVID_CATHERS", "DOMINIC_DAMBROGIA", 
		"TALEA_MITCHELL", "KEVAN_JOHNSON", "JACOB_KUSS", "LOVODI_LEE", 
		"MATTHEW_LINDSTROM", "ROBERT_MCANULTY", "BRANDON_PORTER", "STACY_RIOS", 
		"ANTHONY_ROGERS", "DAVID_SIDES", "JACOB_SLATON", "SARA_TAYLOR", 
		"DONALD_WILEY", "WALTER_WINSER", "CHEE_XIONG"
	};
	
	clearScreen();
	
	cout << "Please enter your last name, captain: ";
	string lastname = reader.readString();
	transform(lastname.begin(), lastname.end(),  lastname.begin(), ::toupper);
	
	for (unsigned int i=0; i<numNames; i++)
	{
		if (names[i].find(lastname) != string::npos)
		{
			cout << "\n" << names[i] << " -- is this you (y/n)? ";
			if (toupper(reader.readChar("YyNn")) == 'Y')
			{
				cout << endl;
				return hashSaturn(names[i], 100000000);
			}
		}
	}
	
	cout << "\nHmmm... did not find you in the list of would-be heroes.\n\n";
	
	keyPause("PRESS ENTER TO TRY AGAIN");
	
	return 0;
}

unsigned int hashSaturn (string s, unsigned int mod)
{
	unsigned int sum = 0;
	for (unsigned int i=0; i<s.length(); i++)
		sum += s[i];
	return (sum % mod);
}

void keyPause (string prompt)
{
	cout << prompt;
	reader.readString();
}

void clearScreen ()
{
#ifdef WIN32
	system("cls");
#else
	system("clear");
#endif
}