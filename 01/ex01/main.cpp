#include "Zombie.hpp"

int main()
{
	Zombie *Horde =zombieHorde(5, "Gabriel");
	delete[] Horde;
}