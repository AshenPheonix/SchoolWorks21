#include "CinReader.h"
#include "activator.h"

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

CinReader reader;

unsigned int getPasscode (unsigned int whichCode);
unsigned int hashEarth (string s);
unsigned int hashBigRedButton (string s);
void clearScreen ();
void keyPause (string prompt="PRESS ENTER TO CONTINUE");

/* for unit testing -- do not alter */
const unsigned int PRIME_TESTS = 5;
const unsigned int SUM_TESTS = 5;
template <typename X, typename A>
void btassert(A assertion);
unsigned int unittest ();

int main ()
{
	clearScreen();
	
	cout << "Finally, in the orbital station above Earth...\n\n";
	cout << "Still looks like a big blue ball, so that's good news.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "So, you have three keys. One more to go and you can\n";
	cout << "activate the Mega Weapon and rid the Earth of OKRA.\n\n";
	cout << "Two more to go and you can push that big red button that\n";
	cout << "will launch the weapon. No pressure.\n\n";
	
	keyPause("PRESS ENTER TO UPLOAD YOUR ACTIVATOR CODE");
	clearScreen();
	
	unsigned int testsPassed = unittest();
	
	keyPause();
	clearScreen();
	
	if (testsPassed >= PRIME_TESTS)
	{
		cout << "You've done it! Well, at least part of it.\n\n";
		cout << "Let's hope you don't leave it for some other poor sap\n";
		cout << "to finish for you.\n\n";
		
		cout << "Get that EARTH KEY, champ.\n\n";
		
		unsigned int passcode = 0;
		while (passcode == 0)
			passcode = getPasscode(1);
		
		keyPause();
		clearScreen();
		
		cout << "Your EARTH KEY: " << passcode << "\n\n";
		
		keyPause();
		clearScreen();
		
		if (testsPassed == (PRIME_TESTS+SUM_TESTS))
		{
			cout << "You are a total hero, algorithmically speaking.\n\n";
			cout << "BIG RED BUTTON KEY on its way...\n\n";
			
			passcode = 0;
			while (passcode == 0)
				passcode = getPasscode(2);
				
			keyPause();
			clearScreen();

			cout << "Your BIG RED BUTTON KEY: " << passcode << "\n\n";
		}
	}
	else
	{
		cout << "These results are not, umm, positive.\n\n";
		cout << "Oh well. Someone else can save Earth, right?\n\n";
	}
	
	keyPause();
	clearScreen();
	
	cout << "So this is it. The Mega Weapon will either work\n";
	cout << "(because of your heroic efforts) or it will not\n";
	cout << "(because of your epic failure)...\n\n";
	cout << "Find the Mega Weapon object file and compile it.\n\n";
	
	keyPause("PRESS ENTER WHEN READY TO INITIALIZE THE MEGA WEAPON");
	clearScreen();
	
	return 0;
}

/*
 * Unit testing functions. Do not alter.
 */

unsigned int unittest ()
{
	unsigned int testsPassed = 0;
	Activator a;
	
	cout << "\nTEST :: ACTIVATOR\n\n";

	try {
		btassert<bool>(a.getPrime(12345) == 132241);
		cout << "Passed TEST 1: getPrime \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 1: getPrime #\n";
	}
	
	try {
		btassert<bool>(a.getPrime(29) == 109);
		cout << "Passed TEST 2: getPrime \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 2: getPrime #\n";
	}
	
	try {
		btassert<bool>(a.getPrime(503) == 3593);
		cout << "Passed TEST 3: getPrime \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 3: getPrime #\n";
	}
	
	try {
		btassert<bool>(a.getPrime(5333) == 52163);
		cout << "Passed TEST 4: getPrime \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 4: getPrime #\n";
	}
	
	try {
		btassert<bool>(a.getPrime(8719) == 90023);
		cout << "Passed TEST 5: getPrime \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 5: getPrime #\n";
	}
	
	try {
		btassert<bool>(a.sumTheDigits(0) == 0);
		cout << "Passed TEST 6: sumTheDigits \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 6: sumTheDigits #\n";
	}
	
	try {
		btassert<bool>(a.sumTheDigits(19) == 1);
		cout << "Passed TEST 7: sumTheDigits \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 7: sumTheDigits #\n";
	}
	
	try {
		btassert<bool>(a.sumTheDigits(88) == 7);
		cout << "Passed TEST 8: sumTheDigits \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 8: sumTheDigits #\n";
	}
	
	try {
		btassert<bool>(a.sumTheDigits(888) == 6);
		cout << "Passed TEST 9: sumTheDigits \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 9: sumTheDigits #\n";
	}
	
	try {
		btassert<bool>(a.sumTheDigits(8888) == 5);
		cout << "Passed TEST 10: sumTheDigits \n";
		testsPassed++;
	} catch (bool b) {
		cout << "# FAILED TEST 10: sumTheDigits #\n";
	}
	
	cout << "\nTEST ACTIVATOR :: COMPLETE\n\n";
	
	return testsPassed;
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
		throw X();
}

unsigned int getPasscode (unsigned int whichCode)
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
				if (whichCode == 1)
					return hashEarth(names[i]);
				else if (whichCode == 2)
					return hashBigRedButton(names[i]);
			}
		}
	}
	
	cout << "\nHmmm... did not find you in the list of would-be heroes.\n\n";
	
	keyPause("PRESS ENTER TO TRY AGAIN");
	
	return 0;
}

unsigned int hashEarth (string s)
{
	unsigned int hash = static_cast<unsigned int>(s.length());
	for(unsigned int i=0; i<s.length(); i++)
	{
		hash = ((hash << 5) ^ (hash >> 27)) ^ s[i];
	}
	return hash;
}

unsigned int hashBigRedButton (string s)
{
	const unsigned int fnv_prime = 0x811C9DC5;
	unsigned int hash = 0;
	for(unsigned int i=0; i<s.length(); i++)
	{
		hash *= fnv_prime;
		hash ^= s[i];
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