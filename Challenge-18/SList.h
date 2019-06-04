#pragma once

#include <cstdlib>
#include <string>
#include <sstream>
#include "SLNode.h"

using namespace std;

class SList
{
public:
    //constructor
    SList();
    //destructor
    virtual ~SList();
    
    //inserts an object in head space
    //@param value, value to insert into the node
    void insertHead(int value);
    //removes the head, replaces the next value if one exists
    void removeHead();
    //clears the list
    void clear();

    //gets the size of the list, ONLY TIME SIZE IS USED!!    
    unsigned int getSize() const;
    //returns a string containing values of the list.
    string toString() const;

private:
    SLNode* head;
    unsigned int size;
    
    void clear(SLNode* current);
    string toString(SLNode* next) const;
};