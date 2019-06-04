#include "item.h"

Item::Item(string newName, unsigned int newValue)
:name(newName), value(newValue) {/*left blank*/}

Item::~Item(){/*nothing to do*/}

void Item::setName(string newName){
    name=newName;
}
void Item::setValue(unsigned int newValue){
    value=newValue;
}

string Item::getName(){
    return name;
}
unsigned int Item::getValue(){
    return value;
}

string Item::toString(){
    stringstream temp;
    temp << name << ", $" <<value;
    return temp.str();
}

/*	one constructor, default arguments for name("item") and value(0)
	
	virtual destructor, does nothing
	
	setName
	setValue
	
	getName
	getValue
	
	toString, returns string with name and value
			  format --  NAME, $VALUE
	          EXAMPLE -- shoes, $25*/