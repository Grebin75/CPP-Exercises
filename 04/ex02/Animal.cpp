#include "Animal.hpp"

Animal::Animal() : type("Default"){
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal &copy){
	this->type = copy.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal Destructor" << std::endl;
}

/* void Animal::makeSound() const {
	std::cout << "Undefined Sound" << std::endl;
} */

std::string Animal::getType() const{
	return (this->type);
}
