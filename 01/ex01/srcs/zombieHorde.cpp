#include "../Zombie.hpp"

Zombie* zombieHorde( int N, str name)
{
	Zombie *horde = new Zombie[N];
	int i = -1;

	while (++i < N)
	{
		horde[i].setNamne(name);
		horde[i].announce();
	}
	return (horde);
}