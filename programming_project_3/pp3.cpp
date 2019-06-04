/*
    programming project 3
    By Brandon Porter
*/

#include "DLNode.h"
#include "DList.h"
#include "interpreter.h"


int main(int argv, char** argc)
{
    if(argv==2)
    {
        string temp(argc[1]);
        Interpreter runtime(temp);
        runtime.exec();
    }
    else
    {
        cout << "Improper Input, one argument" << endl;
    }
    return 0;
}
