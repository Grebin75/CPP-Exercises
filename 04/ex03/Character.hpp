#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _Name;
		AMateria *Inventory[4];
	public:
		 ~Character();
		 std::string const & getName() const;
		 void equip(AMateria* m);
		 void unequip(int idx);
		 void use(int idx, Character& target);
};

#endif