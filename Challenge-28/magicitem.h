#pragma once

#include <string>
#include <sstream>
#include "item.h"
#include "fooditem.h"

using namespace std;

class MagicItem : public Item{
public:
    MagicItem(string newName="magicitem", unsigned int newVal=0, string newDes="no description", unsigned int newReqMana=0);
    virtual ~MagicItem();
    
    void setDescription(string);
    void setManaRequired(unsigned int);
    
    string getDescription();
    unsigned int getManaRequired();
    
    string toString();

private:
    string description;
    unsigned int manaRequired; 
};    

/*
DERIVED class name: MagicItem (base Item)

private data members:

	description, string
	manaRequired, unsigned int
	
public function interface:

	one constructor, default arguments for name("magicitem"), value(0),
	                 description("no description"), manaRequired(0); 
						  calls Item constructor in its initialization section 
						  with name and value
	virtual destructor, does nothing
	
	setDescription
	setManaRequired

	getDescription
	getManaRequired
	
	toString, returns string with name, value, description, mana required
	          (uses Item::toString in its implementation)
			  format -- NAME, $VALUE, DESCRIPTION, requires MANAREQUIRED mana
			  EXAMPLE -- hat, 10, made of felt, requires 2 mana
*/