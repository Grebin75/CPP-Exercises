#ifndef HumanB_H
# define HumanB_H

# include <string>
# include <iostream>
# include <cstdlib>
# include "Weapon.hpp"


class HumanB{
	private:
		str name;
		Weapon *weapon;

	public:
		HumanB(str name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif