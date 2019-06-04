#include "CinReader.h"
#include "rocketship.h"

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

CinReader reader;

unsigned int getPasscode ();
unsigned int hashJupiter (string s, unsigned int mod);
void clearScreen ();
void keyPause (string prompt="PRESS ENTER TO CONTINUE");

/* for unit testing -- do not alter */
const unsigned int TOTAL_NUM_TESTS = 9;
template <typename X, typename A>
void btassert(A assertion);
unsigned int unittest ();

int main ()
{
	clearScreen();
	
	cout << "Welcome to Jupiter!\n\n";
	cout << "The \"no one stare at the big blemish\" planet.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "Entering Federation Space...\n\n";
	cout << "Not really. I just thought that would sound cool.\n\n";
	cout << "We need to test your new fuel cells -- wouldn't want\n";
	cout << "to run out of gas on the way to Mars, would we?\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "And by \"we\" I mean you. I don't actually care that much.\n\n";
	cout << "After all, I'm just a disembodied voice.\n\n";
	cout << "But then who would I talk to?\n\n";
	cout << "You got me. Let's test those fuel cells.\n\n";
	
	keyPause("PRESS ENTER TO START FUEL CELL TEST");
	clearScreen();
	
	unsigned int testsPassed = unittest();
	
	keyPause();
	clearScreen();
	
	if (testsPassed == TOTAL_NUM_TESTS)
	{
		cout << "Aren't you the fuel cell expert.\n\n";
		cout << "You really vectored in on that solution...\n\n";
		cout << "Not funny? A little funny?\n\n";
		cout << "Bah, what do you know anyway (beyond your fuel cell expertise,\n";
		cout << "of course)?\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "You pressed enter. I assume that means you are eager for another\n";
		cout << "dose of my, what critics have called, \"exceptional observational\n";
		cout << "wit\".\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "Umm, shit, I got nothin'.\n\n";
		cout << "How about you grab that passcode for the Mega Weapon,\n";
		cout << "and I will observe (exceptionally) and then share some\n";
		cout << "of my wit (no doubt related to your \"foibles\").\n\n";
		
		keyPause();
		clearScreen();
		
		unsigned int passcode = 0;
		while (passcode == 0)
			passcode = getPasscode();
		
		keyPause();
		clearScreen();
		
		cout << "Your JUPITER KEY: " << passcode << "\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "OK, I assume you are finished with your little vacation.\n\n";
		cout << "Yes, I did see you lift your fingers from your console.\n\n";
		cout << "I guess Earth will just have to wait. I'll queue up the\n";
		cout << "Jeopardy! music, while your highness rests.\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "Done? Are you sure? Need a massage?\n\n";
		cout << "I saw that -- you furrowed your brow.\n\n";
		cout << "OK then, brow furrower, I'll let you in on a little secret...\n\n";
		cout << "Your ship is too big, too generalized, if you will, to make the\n";
		cout << "Mars run. You're going to need something a little more specialized\n";
		cout << "(invisible might be good).\n\n";
		cout << "Did you see what I did there? I made some references to inheritance!\n\n";
		cout << "Perhaps you didn't catch them... I guess we're about to find out.\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "First, another update for your rocket ship.\n\n";
		cout << "-- START RocketShip update specification --\n\n";
		cout << "\tnew public function interface\n";
		cout << "\t\toverloaded constructor (string newName, unsigned int newFuel)\n\n";
		cout << "\tconvert private access modifier to protected\n";
		cout << "\t-- Ask yourself, why would you need to do this? --\n\n";
		cout << "-- END RocketShip update specification --\n\n";
		
		keyPause();
		clearScreen();
		
		cout << "-- START SpecialRocketShip specification --\n\n";
		cout << "\tbase class\n";
		cout << "\t\tRocketShip\n\n";
		cout << "\tprivate data members\n";
		cout << "\t\tcloaked, bool\n\n";
		cout << "\tpublic function interface\n";
		cout << "\t\tdefault constructor (initial values \"RS Cloaky\", 1000, false)\n\n";
		cout << "\t\tsetCloaked, getCloaked\n\n";
		cout << "-- END SpecialRocketShip specification --\n\n";

		keyPause();
		clearScreen();

		cout << "Too easy?\n\n";
		cout << "I can make it more difficult if you like.\n\n";
		cout << "Instead, what's say we save all of that energy\n";
		cout << "for the big battle ahead, stud.\n\n";

		keyPause();
		clearScreen();

		cout << "Next stop, Mars. You'll find allies there.\n\n";
		cout << "Probably doesn't surprise you that they are likely\n";
		cout << "to require a demonstration of your new special rocket ship.\n\n";

		keyPause();
		clearScreen();
		
		cout << "Well, maybe not \"allies\",\n";
		cout << "I would think of them more as \"obstacles\".\n\n";
		cout << "At least Mars gets you one step closer...\n\n";
		
		keyPause();
		clearScreen();

		cout << "Find the Mars object file and compile your special rocket ship in.\n\n";
		cout << "That is all I have for you now. See you on Mars.\n\n";

		keyPause("PRESS ENTER TO DEPART FOR MARS");
		clearScreen();
	}
	else
	{
		cout << "Umm, your fuel cell upgrade does not seem to work.\n\n";
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
	RocketShip ship;
	
	cout << "\nTEST FUEL CELLS :: UPGRADED ROCKET SHIP\n\n";

	try {
		btassert<bool>(ship.getName() == "RS NullPointer" && ship.getFuel() == 1000);
		cout << "Passed TEST 1: constructor \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 1: constructor #\n";
	}
	
	ship.setName("RS FuelGuzzler");
	try {
		btassert<bool>(ship.getName() == "RS FuelGuzzler");
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
	
	ship.addFuelCell(10);
	try {
		btassert<bool>(ship.burnFuel(0) == "**********");
		cout << "Passed TEST 4: addFuelCell/burnFuel \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 4: addFuelCell/burnFuel #\n";
	}
	
	try {
		btassert<bool>(ship.addFuelToCell(0, 5) == true && ship.burnFuel(0) == "*****");
		cout << "Passed TEST 5: addFuelToCell/burnFuel \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 5: addFuelToCell/burnFuel #\n";
	}
	
	cout << "\nSTRESS TESTS\n\n";
	
	try {
		btassert<bool>(ship.removeFuelCell(0) == true && ship.burnFuel(0) == "");
		cout << "Passed TEST 6: removeFuelCell/burnFuel \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 6: removeFuelCell/burnFuel #\n";
	}
	
	try {
		btassert<bool>(ship.burnFuel(1) == "");
		cout << "Passed TEST 7: burnFuel (nonexistent cell) \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 7: burnFuel (nonexistent cell) #\n";
	}
	
	try {
		btassert<bool>(ship.addFuelToCell(1, 1) == false);
		cout << "Passed TEST 8: addFuelToCell (nonexistent cell) \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 8: addFuelToCell (nonexistent cell) #\n";
	}
	
	try {
		btassert<bool>(ship.removeFuelCell(1) == false);
		cout << "Passed TEST 9: removeFuelCell (nonexistent cell) \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 9: removeFuelCell (nonexistent cell) #\n";
	}
	
	cout << "\nTEST FUEL CELLS :: COMPLETE\n\n";
	
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
				return hashJupiter(names[i], 100000000);
			}
		}
	}
	
	cout << "\nHmmm... did not find you in the list of would-be heroes.\n\n";
	
	keyPause("PRESS ENTER TO TRY AGAIN");
	
	return 0;
}

unsigned int hashJupiter (string s, unsigned int mod)
{
	unsigned int strlen = s.length() / 4;
 	int sum = 0;
	for (unsigned int i=0; i<strlen; i++)
	{
 		string temp = s.substr(i*4, (i*4)+4);
		unsigned int mult = 1;
		for (unsigned int j=0; j < temp.length(); j++)
		{
			sum += temp[j] * mult;
			mult *= 256;
		}
	}

	return (abs(sum) % mod);
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
