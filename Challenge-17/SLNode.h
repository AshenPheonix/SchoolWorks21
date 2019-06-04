#pragma once

#include <cstdlib>

using namespace std;

class SLNode
{
public:
    /*
    Sets empty node, 0 contents, null node
    */
    SLNode();
    /*
    Sets node to Contents
    */
    SLNode(int contents);
    ~SLNode();
    
    /*
    sets contents of what to node
    @param what; new contents
    */
    void setContents(int what);
    /*
    gives contents of node to program
    @return; contents of node
    */
    int getContents() const;
    
    /*
    Sets Next Node in list
    @param where; location of next node
    */
    void setNextNode(SLNode* where);
    /*
    gives Next Node
    @return Next node
    */
    SLNode* getNextNode() const;
    
private:
    SLNode* nextNode;
    int contents;
};