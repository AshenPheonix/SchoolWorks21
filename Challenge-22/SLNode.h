#pragma once
#include<cstdlib>

template <typename T>
class SLNode{
public:   
    SLNode(T NC)
        :nextNode(NULL), contents(NC){/* left blank on purpose */}
    ~SLNode(){
        nextNode=NULL;
    }
    
    void setContents(T NC){
        contents=NC;
    }
    T getContents(){
        return contents;
    }
    
    void setNextNode(SLNode* newNext){
        nextNode=newNext;
    }
    SLNode* getNextNode(){
        return nextNode;
    }
private:
    SLNode* nextNode;
    T contents;
};