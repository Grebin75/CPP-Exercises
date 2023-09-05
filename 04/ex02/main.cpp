#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	Animal animal = Animal();
	Dog dog = Dog();

	dog.makeSound();

	return 0;
}
