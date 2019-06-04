/*
    Genetic String base caller
    Brandon Porter
    
    updated/finished 5/12/2014
*/

#include "genetics.h"
#include "bstdlib.h"
#include <iostream>
#include <fstream>

BStdLib bstd;
Debug deb;

int main(){
    deb.flip();
    
    bool cont(false);
    string temp;
    while(!cont){
        cout << "Genetic String finder\n"
                "What do you want to create? (string):";
        temp =bstd.checkString();
        
        if(temp!= "")
            cont=true;
        else{
            cout << "You didn't enter anything." << endl;
        }
    }
        //set for manual imput of target
    #if 1
        cout << "Graphical or Non Graphical (n or g): ";
        char charTemp(bstd.checkChar("gGnN"));
    
        gene runtime(temp);
        deb.debLoc();
        runtime.exec(tolower(charTemp));
    #endif
    #if 0
    //set for file imput;
    
    ifstream fin(temp.c_str());
    while(getline(fin,temp)){
        gene runtime(teimp);
        runtime.exec('n');
        bstd.stall();
    }
    #endif
    
    return 0;   
}