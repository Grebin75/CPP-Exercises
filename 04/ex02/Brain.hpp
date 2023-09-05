#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		Brain(const Brain &copy);
		Brain& operator=(const Brain &copy);
		~Brain();

};
#endif