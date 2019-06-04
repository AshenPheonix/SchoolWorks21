#pragma once
#include "item.h"
#include <string>
#include <sstream>

using namespace std;

class FoodItem: public Item{
public:
    FoodItem(string newName="fooditem", unsigned int newValue=0, unsigned int newCal=0, string unitOfMeasure="nounits",float newU=0);
    virtual ~FoodItem();
    
    void setCalories(unsigned int);
    void setUnitOfMeasure(string);
    void setUnits(float);
    
    unsigned int getCalories();
    string getUnitOfMeasure();
    float getUnits();
    
    string toString();

private:    
    unsigned int calories;
    string unitOfMeasure;
    float units;
};

/*
private data members:

	calories, unsigned int
	unitOfMeasure, string (such as "ounces")
	units, float
	
public function interface:

	one constructor, default arguments for name("fooditem"), value(0), calories(0),
	                 unitOfMeasure("nounits"), units(0); calls Item constructor
	                 in its initialization section with name and value
	virtual destructor, does nothing
	
	setCalories
	setUnitOfMeasure
	setUnits
	
	getCalories
	getUnitOfMeasure
	getUnits
	
	toString, returns string with name, value, units and unit of measure, calories; 
				 units formatted to exactly two decimal places
	          (uses Item::toString in its implementation)
			  format -- NAME, $VALUE, UNITS UNITOFMEASURE, CALORIES calories
			  EXAMPLE -- cookie, 1, 2.50 cookie(s), 250 calories
*/