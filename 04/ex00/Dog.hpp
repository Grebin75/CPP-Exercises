#ifndef	Dog_H
# define Dog_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog();

		void makeSound() const;
};

#endif
