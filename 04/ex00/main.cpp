#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << meta->getType() << std::endl;
		meta->makeSound();
		std::cout << j->getType() << std::endl;
		j->makeSound();
		std::cout << i->getType()  << std::endl;
		i->makeSound(); //will output the cat sound!
		delete(meta);
		delete(i);
		delete(j);
	}
	{
		const WrongAnimal* atem = new WrongAnimal();
		const WrongAnimal* x = new WrongCat();

		std::cout << atem->getType() << std::endl;
		atem->makeSound();
		std::cout << x->getType() << std::endl;
		x->makeSound();

		delete(atem);
		delete(x);

	}

	return 0;
}
