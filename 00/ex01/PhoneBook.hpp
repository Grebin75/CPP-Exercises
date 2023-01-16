#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <cstdlib>
# include "Contacts.hpp"

typedef std::string	str;

class PhoneBook{
	private:
		Contact	contacts[8];
		int		index;
		void	Print_All();

	public:
		PhoneBook();
		void SEARCH();
		void ADD();
};

#endif
