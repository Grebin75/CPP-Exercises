#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d ("Cabeludo Gabriel");

	d.attack("2");
	d.ClapTrap::attack("3");
	d.whoAmI();

	d.highFivesGuys();
	d.guardGate();
}
