#include "../PhoneBook.hpp"

int		main()
{
	PhoneBook	phonebook;
	bool		exit = false;
	str			input;


	while (exit == false)
	{
		std::cin >> input;
		if (!input.compare("ADD"))
			phonebook.ADD();
		if (!input.compare("SEARCH"))
			phonebook.SEARCH();
		if (!input.compare("EXIT"))
			exit = true;
	}
	std::cout << "EXIT SELECTED\n";
}
