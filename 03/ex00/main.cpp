#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b ("Gabriel");
	ClapTrap c(b);

	a = c;

	a.attack("Gabriel");
	b.takeDamage(a.getDamage());
	b.beRepaired(10);
}
