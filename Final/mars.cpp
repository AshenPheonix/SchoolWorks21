#include "CinReader.h"
#include "specialrocketship.h"

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

CinReader reader;

unsigned int getPasscode ();
unsigned int hashMars (string s);
void clearScreen ();
void keyPause (string prompt="PRESS ENTER TO CONTINUE");

/* for unit testing -- do not alter */
const unsigned int TOTAL_NUM_TESTS = 4;
template <typename X, typename A>
void btassert(A assertion);
unsigned int unittest ();

int main ()
{
	clearScreen();
	
	cout << "Welcome to Mars!\n\n";
	cout << "The red planet. The last frontier...\n\n";
	cout << "Stop it, me.\n\n";
	cout << "Sorry about that, off on the Star Trek thing...\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "Think you've got the special rocket ship\n";
	cout << "that is up to this task?\n\n";
	cout << "Let's find out. No monkeying around anymore, jocko.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "The answer to your question, or perhaps to confirm what\n";
	cout << "you are thinking right now...\n\n";
	cout << "Yes, I am tired of talking to you. I have run out of things\n";
	cout << "to say. Perhaps we should take a break from each other.\n\n";
	cout << "Don't cry. It's not you, it's me.\n\n";
	
	keyPause("PRESS ENTER TO START SPECIAL ROCKET SHIP TEST");
	clearScreen();
	
	unsigned int testsPassed = unittest();
	
	keyPause();
	clearScreen();
	
	if (testsPassed == TOTAL_NUM_TESTS)
	{
		cout << "Special ship indeed! That is one cloak-able SOB.\n\n";
		cout << "Not that the cloaking matters -- the aliens have\n";
		cout << "high powered detector thingies, or scanner thingies,\n";
		cout << "or something like that.\n\n";
		cout << "They'll see you coming from a parsec away.\n\n";
		cout << "But you'll feel safe. Kind of like that feeling of\n";
		cout << "invisibility you have in your car, and you think you can\n";
		cout << "pick your nose and nobody sees?\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "No, of course not. You would never do that.\n\n";
		cout << "But you get my point.\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "While we wait on your passcode, won't you have a Pepsi?\n\n";
		cout << "Or how about a Fresca?\n\n";
		cout << "No? Nothing? Not thirsty?\n\n";
		cout << "Fair enough -- here's your passcode, you camel.\n\n";
		
		keyPause();
		clearScreen();
		
		unsigned int passcode = 0;
		while (passcode == 0)
			passcode = getPasscode();
		
		keyPause();
		clearScreen();
		
		cout << "Your MARS KEY: " << passcode << "\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "On to Earth to face OKRA!\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "I know you're gonna like this.\n\n";
		cout << "Before we leave, we are going to need a couple\n";
		cout << "special algorithms to fire up the Mega Weapon.\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "Awesome, right?\n\n";
		cout << "I knew you'd like it.\n\n";
		cout << "Here come the specs from Earth...\n\n";

		keyPause();
		clearScreen();

		cout << "-- START Activator specification --\n\n";
		cout << "\tprivate data members\n";
		cout << "\t\tnone\n\n";
		cout << "\tpublic function interface\n";
		cout << "\t\tunsigned int getPrime (unsigned int whichPrime)\n";
		cout << "\t\t-- return a prime number in the series of primes, --\n";
		cout << "\t\t-- first prime is 2, second prime is 3, etc. --\n\n";
		cout << "\t\tunsigned int sumTheDigits (unsigned int value)\n";
		cout << "\t\t-- return the sum of the digits in a value --\n";
		cout << "\t\t-- reduced to a single digit --\n";
		cout << "\t\t-- ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9 --\n";
		cout << "-- END Activator specification --\n\n";

		keyPause();
		clearScreen();
		
		cout << "Implement those pups and you'll be ready to go.\n\n";
		
		keyPause();
		clearScreen();

		cout << "Find the Earth object file and compile your activator in.\n\n";
		cout << "On to Earth and (hopefully) the final showdown!\n\n";

		keyPause("PRESS ENTER TO DEPART FOR EARTH ORBITAL STATION");
		clearScreen();
	}
	else
	{
		cout << "Umm, your special rocket ship does not seem to work.\n\n";
		cout << "Back to the drawing board I guess...\n\n";
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
	SpecialRocketShip ship;
	
	cout << "\nTEST :: SPECIAL ROCKET SHIP\n\n";

	try {
		btassert<bool>(ship.getName() == "RS Cloaky" && ship.getFuel() == 1000 && ship.getCloaked() == false);
		cout << "Passed TEST 1: constructor \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 1: constructor #\n";
	}
	
	ship.setName("RS NotCloakied");
	try {
		btassert<bool>(ship.getName() == "RS NotCloakied");
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
	
	ship.setCloaked(true);
	try {
		btassert<bool>(ship.getCloaked() == true);
		cout << "Passed TEST 4: setCloaked/getCloaked \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 4: setCloaked/getCloaked #\n";
	}
	
	cout << "\nTEST SPECIAL ROCKET SHIP :: COMPLETE\n\n";
	
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
				return hashMars(names[i]);
			}
		}
	}
	
	cout << "\nHmmm... did not find you in the list of would-be heroes.\n\n";
	
	keyPause("PRESS ENTER TO TRY AGAIN");
	
	return 0;
}

unsigned int hashMars (string s)
{
	unsigned int bitsInUnsignedInt = (unsigned int)(sizeof(unsigned int) * 8);
	unsigned int threeQuarters = (unsigned int)((bitsInUnsignedInt  * 3) / 4);
	unsigned int oneEighth = (unsigned int)(bitsInUnsignedInt / 8);
	unsigned int highBits = (unsigned int)(0xFFFFFFFF) << (bitsInUnsignedInt - oneEighth);
	unsigned int hash = 0;
	unsigned int test = 0;

	for (unsigned int i=0; i<s.length(); i++)
	{
		hash = (hash << oneEighth) + s[i];
		if ((test = hash & highBits) != 0)
			hash = ((hash ^ (test >> threeQuarters)) & (~highBits));
	}

	return hash;
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