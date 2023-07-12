#include "../Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << name << " was destroyed.\n";
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setNamne(str name)
{
	this->name = name;
}