#pragma once

/*
    programming project 4
    Brandon Porter
*/

#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
#include "tree.h"
#include "word.h"

using namespace std;

struct Command{
    Command(string nextLine);
    
    char command;
    string data;
};

class Interpreter{
public:  
    Interpreter(string download);
    ~Interpreter();
    
    void createTree();
    void deleteTree();
    
    void getSize();
    
    void exec();
private:
    ifstream file;
    BSTree<Word>* tree;
};