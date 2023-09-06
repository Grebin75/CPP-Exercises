#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap a;
		ClapTrap b ("Gabriel");
		ClapTrap c("Joel");
		ClapTrap test(c);

		a = c;

		a.attack(b.getName());
		b.takeDamage(a.getDamage());
		b.beRepaired(10);
	}
	{
		ClapTrap b("Gabriel2");

		for (int i= 0; i < 11; i++)
			std::cout << i << ". ", b.attack("Jorge");
		b.takeDamage(10);
		b.attack("Jorge");
		b.beRepaired(10);
	}
	{
		ClapTrap b("Gabriel3");

		b.takeDamage(9);
		for (int i= 0 ; i < 11 ; i++)
			std::cout << i << ". ", b.beRepaired(1);
	}
}
