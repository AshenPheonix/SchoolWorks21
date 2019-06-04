#pragma once

#include "DLNode.h"
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class DList
{
public:
    DList();
    virtual ~DList();
    
    //empty all nodes of the list
    void emptyList();
    //inserts data in logical order
    //@param int, data to insert
    void sortedInsert(int newData);
    //inserts data at the head of the list
    //@param int, data to insert
    void insertHead(int newData);
    //inserts data at the tail of the list
    //@param int, data to insert
    void insertTail(int newData);
    //returns data in head node
    //@return int, data in node
    int getHead();
    //returns data in tail node
    //@return int, data in node
    int getTail();
    //returns node at the top of the list
    //@return head node
    DLNode* getHeadNode();
     //returns node at the bottom of the list
    //@return tail node
    DLNode* getTailNode();

    //removes the head node
    void killHead();
    //removes the tail node
    void killTail();

    //removes all instances of an entry
    //@param int, removed data
    //@return success or fail
    bool removeInstances(int toRemove);
    //removes first instance of an entry
    //@param int, removed data
    //@return success or fail
    bool removeFirst(int toRemove);
    //locates if a data point is in the list
    //@param int, data to locate
    //@return success or fail
    bool getData(int toGet);
    //returns current number of nodes
    //@return number of nodes;
    unsigned int getNodes();
    //prints all characters in inserted order
    void printAll();
private:
    DLNode* head;
    DLNode* tail;

    //helpers
    void emptyList(DLNode* current);
    void sortedInsert(int newData, DLNode* current);
    void insertTail(int newData, DLNode* current);
    void killTail(DLNode* current);

    bool removeInstances(int toRemove, DLNode* current);
    bool removeFirst(int toRemove, DLNode* current);
    bool getData(int toGet, DLNode* current);
    unsigned int getNodes(DLNode* current);
    void printAll(DLNode* current);
};
