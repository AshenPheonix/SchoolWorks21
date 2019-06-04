#include "prizes.h"

Prize::Prize()
{
    prizeName = "NO NAME";
    prizeValue = 0;
}

Prize::Prize(string newName, int newValue)
{
    prizeName = newName;
    prizeValue = newValue;
}

void Prize::setName(string newName)
{
    prizeName=newName;
}

void Prize::setValue(unsigned int newValue)
{
    prizeValue=newValue;
}

string Prize::getName() const
{
    return prizeName;
}

unsigned int Prize::getValue() const
{
    return prizeValue;
}

bool operator ==(Prize prize1, Prize prize2)
{
    if (prize1.prizeName==prize2.prizeName && prize1.prizeValue == prize2.prizeValue)
        return true;
    else
        return false;
}

Prize::~Prize()
{
}