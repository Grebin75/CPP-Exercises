#include "../Weapon.hpp"

Weapon::Weapon(str type){
	this->type = type;
}

Weapon::~Weapon(){
}

void Weapon::setType(str type){
	this->type = type;
}

str Weapon::getType(){
	return (type);
}