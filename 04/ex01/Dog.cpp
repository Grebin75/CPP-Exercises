#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &copy){
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy){
	this->type = copy.type;
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark Bark" << std::endl;
}
