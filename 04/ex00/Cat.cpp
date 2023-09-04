#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &copy){
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat &copy){
	this->type = copy.type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}
