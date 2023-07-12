#ifndef Zombie_H
# define Zombie_H

# include <string>
# include <iostream>
# include <cstdlib>

typedef std::string	str;

class Zombie{
	private:
		str name;

	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setNamne(str name);
};

Zombie* zombieHorde( int N, std::string name );
#endif