/*
 * bstdlib.h
 *
 *  Created on:  Sep 11, 2013
    Edited  on: March 3, 2014
 *      Author: brandon
 */
#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

/*  Mostly obsolete with CinReader, but I had already finished them and didn't want to just delete them. 
    Now mostly for stall and clearscreen.(Programmers note, for csci 20 originally)
*/
class BStdLib 
{
public:
    //default constructor
	BStdLib();
	//places a command on screen to allow for a user defined break
	void stall();
	//clears the screen
	void clearScreen();

	/*  checks to make sure an entry is a character, range is a string that is checked for.
	    @param string, all allowed characters
	    @return char, char when confirmed in range
	*/
	char checkChar(string range);

	/*  checks to make sure the entry is an integer, returns the integer. Negatives false for positive only
	    @param bool, true to allow negatives, false to not, default true.
	    @return int, returned integer.
	*/
	int checkInt(bool negatives = true);

	/*  checks to make sure the entry is a double value. Negatives false for positive only
	    @param bool, true to allow negatives, false for not, default true
	    @return double, returns double to program.
	*/
	double checkDouble(bool negatives = true);
	
	/*
	    returns a string to program after checking for validity
	    @return string, string entered by user.
	*/
	string checkString();
private:
};

class Debug // for debugging code that is misbehaving.
{
public:
    Debug();
    void flip();
    /*  
        stalls with a message to help with locating a logic problem.
	*/
	void debLoc();
	
	/*
	    depreciated but operational
	    void debLoc(string key);//stalls with a message, key, to locate a branch problem.
	    void debLoc(int key);//stalls with a integer, key, to locate branch problems
	    void debLoc(char key);// with with a char, key, to locate branch problems.
	    void debOne(string key);//debOne, all forms, follow display "key" to keep track of a variable that is giving trouble.
	    void debOne(int key);
	    void debOne(char key);
	    void debOne(double key);
	    void debTwo(string a, string b);//debTwo, all forms, follow and display "a" and "b" to track variables that are giving you problems.
	    void debTwo(int a, int b);
	    void debTwo(char a, char b);
	    void debTwo(double a, double b);
	*/
	
	/*
	    stalls with a message, adds a key to locate a branch problem.
	    @param T, whatever you want to say to track.
	*/
	template <typename T>
	void debLoc(T key)
	{
	    if(run){
	        cout << "HERE |" << key << "| " << endl;
	        caster.stall();
	    }
	}
	
	/*
	    tracks a variable at a point to diagnose a logic issue
	    @param T, variable to track
	*/
	template <typename T>
	void debOne(T key)
	{
	    if(run){
    	    cout << "HERE |" << key << "| " << endl;
    	    caster.stall();
	    }
	}
	
	/*
	    tracks two variables at a single point to diagnose a logic issue
	    @param T, variable 1 to track
	    @param T, variable 2 to track
	    must be of same type
	*/
	template <typename T>
	void debTwo(T key, T key2)
	{
	    if(run){
    	    cout << "HERE |" << key << "| |" << key2 << "| " <<  endl;
    	    caster.stall();
	    }
	}
private:
BStdLib caster;
bool run;
};
