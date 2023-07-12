#include "../Zombie.hpp"

Zombie::Zombie(str name){
	this->name = name;
	announce();
}

Zombie::~Zombie(){
	std::cout << name << " was destroyed.\n";
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}