#include "../PhoneBook.hpp"

int		main()
{
	PhoneBook	phonebook;
	str			input;

	while (!std::cin.eof())
	{
		system("clear");
		std::cout << "Type ADD to add a contact.\nType SEARCH to search a contact.\nType EXIT to leave.\n\n";
		getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.ADD();
		if (!input.compare("SEARCH"))
			phonebook.SEARCH();
		if (!input.compare("EXIT"))
			break;
		std::cin.clear();
	}
	std::cout << "EXIT\n";
}
