#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy){
	 for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain Destructor" << std::endl;
}