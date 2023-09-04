#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	private:
		std::string Name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap& operator=(const DiamondTrap &copy);
		~DiamondTrap();
		void whoAmI();

};
#endif
