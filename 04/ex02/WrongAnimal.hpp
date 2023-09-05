#ifndef	WrongAnimal_H
# define WrongAnimal_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>


class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &copy);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif
