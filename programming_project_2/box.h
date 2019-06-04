#pragma once
#include <iostream>
#include <string>
#include "prizes.h"

using namespace std;

class Box
{
public:
    /*
        contstuctor, empty box
    */
    Box();
    
    /*
        constructor
        @param int, sets number on box
        @param string, sets color of box
        @param unsigned int, sets capacity
    */
    Box(unsigned int newNumber, string newColor, unsigned int newCapacity);
    
    /*
    deconstructor
    */
    ~Box();
    
    /*
    copy for vector use
    */
    Box(const Box& other);
    
    /*
        set number on the box
        @param unsigned int, sets box number
    */
    void setBoxNumber(unsigned int newNumber);
    
    /*
        set color of box
        @param string sets the color of the box
    */
    void setBoxColor(string newColor);
    
    /*
        returns number of the box
        @return box number
    */
    unsigned int getBoxNumber() const;
    
    /*
        returns color of the box
        @return box color
    */
    string getBoxColor() const;
    
    /*
        returns prize capacity of the box
        @return box Size
    */
    unsigned int getPrizeCapacity() const;
    
    /*
        returns prize ammount of the box
        @return box prize count
    */
    unsigned int getPrizeCount() const;
    
    /*
        returns true of a prize can be added/ is successfully added to the box
        @param Prize; prize to be entered into the box
        @return addition successful
    */
    bool addPrize(Prize prize);
    
    /*
        returns prize by reference
        @param index; index of prize
        @return Prize by reference
    */
    Prize& getPrize(unsigned int index);
    
    /*
        removes and returns prize
        @param index; index of prize
        @return Prize
    */
    Prize removePrize(unsigned int index);
    
    /*added due to rumtime explotion, added as a fix
    deletes prizes*/
    void Kill();
    
private:
    unsigned int boxNumber;
    string boxColor;
    unsigned int prizeCapacity;
    unsigned int prizeCount;
    
    Prize scratch;
    
    Prize* prizes;
};