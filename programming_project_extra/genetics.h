/*
    Genetic String Creator
    Brandon Porter
    
    finished 5/12/2014
*/

#pragma once
#include "pop.h"

#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include "bstdlib.h"

#define POP_SIZE 100
#define MAX_RUNS 36000
#define MUTANT 0.30
#define ELITES 0.10

using namespace std;

class gene{
public:
    //constructor
    //@param string target
    gene(string);
    //destructor
    virtual ~gene();

    //mutates a member of the population
    //@param pop to mutate
    void mutate(pop&);
    
    //executes the program;
    void exec(char);

private:
    string target;
    vector<pop> population;
    Debug deb;
    
    string randomWord();
    double Percent();
    pop& endOfLine();
    int devoid(pop&);
    
    //outputs populace
    void out();
    void graphicalOut();
    void clearScreen();
};