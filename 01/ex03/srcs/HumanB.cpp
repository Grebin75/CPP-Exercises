#include "../HumanB.hpp"

HumanB::HumanB(str name){
	this->name = name;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(){
	std::cout << name << "attacks with their " << weapon->getType() << std::endl;
}
