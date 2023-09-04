#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Health = 100;
	Energy = 100;
	Damage = 30;
	std::cout << "Default FragTrap Contructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	Health = 100;
	Energy = 100;
	Damage = 30;
	std::cout << "FragTrap Contructor Called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
	std::cout << "FragTrap Copy constructor Called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy){

	this->Name = copy.Name;
	this->Health = copy.Health;
	this->Energy = copy.Energy;
	this->Damage = copy.Damage;
	return *this;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << Name << " asked a highfive." << std::endl;
}

