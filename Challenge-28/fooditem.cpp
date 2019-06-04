#include "fooditem.h"

FoodItem::FoodItem(string newName, unsigned int newValue, unsigned int newCal, string newUnitOfMeasure, float newU)
    :Item(newName, newValue), calories(newCal), unitOfMeasure(newUnitOfMeasure), units(newU){/*empty*/}
    
FoodItem::~FoodItem(){/*empty*/}

void FoodItem::setCalories(unsigned int newCalories){
    calories=newCalories;
}
void FoodItem::setUnitOfMeasure(string newU){
    unitOfMeasure=newU;
}
void FoodItem::setUnits(float newU){
    unitOfMeasure=newU;
}

unsigned int FoodItem::getCalories(){
    return calories;
}
string FoodItem::getUnitOfMeasure(){
    return unitOfMeasure;
}

float FoodItem::getUnits(){
    return units;
}

string FoodItem::toString(){
    stringstream temp;
    temp << Item::toString();
    temp.setf(std::ios::fixed);
    temp.setf(std::ios::showpoint);
    temp.precision(2);
    temp << ", " << units << " " << unitOfMeasure << ", " << calories << " calories";
    return temp.str();
}
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