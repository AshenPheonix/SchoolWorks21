#include "pop.h"

pop::pop()
    :val(""), d(0){/*empty*/}
pop::pop(string newVal)
    :val(newVal), d(0){/*empty*/}
pop::~pop()
{/*empty*/}

void pop::value(string newVal){
    val=newVal;
}
string& pop::value(){
    return val;
}

void pop::diff(char change){
    (change=='i')? ++d:--d;
}
void pop::diff(int change){
    d=change;
}
unsigned int pop::diff() const{
    return d;
}

bool operator ==(string s1, pop p1){
    return (s1==p1.val);
}
bool operator <(unsigned int num, pop p1){
    return (num < p1.d);
}
bool operator >(unsigned int num, pop p1){
    return (num > p1.d);
}
bool operator <(pop p1, pop p2){
    return (p1.d < p2.d);
}
bool operator >(pop p1, pop p2){
    return (p1.d > p2.d);
}

char& pop::operator [](int inp){
    return val[inp];
}