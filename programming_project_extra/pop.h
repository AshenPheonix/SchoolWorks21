/*
    genetic string populant
    Brandon Porter
    
    updated/finshed 5/12/2014
*/

#pragma once
#include <iostream>
#include <string>

using namespace std;

class pop{
public:
    //constructor
    pop();
    //constructor with string
    pop(string);
    //destructor
    virtual ~pop();
    
    //sets val
    //@param string, string to add to val
    void value(string);
    //returns val
    //@return val by reference
    string& value();
    
    //changes d
    //  @param char, 'i' to increment
    void diff(char);
    //  @param int, int to change to;
    void diff(int);
    // returns d
    // @return d
    unsigned int diff() const;
    
    //operators to allow sorting;
    friend bool operator ==(string s1, pop p1);
    friend bool operator <(unsigned int num, pop p1);
    friend bool operator >(unsigned int num, pop p1);
    friend bool operator <(pop p1, pop p2);
    friend bool operator >(pop p1, pop p2);
    
    //access operator
    char& operator [](int);
private:
    string val;
    unsigned int d;
    

};