#ifndef	Cat_H
# define Cat_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();

		void makeSound() const;
};

#endif
