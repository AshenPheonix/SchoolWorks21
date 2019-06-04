#pragma once

#include "CinReader.h"
#include <iostream>
#include <string>
#include <vector>

class RocketShip{
public:
    RocketShip();
    RocketShip(string, unsigned int);
    virtual ~RocketShip();
    
    void setName(string);
    string getName();
    
    void setFuel(unsigned int);
    unsigned int getFuel();

    void addFuelCell(unsigned int);
    bool removeFuelCell(unsigned int);
    
    bool addFuelToCell(unsigned int, unsigned int);
    string burnFuel(unsigned int);
protected:
    string name;
    unsigned int fuel;
    vector<unsigned int> fuelCells;
};