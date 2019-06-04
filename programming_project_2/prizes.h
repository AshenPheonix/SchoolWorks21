#pragma once
#include <string>

using namespace std;

class Prize
{
public:
    /*
        Basic prize, worth nothing, has no name
    */
    Prize();
    
    /*
        Constructor
        @param String, name of prize
        @param int, value of prize
    */
    Prize(string newName, int newValue);
    
    /*
        deconstructor
    */
    ~Prize();
    
    /*
        sets name of prize
        @param string sets the name of the string to string
    */
    void setName(string);
    /*
        sets the value of the prize
        @param unsigned int set as Value
    */
    void setValue(unsigned int);
    
    /*
        get name
        @return name;
    */
    string getName() const;
    /*
        returns name
        @return value of prize
    */
    unsigned int getValue() const;
    
    /*
        overload of ==
        @param Prize
        @return true if name and value are equal
    */
    friend bool operator ==(Prize prize1, Prize prize2);
    
private:
    string prizeName;
    unsigned int prizeValue;
};