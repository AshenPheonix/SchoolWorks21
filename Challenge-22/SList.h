#pragma once
#include "SLNode.h"
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <typename T>
class SList{
public:
    SList(){
        head=NULL;
        size=0;
    }
    
    ~SList()    {
        clear();
    }
    
    void insertHead(T value){
        if(head==NULL){
            head=new SLNode<T>(value);
            ++size;
        }
        else{
            SLNode<T>* temp(new SLNode<T>(value));
            temp->setNextNode(head);
            head=temp;
            ++size;
        }
    }
    
    void removeHead(){
        if (head !=NULL && head->getNextNode() == NULL){
            delete head;
            head=NULL;
            --size;
        }
        else if(head != NULL){
            SLNode<T>* temp(head);
            head=head->getNextNode();
            delete temp;
            --size;
        }
        
        if(size==0)
            head=NULL;
    }
    
    void insertTail(T value)
    {
        if (head==NULL){
            insertHead(value);
        }
        else{
            SLNode<T>* newTail(new SLNode<T>(value));
            
            SLNode<T>* temp(head);
            while(temp->getNextNode()!=NULL)
                temp=temp->getNextNode();
            
            temp->setNextNode(newTail);
            
            if(size==0){
                head=temp;
            }
            
            ++size;
        }
    }
    
    void removeTail(){
        if(head==NULL){
            return;
        }
        
        SLNode<T>* temp(head);
        while(temp->getNextNode()!=NULL && temp->getNextNode()->getNextNode()!=NULL)
            temp=temp->getNextNode();
            
        delete temp->getNextNode();
        temp->setNextNode(NULL);
        size--;
        if(size==0)
            head=NULL;
    }
    
    void clear(){
        if(head!=NULL){
            clear(head);
            size=0;
            head=NULL;
        }
    }
    
    unsigned int getSize() const{
        return size;
    }
    
    string toString() const{
        if(head!=NULL){
            return toString(head);
        }
        else
            return "";
    }
    
    string toString(SLNode<T>* next) const{
        if(next!=NULL && next->getNextNode()!=NULL){
            stringstream temp;
            temp << next->getContents() << "," << toString(next->getNextNode());
            return temp.str();
        }
        else if(next!=NULL){
            stringstream temp;
            temp << next->getContents();
            return temp.str();
        }
        else
            return "";
    }
    
    void clear(SLNode<T>* current){
        if(current->getNextNode()!=NULL)
            clear(current->getNextNode());
            
        delete current->getNextNode();
    }
    
    bool removeFirst(T removed){
        
        if(head==NULL)
            return false;
        else if(head->getContents()==removed){
            removeHead();
            return true;
        }
        
        SLNode<T>* checker(head);
        while(checker->getNextNode() != NULL){
            
            SLNode<T>* temp(checker->getNextNode());
            
            if(temp->getContents()==removed && temp->getNextNode()!=NULL){
                checker->setNextNode(temp->getNextNode());
                delete temp;
                --size;
                return true;
            }
            else if(temp->getContents()==removed){
                

                delete temp;
                checker->setNextNode(NULL);
                --size;
                return true;
            }
            checker=checker->getNextNode();
        }
        return false;
    }
    
    bool removeAll(T removed){
        if(head==NULL)
            return false;
            
        bool truth(false);
        
        SLNode<T>* checker(head);
        while(checker->getNextNode()!=NULL){
            SLNode<T>* temp(checker->getNextNode());
            
            if(temp->getContents()==removed && temp->getNextNode()!=NULL){
                checker->setNextNode(temp->getNextNode());
                delete temp;
                --size;
                truth=true;
            }
            else if(temp->getContents()==removed){
                delete temp;
                checker->setNextNode(NULL);
                --size;
                truth=true;
            }
            else
                checker=checker->getNextNode();
        }
        return truth;
    }
    
    void insert(T newNode){
        if(head==NULL || head->getContents() > newNode){
            insertHead(newNode);
            return;
        }
        
        SLNode<T>* checker(head);
        
        while(checker->getNextNode()!=NULL){
            SLNode<T>* temp(checker->getNextNode());
            
            if(temp->getContents() >= newNode){
                checker->setNextNode(new SLNode<T>(newNode));
                checker->getNextNode()->setNextNode(temp);
                ++size;
                return;
            }
            
            checker=checker->getNextNode();
        }
        insertTail(newNode);
    }
        
    
private:    
    SLNode<T>* head;
    unsigned int size;
};