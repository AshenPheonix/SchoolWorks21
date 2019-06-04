#include "rocketship.h"


RocketShip::RocketShip()
    :name("RS NullPointer"), fuel(1000){/*left blank intentionally*/}
RocketShip::RocketShip(string newName, unsigned int newFuel)
    :name(newName), fuel(newFuel){/*no action*/}
RocketShip::~RocketShip(){/*no action*/}
    
void RocketShip::setName(string newName){
    name=newName;
}
string RocketShip::getName(){
    return name;
}
    
void RocketShip::setFuel(unsigned int newFuel){
    fuel=newFuel;
}
unsigned int RocketShip::getFuel(){
    return fuel;
}

void RocketShip::addFuelCell(unsigned int amtIn){
    fuelCells.push_back(amtIn);
}

bool RocketShip::removeFuelCell(unsigned int which){
    if(which >= fuelCells.size())
        return false;
    else{
        fuelCells.erase(fuelCells.begin()+which);
        return true;
    }
}
bool RocketShip::addFuelToCell(unsigned int cellNu, unsigned int fuelAmt){
    if(cellNu >= fuelCells.size())
        return false;
    else{
        fuelCells[cellNu]+=fuelAmt;
        return true;
    }
}

string RocketShip::burnFuel(unsigned int cell){
    if(fuelCells.size() > cell){
        string temp;
        for(unsigned int i(0); i<fuelCells[cell]; i++){
            temp+="*";
        }
        fuelCells[cell]=0;
        return temp;
    }
    else
        return "";
}