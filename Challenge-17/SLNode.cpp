#include "SLNode.h"

SLNode::SLNode()
    :contents(0)
{
    nextNode=0;
    //nothing here;
}

SLNode::SLNode(int what)
    :contents(what)
{
    nextNode=0;
    //nothing here;
}

SLNode::~SLNode()
{/*intentional*/}

void SLNode::setContents(int what)
{
    contents=what;
}

int SLNode::getContents() const
{
    return contents;
}

void SLNode::setNextNode(SLNode* where)
{
    nextNode=where;
}

SLNode* SLNode::getNextNode() const
{
    return nextNode;
}