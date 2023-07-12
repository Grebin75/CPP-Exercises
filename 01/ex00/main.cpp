#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Foo");
	randomChump("Gabriel");

	delete(zombie);
}