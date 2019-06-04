#include "DList.h"

DList::DList()
    :head(NULL), tail(NULL)
{/*left empty on porpouse*/}
DList::~DList()
{
    emptyList();
}

void DList::emptyList()
{
    while (head !=NULL)
        killHead();
    head=NULL;
    tail=NULL;
}

void DList::sortedInsert(int newData)
{
    if (head==NULL)
        insertHead(newData);
    else if(head->getNext()!=NULL)
        sortedInsert(newData, head);
    else
        insertTail(newData);
    
}

void DList::insertHead(int newData)
{
    DLNode* temp(new DLNode(newData));
    temp->setNext(head);
    head=temp;

    if(head->getNext()==NULL)
    {
        tail=head;
    }
    else
    {
        head->getNext()->setLast(head);
    }
}

void DList::insertTail(int newData)
{
    DLNode* temp(new DLNode(newData));
    temp->setLast(tail);
    tail=temp;

    if(tail->getLast()==NULL)
        head=tail;
    else
        tail->getLast()->setNext(tail);
}

int DList::getHead()
{
    if(head!=NULL)
        return head->getData();
    else
        return 0;
}

int DList::getTail()
{
    if(tail!=NULL)
        return tail->getData();
    else
        return 0;
}

DLNode* DList::getHeadNode()
{
    return head;
}

DLNode* DList::getTailNode()
{
    return tail;
}

void DList::killHead()
{
    if(head!=NULL)
    {
        DLNode* temp(head);
        head=head->getNext();
        delete temp;
    }
    
    if(head!=NULL)
        head->setLast(NULL);
    else
        tail=NULL;
}

void DList::killTail()
{
    if(tail!=NULL)
    {
        DLNode* temp(tail);
        tail=tail->getLast();
        delete temp;
    }
    
    if(tail!=NULL)
        tail->setNext(NULL);
    else
        head=NULL;
}


bool DList::removeInstances(int toRemove)
{
    if (head==NULL)
        return false;
    else if(head->getData()==toRemove)
    {
        killHead();
        return (removeInstances(toRemove) || true);
    }
    else
    {
        return (removeInstances(toRemove, head));
    }
}

bool DList::removeFirst(int toRemove)
{
    return (removeFirst(toRemove, head));
}

bool DList::getData(int toGet)
{
    return (getData(toGet, head));
}

unsigned int DList::getNodes()
{
    return getNodes(head);
}

void DList::printAll()
{
    if(head==NULL)
        return;
        
    printAll(head);
    cout << endl;
}


//helpers

void DList::sortedInsert(int newData, DLNode* current)
{
    if(current->getData() < newData && current->getNext()->getData() > newData)
    {
        DLNode* inserted(new DLNode(newData));
        inserted->setLast(current);
        inserted->setNext(current->getNext());
        current->getNext()->setLast(inserted);
        current->setNext(inserted);
    }
    else
    {
        sortedInsert(newData, current->getNext());
    }
}

bool DList::removeInstances(int toRemove, DLNode* current)
{
    if (current==NULL)
        return false;
    else if(current->getData()==toRemove)
    {
        
        current->getNext()->setLast(current->getLast());
        current->getLast()->setNext(current->getNext());
        DLNode *temp(current->getNext());
        delete current;
        return (removeInstances(toRemove, temp) || true );
    }
    else
        return false;
}

bool DList::removeFirst(int toRemove, DLNode* current)//REWRITE
{
    
    if(current==NULL)
        return false;
    else if(current->getData()==toRemove)
    {
        killHead();
        return true;
    }
    
    while(current->getNext()!=NULL)
    {
        DLNode* temp(current->getNext());
        if(temp->getData()==toRemove)
        {
            current->setNext(temp->getNext());
            temp->getNext()->setLast(current);
            delete temp;
            return true;
        }
        current=current->getNext();
    }
    return false;
}

bool DList::getData(int toGet, DLNode* current)
{
    if(current==NULL)
        return false;
    else if(current->getData()==toGet)
        return true;
    else
        return getData(toGet, current->getNext());
}

unsigned int DList::getNodes(DLNode* current)
{
    if(current!=NULL)
    {
        return (1+getNodes(current->getNext()));
    }
    else
        return 0;
}

void DList::printAll(DLNode* current)
{
    if(current==NULL)
        return;
    else if(current->getNext()!=NULL)
    {
        cout << current->getData() << ",";
        printAll(current->getNext());
    }
    else
    {
        cout << current->getData();
    }
}
