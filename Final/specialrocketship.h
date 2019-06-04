#pragma once
#include "rocketship.h"
#include <string>
#include "CinReader.h"

class SpecialRocketShip : public RocketShip{
public:
    SpecialRocketShip();

    void setCloaked(bool);
    bool getCloaked();
private:
    bool cloaked;    
};