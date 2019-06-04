#include "DLNode.h"

DLNode::DLNode(int newData)
    :data(newData), lastNode(NULL), nextNode(NULL)
{/*intntentionally left blank*/}

DLNode::~DLNode()
{
    lastNode=NULL;
    nextNode=NULL;
}

int DLNode::getData()
{
    return data;
}

void DLNode::setData(int newData)
{
    data=newData;
}

DLNode*& DLNode::getLast()
{
    return lastNode;
}

void DLNode::setLast(DLNode* newLast)
{
    lastNode=newLast;
}

DLNode*& DLNode::getNext()
{
    return nextNode;
}

void DLNode::setNext(DLNode* newNext)
{
    nextNode=newNext;
}