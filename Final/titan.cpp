#include "CinReader.h"
#include <cstddef>
#include <ctime>
#include <iostream>
using namespace std;

CinReader reader;

void clearScreen ();
void keyPause (string prompt="PRESS ENTER TO CONTINUE");

int main ()
{
	clearScreen();
	
	cout << "...incoming transmission from Earth\n\n";
	keyPause();
	clearScreen();
	
	cout << "To:      Secret Base, Titan\n";
	cout << "From:    Home Base, Earth\n";
	cout << "Subject: Alien Invasion\n\n";
	cout << "\tHELP! Ominous Killing Rampaging Aliens have invaded!\n";
	cout << "\tAble-bodied space travelers needed for part-time work.\n";
	cout << "\tNo experience necessary. Must have own battle-ready rocket ship.\n\n";
	cout << "\tGreat pay (500 BTUs) and benefits (a sense of personal satisfaction).\n";
	cout << "\tIf you are interested, please come to Earth now! Great opportunity!\n\n";
	cout << "\t-MoTU\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "You pressed enter. I can only assume that means you will be traveling to Earth,\n";
	cout << "and will try to save the world from OKRA.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "You pressed enter again! Lusty adventurous soul, you must be!\n";
	cout << "But no rocket ship.\n\n";
	cout << "Of course I remember that at one time you piloted a smuggler ship, but that was\n";
	cout << "long ago...\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "Still pressing enter? Not acquiring a rocket ship?\n";
	cout << "Lusty, adventurous... but lazy?\n\n";
	cout << "Kidding, saver of worlds. Below is a specification.\n";
	cout << "Sorry I do not have one already built for you --\n";
	cout << "you will have to build it yourself.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "I am not really sorry I do not have one already built for you.\n";
	cout << "I was just being nice.\n\n";
	cout << "Seeing as you intend to save Earth, I am certain you enjoy a good challenge\n";
	cout << "anyway.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "-- START RocketShip specification --\n\n";
	cout << "\tprivate data members\n";
	cout << "\t\tname, string\n";
	cout << "\t\tfuel, unsigned int\n\n";
	cout << "\tpublic function interface\n";
	cout << "\t\tdefault constructor (initial values \"RS NullPointer\", 1000)\n";
	cout << "\t\tsetName,getName\n";
	cout << "\t\tsetFuel,getFuel\n\n";
	cout << "-- END RocketShip specification --\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "Rocket ship built? Time to take it to Saturn and test it before you depart\n";
	cout << "on your \"grand adventure\". Probably that is what you are calling it, right?\n";
	cout << "Your \"grand adventure\".\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "How do you test your ship on Saturn, you ask? Find the Saturn object file\n";
	cout << "and compile your rocket ship in. Launch and you will find out if your rocket\n";
	cout << "ship makes the grade.\n\n";
	
	keyPause();
	clearScreen();
	
	cout << "That is all I have for you now. See you on Saturn.\n\n";
	
	keyPause("PRESS ENTER TO DEPART FOR SATURN");
	clearScreen();
	
	return 0;
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