#ifndef HumanA_H
# define HumanA_H

# include <string>
# include <iostream>
# include <cstdlib>
# include "Weapon.hpp"


class HumanA{
	private:
		str name;
		Weapon *weapon;

	public:
		HumanA(str name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif