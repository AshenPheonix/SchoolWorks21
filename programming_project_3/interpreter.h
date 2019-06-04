#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>

#include "DList.h"
#include "DLNode.h"

using namespace std;

struct Command
{
    
    //constructor
    //@param line to destruct
    Command(string newLine="");

    char command;
    int data;
};

class Interpreter
{
public:
    //constructor
    //@param string location of file to interpret
    Interpreter(string newFile="");
    virtual ~Interpreter();

    //creates list
    void createList();

    //number of list(not used)
    unsigned int getSize();

    //execute interpreting, outputing data via cout
    void exec();

private:
    string File;
    DList* working;
};
