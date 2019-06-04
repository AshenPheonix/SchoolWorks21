#pragma once
#include <iostream>

using namespace std;

template <class T>
class Box
{
public:
    Box(T newContents)
        :contents(newContents){
            //left empty on purpose
        }

    T getContents() const{
        return contents;
    }
    
    void setContents(T newContents){
        contents=newContents;
    }
    

    friend ostream& operator <<(ostream& out, Box<T> box){
        out << box.contents;
        return out;
    }
  
private:
    T contents;
};