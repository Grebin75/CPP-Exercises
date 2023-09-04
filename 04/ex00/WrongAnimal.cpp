#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongDefault"){
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy){
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Undefined Sound" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}
