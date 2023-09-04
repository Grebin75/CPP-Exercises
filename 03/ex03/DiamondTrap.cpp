#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	Name = "";
	ClapTrap::Name = "_clap_name";
	Health = FragTrap::Health;
	Energy = ScavTrap::Energy;
	Damage = FragTrap::Damage;
	std::cout << "Default DiamondTrap Contructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
	this->Name = name;
	ClapTrap::Name = name + "_clap_name";
	Health = FragTrap::Health;
	Energy = ScavTrap::Energy;
	Damage = FragTrap::Damage;
	std::cout << "DiamondTrap Contructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
	std::cout << "DiamondTrap Copy constructor Called" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy){

	this->Name = copy.Name;
	ClapTrap::Name = copy.ClapTrap::Name;
	this->Health = copy.Health;
	this->Energy = copy.Energy;
	this->Damage = copy.Damage;
	return *this;
}


void DiamondTrap::whoAmI(){
	std::cout << "Diamond name: " << this->Name  << std::endl;
	std::cout << "Diamond name: " << ClapTrap::Name  << std::endl;
}
