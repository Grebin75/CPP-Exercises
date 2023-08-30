#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	Health = 100;
	Energy = 50;
	Damage = 20;
	std::cout << "Default ScavTrap Contructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	Health = 100;
	Energy = 50;
	Damage = 20;
	std::cout << "ScavTrap Contructor Called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << "ScavTrap Copy constructor Called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy){

	this->Name = copy.Name;
	this->Health = copy.Health;
	this->Energy = copy.Energy;
	this->Damage = copy.Damage;
	return *this;
}


void ScavTrap::attack(const std::string& target){
	if (Health <= 0 || Energy < 0)
		return ;
	Energy--;
	std::cout << "ScavTrap " << Name << " attacks " << target << " and lost 1 Energy." << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}

