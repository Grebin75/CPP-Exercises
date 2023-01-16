#include "../PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->index = 0;
}

void	PhoneBook::ADD()
{
	str		input;

	if (index > 7)
		index = 0;

	std::cout << "Insert first name: \n";
	std::cin >> input;
	contacts[index].Set_FirstName(input);

	std::cout << "Insert last name: \n";
	std::cin >> input;
	contacts[index].Set_LastName(input);

	std::cout << "Insert nickame: \n";
	std::cin >> input;
	contacts[index].Set_Nickname(input);

	std::cout << "Insert phone number:\n";
	std::cin >> input;
	contacts[index].Set_PhoneNum(input);

	std::cout << "Insert secret: \n";
	std::cin >> input;
	contacts[index].Set_Secret(input);

	index++;
}

void	PhoneBook::Print_All()
{
	int		index = -1;

	system("clear");
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	std::cout << "|Index     |FirstName |LastName  |NickName  |" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	while (contacts[++index].Full())
	{
		std::cout << "|" << index + 1 << ".        |"<< contacts[index].Get_Info("First")<< "|" << contacts[index].Get_Info("Last") << "|" << contacts[index].Get_Info("Nick") << "|" << std::endl;
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	}
}


void	PhoneBook::SEARCH()
{
	int	input = 1;

	Print_All();
	if (!contacts[0].Full())
		return;
	std::cin >> input;
	if (input - 1 >= 0 && input - 1 <= 9)
		contacts[input - 1].Print_Contact();

}
