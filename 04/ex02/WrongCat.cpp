#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy){
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "auiM" << std::endl;
}
