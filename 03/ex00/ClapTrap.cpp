#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), Health(10), Energy(10), Damage(0) {
	std::cout << "Default Contructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Health(10), Energy(10), Damage(0) {
	std::cout << "Contructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy){

	this->Name = copy.Name;
	this->Health = copy.Health;
	this->Energy = copy.Energy;
	this->Damage = copy.Damage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount){
	int temp = amount;

	if (Health <= 0 || Energy < 0)
		return ;
	while (Health < 10 && amount > 0)
	{
		Health++;
		amount--;
	}
	Energy--;
	std::cout << Name << " heals " << temp - amount << " HP." << std::endl;
};

void ClapTrap::attack(const std::string& target){
	if (Health <= 0 || Energy < 0)
		return ;
	Energy--;
	std::cout << Name << " attacks " << target << " and lost 1 Energy." << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
	int temp = amount;

	if (Health <= 0)
		return ;
	while (Health > 0 && amount > 0)
	{
		Health--;
		amount--;
	}
	std::cout << Name << " took " << temp - amount << " damage" << std::endl;
};

int ClapTrap::getDamage(){
	return (Damage);
};
