#include "ScavTrap.hpp"

int main()
{
		ClapTrap a("Gabriel");
		ScavTrap b("ScavGabriel");


		a.attack(b.getName());
		b.attack(a.getName());

		b.guardGate();
		b.beRepaired(12);
}
