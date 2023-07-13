#include "../HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	std::cout << name << "attacks with their " << weapon->getType() << std::endl;
}
