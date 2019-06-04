/*
 * bstslib.cpp
 *
 *  Created on    :  Sep 11, 2013
    Edited last on: March 3, 2014
 *      Author: Brandon Porter
 */

#include "bstdlib.h"

BStdLib::BStdLib()//constructor, as most of these will be changed with the calling of the function that uses them, most are redundant.
{
}

void BStdLib::stall()
{
    string lag;
	cout << "Press enter to continue";// lag is a string, automatically constructed and thus not found there. It is a place holder
	cin.sync();
	getline(cin, lag);
}

void BStdLib::clearScreen()//basic clear screen for terminal use.
{
#ifdef WIN32// if a windows box.
	system("cls");// cls
#else //otherwise
	system("clear");//clear
#endif
}

char BStdLib::checkChar(string range)
{
    string test;

    cin.sync();    
    getline(cin, test);//get a test string, strings hold anything so this is a fair holding location until the test is finished.
	
	if(test.length()!=1)//if the string is not a single character
	{
		cout << "Improper size, please enter a single character" << endl;//print this, run program again.
		return checkChar(range);
	}

	for (unsigned int i(0);i < range.length(); i++)//for all characters in the allowed range, test against entry.
	{
		if (range[i]==test[0])//if they match, return value.
			return test[0];
	}
	cout << "Answer not in range. Please try again" << endl;//or request a proper entry, rerunning the function.
	return checkChar(range);
}

int BStdLib::checkInt(bool negatives)
{
    string catcher;
	
	cin.sync();
	getline(cin,catcher);//get a test string, strings hold anything so this is a fair holding location until the test is finished.

	stringstream test(catcher);
	
    int returned(0);
    test.exceptions(ios_base::failbit);
    try
    {
        test >> returned;
    }
    catch(ios_base::failure f)
    {
        cout << "Not an integer, try again";
        checkInt(negatives);
    }
    
    if(returned < 0 && (!negatives))
    {
        cout << "No negative numbers please." << endl;
        checkInt(negatives);
    }
    
	return returned;//it's got to be an integer. return it.
}

double BStdLib::checkDouble(bool negatives)
{
  	string catcher;
	
    cin.sync();
	getline(cin,catcher);//get a test string, strings hold anything so this is a fair holding location until the test is finished.

	stringstream test(catcher);
    double returned(0);
    
    test.exceptions(ios_base::failbit);
    try
    {
        test >> returned;
    }
    catch(ios_base::failure f)
    {
        cout << "Not a floating point number, try again";
        checkInt(negatives);
    }
    
    if(returned < 0 && (!negatives))
    {
        cout << "No negative numbers please." << endl;
        checkDouble(negatives);
    }
    
	return returned;
}

string BStdLib::checkString()
{
    string test;
    cin.sync();
    getline(cin, test);//get string.
    return test;//return it.
}

void Debug::debLoc()
{
    if(run){
        cout << "here" << endl;//displays "here" and stalls the program, for debugging.
        caster.stall();
    }
}

Debug::Debug()
    :run(true){/*left empty*/}
    
void Debug::flip(){
    run=false;
}
/*
void Debug::debLoc(char key)
{
  cout << "here " << key << endl;//again, this time with the char indicated with "key" for multiple uses of the stall.
  caster.stall();
}

void Debug::debLoc(int key)
{
  cout << "here " << key << endl;//same, integers instead
  caster.stall();
}

void Debug::debLoc(string key)
{
	cout << "here" << key << endl;//same, string used
	caster.stall();
}

void Debug::debOne(string key)
{
	cout << "\""<< key << "\" string here";//tracks a value, key, for use in debugging.
	caster.stall();
}

void Debug::debOne(int key)
{
	cout << "#(" << key << ") int here";//tracks a value, key, for debugging.
	caster.stall();
}

void Debug::debOne(char key)
{
	cout << "\'" << key << "\' char here";//tracks a value, key, for debugging.
	caster.stall();
}

void Debug::debOne(double key)
{
	cout << "# (" << key << ") double here";//tracks a value, key, for debugging.
	caster.stall();
}

void Debug::debTwo(string a, string b)
{
	cout << "string \"" << a << "\"\n\"" << b << "\"" << endl;//tracks two values, a and b, for debugging.
	caster.stall();
}

void Debug::debTwo(int a, int b)
{
	cout << "string \"" << a << "\"\n\"" << b << "\"" << endl;//tracks two values, a and b, for debugging.
	caster.stall();
}

void Debug::debTwo(double a, double b)
{
	cout << "string \"" << a << "\"\n\"" << b << "\"" << endl;//tracks two values, a and b, for debugging.
	caster.stall();
}
*/
