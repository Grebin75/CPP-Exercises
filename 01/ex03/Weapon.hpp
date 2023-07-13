#ifndef Weapon_H
# define Weapon_H

# include <string>
# include <iostream>
# include <cstdlib>

typedef std::string	str;

class Weapon{
	private:
		str type;

	public:
		Weapon(str type);
		~Weapon();
		void setType(str type);
		str getType();
};

#endif