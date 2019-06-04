#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip()
    :RocketShip("RS Cloaky", 1000), cloaked(false){/*nothing*/} 

void SpecialRocketShip::setCloaked(bool condition){
    cloaked=condition;
}
bool SpecialRocketShip::getCloaked(){
    return cloaked;
}