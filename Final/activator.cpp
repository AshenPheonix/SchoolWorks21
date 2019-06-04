#include "activator.h"

unsigned int Activator::getPrime(unsigned int which){
    unsigned int i(1);
    while (which !=0){
        ++i;
        bool test(true);
        for(int j(0); j<10; ++j){
            if(i%j!=0)
                test=false;
        }
        if (test)
            --which;
    }
    return i;
}

unsigned int Activator::sumTheDigits(unsigned int val){
    string temp;
    stringstream reallyTemp;
    reallyTemp << val;
    temp=reallyTemp.str();
    unsigned int current(0), returned(0);
    
    for(int i(0); i<temp.size(); i++){
        stringstream reallyTemp;
        reallyTemp<<temp[i];
        reallyTemp >> current;
        returned +=current;
    }
    reallyTemp << returned;
    
    if (returned > 10)
        return sumTheDigits(returned);
    else
        return returned;
}