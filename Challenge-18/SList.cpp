#include "SList.h"

SList::SList()
{
    head=NULL;
    size=0;
}

SList::~SList()
{
    clear();
}

void SList::insertHead(int value)
{
    if(head==NULL)
    {
        head=new SLNode(value);
        ++size;
    }
    else
    {
        SLNode* temp(new SLNode(value));
        temp->setNextNode(head);
        head=temp;
        ++size;
    }
}

void SList::removeHead()
{
    if (head !=NULL && head->getNextNode() == NULL)
    {
        delete head;
        head=NULL;
        --size;
    }
    else if(head != NULL)
    {
        SLNode* temp(head);
        head=head->getNextNode();
        delete temp;
        --size;
    }
}

void SList::clear()
{
    if(head!=NULL){
        clear(head);
        size=0;
        head=NULL;
    }
}

unsigned int SList::getSize() const
{
    return size;
}

string SList::toString() const
{
    if(head!=NULL)
    {
        return toString(head);
    }
    else
        return "";
}

string SList::toString(SLNode* next) const
{
    if(next!=NULL && next->getNextNode()!=NULL)
    {
        stringstream temp;
        temp << next->getContents() << "," << toString(next->getNextNode());
        return temp.str();
    }
    else if(next!=NULL)
    {
        stringstream temp;
        temp << next->getContents();
        return temp.str();
    }
    else
        return "";
}

void SList::clear(SLNode* current)
{
    if(current->getNextNode()!=NULL)
        clear(current->getNextNode());
        
    delete current->getNextNode();
}