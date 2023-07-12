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
		Zombie(str name);
		~Zombie();
		void announce(void);
		void randomChump(str name);
};

Zombie *newZombie(str name);
void randomChump(str name);
#endif