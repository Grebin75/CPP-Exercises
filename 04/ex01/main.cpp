#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		i->makeSound();
		j->makeSound();
		delete j;//should not create a leak
		delete i;

		std::cout << "\nTEST 1 DONE\n" << std::endl;
	}
	{
		const Animal *animals[6];

		int i = 0;
		for (; i < 3; i++)
			animals[i] = new Dog();
		for (; i < 6; i++)
			animals[i] = new Cat();

		for (int j = 0; j < 6; j++)
			delete animals[j];


	}
	return 0;
}
