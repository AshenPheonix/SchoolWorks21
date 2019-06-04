#pragma once

#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
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
    void insertTail(int value);
    //removes the head, replaces the next value if one exists
    void removeHead();
    void removeTail();
    //clears the list
    void clear();
    
    //inserts sorted value
    //@param inserted value
    void insert(int);
    
    //removes requested value
    //@param removed value
    //@return success of removal
    bool removeFirst(int);

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