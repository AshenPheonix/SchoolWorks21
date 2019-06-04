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
	cont=false;
	intCont=true;
	dblCont=true;
	point=true;
}

void BStdLib::stall()
{
	cout << "Press enter to continue";// lag is a string, automatically constructed and thus not found there. It is a place holder.
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
	intCont=negatives;//this is for allowing negatives, while allowing the function to rerun if necessary, as well as checking to see if negatives were allowed in the first place.
	getline(cin,test);//get a test string, strings hold anything so this is a fair holding location until the test is finished.
	for (unsigned int i(0); i<test.length(); i++)//checks each character of the string...
	{
		if(!isdigit(test[i]))// to make sure it's a digit.
		{
			if(negatives && i==0 && test[i]=='-')//if negatives are allowed and the first character is a -.
			{
				negatives=false;//turn off future allowances of -
				break;//leave the if
			}
			else if(!intCont)//if negatives were never allowed.
			{
				cout << "Negative numbers not allowed, please try again" << endl;//state such and run function again.
				return checkInt(intCont);
			}
			else
			{
				cout << "Not all numbers, please try again." << endl;//if none of the above, try again.
				return checkInt(intCont);
			}
		}
	}
	return atoi(test.c_str());// if all were passed, it's got to be an integer. return it.
}

double BStdLib::checkDouble(bool negatives)
{
  dblCont=negatives;//for allowing negatives.
  point=true;// and .
  getline(cin,test);//get a test string, strings hold anything so this is a fair holding location until the test is finished.
  for (unsigned int i(0); i < test.length(); i++)// check each character of the string.
  {
	  if(!isdigit(test[i]))// if it isn't a digit.
	  {
		  if(negatives && i==0 && test[i]=='-')// if the first character is a - and negatives are allowed
		  {
			negatives=false;//change it to false to prevent future instances of -
			break;
		  }
		  else if(point && test[i]=='.')//if it's a . for floating numbers
		  {
			point=false;//that's the last point
			break;
		  }
		  else if(!dblCont)// if negatives were not allowed.
		  {
			  cout << "Negative numbers not allowed, please enter another number." << endl;//state and rerun
			  return checkDouble(dblCont);
		  }
		  else
		  {
			cout << "Sorry, you have failed to insert a floating point value. Please try agian." << endl;//otherwise it's not a floating point, rerun.
			return checkDouble(dblCont);
		  }
	  }
  }
  return atof(test.c_str());//return the value
}

string BStdLib::checkString()
{
  getline(cin, test);//get string.
  return test;//return it.
}

void Debug::debLoc()
{
  cout << "here" << endl;//displays "here" and stalls the program, for debugging.
  caster.stall();
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
