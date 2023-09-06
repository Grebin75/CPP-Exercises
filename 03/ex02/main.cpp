#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
		ClapTrap a("Gabriel");
		ScavTrap b("ScavGabriel");
		FragTrap c("FragGrabriel");


		a.attack(b.getName());
		b.attack(a.getName());
		c.attack(b.getName());

		b.guardGate();
		c.highFivesGuys();
}
