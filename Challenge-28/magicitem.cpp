#include "magicitem.h"

MagicItem::MagicItem(string newName, unsigned int newVal, string newDes, unsigned int newReqMana)
    :Item(newName, newVal), description(newDes),manaRequired(newReqMana){/*left blank*/}
    
MagicItem::~MagicItem(){/*left blank*/}

void MagicItem::setDescription(string newDes){
    description=newDes;
}
void MagicItem::setManaRequired(unsigned int newManaReq){
    manaRequired=newManaReq;
}

string MagicItem::getDescription(){
    return description;
}
unsigned int MagicItem::getManaRequired(){
    return manaRequired;
}

string MagicItem::toString(){
    stringstream temp;
    temp << Item::toString() << ", "<< description << ", requires "<< manaRequired << " mana"; 
    return temp.str();
}

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