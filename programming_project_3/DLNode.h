#pragma once

#include <cstdlib>
#include <iostream>

using namespace std;

class DLNode
{
public:
    //constructor with overload
    //@param int, data in new node
    DLNode(int newData=0);
    //destructor
    virtual ~DLNode();
    
    //returns data in node
    //@return data in node
    int getData();
    //sets data in node
    //@param int, data to insert
    void setData(int newData);
    
    //gets the prior node
    //@returns prior node
    DLNode*& getLast();
    //sets the prior node
    //@param new node
    void setLast(DLNode* newLast);
    
    //gets the next node
    //@returns next node
    DLNode*& getNext();
    //sets the next node
    //@param new node
    void setNext(DLNode* newNext);
    
private:    
    int data;
    DLNode* lastNode;
    DLNode* nextNode;
};