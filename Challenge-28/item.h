#pragma once

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Item{
public:
    Item(string newName="item", unsigned int newValue=0);
    virtual ~Item();
    
    void setName(string);
    void setValue(unsigned int);
    
    string getName();
    unsigned int getValue();
    
    string toString();
private:
    string name;
    unsigned int value;
};

/*
	one constructor, default arguments for name("item") and value(0)
	
	virtual destructor, does nothing
	
	setName
	setValue
	
	getName
	getValue
	
	toString, returns string with name and value
			  format --  NAME, $VALUE
	          EXAMPLE -- shoes, $25
*/