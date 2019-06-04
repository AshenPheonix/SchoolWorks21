#include "box.h"

Box::Box()
    : boxNumber(0), boxColor("NO COLOR"), prizeCapacity(5), prizeCount(0)
{
    prizes = new Prize[prizeCapacity];
    cout << prizes<< "default" << endl;
}

Box::Box(unsigned int newNumber, string newColor, unsigned int newCapacity)
    :boxNumber(newNumber), boxColor(newColor), prizeCapacity(newCapacity), prizeCount(0)
{
    prizes = new Prize[prizeCapacity];
    cout << prizes << "Non Default" <<endl;
}

Box::Box(const Box& other)
    :boxNumber(other.boxNumber), boxColor(other.boxColor), prizeCapacity(other.prizeCapacity), prizeCount(other.prizeCount), prizes(new Prize[prizeCapacity])
{
    for(unsigned int i(0); i<other.prizeCapacity; i++)
    {
        prizes[i]=other.prizes[i];
    }
}

Box::~Box()
{
    if(prizes != NULL)
    {
        delete [] prizes;
    }
}

bool Box::addPrize(Prize prize)
{
    if (prizeCount<prizeCapacity)
    {
        for(unsigned int i(0); i<prizeCapacity; i++)
        {
            if(prizes[i] ==scratch)
            {
                prizes[prizeCount]=prize;
                prizeCount++;
                return true;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

Prize& Box::getPrize(unsigned int index)
{
    if (index<=prizeCount)
    {
        return prizes[index];
    }
    else
    {
        return scratch;
    }
}

void Box::setBoxColor(string newColor)
{
    boxColor = newColor;
}

void Box::setBoxNumber(unsigned int newNumber)
{
    boxNumber = newNumber;
}

unsigned int Box::getBoxNumber() const
{
    return boxNumber;
}

string Box::getBoxColor() const
{
    return boxColor;
}

unsigned int Box::getPrizeCapacity() const
{
    return prizeCapacity;
}

unsigned int Box::getPrizeCount() const
{
    return prizeCount;
}

Prize Box::removePrize(unsigned int index)
{
    if(index<prizeCapacity)
    {
        Prize returned(prizes[index]);
        prizes[index] = scratch;
        
        if(returned==scratch)
        {
            return returned;
        }
        prizeCount--;
        
        return returned;
    }
    else
    {
        return scratch;
    }
}

void Box::Kill()
{
    if(prizes != NULL)
    {
        delete[] prizes;
    }
}
