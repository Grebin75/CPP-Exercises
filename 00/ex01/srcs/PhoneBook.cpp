#include "../PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->index = 0;
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::ADD()
{
	str		input = "";

	system("clear");
	if (index > 7)
	{
		std::cout << "Contact limit reached old contacts will be overwritten\n";
		index = 0;
	}

	std::cout << "Insert first name: \n";
	getline(std::cin, input);
	contacts[index].Set_FirstName(input);

	std::cout << "Insert last name: \n";
	getline(std::cin, input);
	contacts[index].Set_LastName(input);

	std::cout << "Insert nickame: \n";
	getline(std::cin, input);
	contacts[index].Set_Nickname(input);

	std::cout << "Insert phone number:\n";
	getline(std::cin, input);
	contacts[index].Set_PhoneNum(input);

	std::cout << "Insert secret: \n";
	getline(std::cin, input);
	contacts[index].Set_Secret(input);

	index++;
}


void PhoneBook::Ident(std::string str)
{
	if (str.length() <= 10) {
		std::cout << std::setw(10) << str;
		return ;
	}
	std::cout << std::setw(9) << str.substr(0, 9);
	std::cout << std::setw(1) << '.';
	return ;
}

void	PhoneBook::Print_All()
{
	int		index = -1;

	system("clear");
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	std::cout << "|Index     |FirstName |LastName  |NickName  |" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	while (index < 7 && contacts[++index].Full())
	{
		std::cout << "|         ";
		std::cout << index;
		std::cout << '|';
		Ident(contacts[index].Get_Info("First"));
		std::cout << '|';
		Ident(contacts[index].Get_Info("Last"));
		std::cout << '|';
	Ident(contacts[index].Get_Info("Nick"));
		std::cout << '|';
		std::cout << '\n';
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	}
}


void	PhoneBook::SEARCH()
{
	int	input = 1;

	Print_All();
	if (!contacts[0].Full())
		return;
	std::cout << "\nType a number between 1 and 8 to select a contact.\n";
	std::cin >> input;
	if (input - 1 >= 0 && input - 1 <= 9)
	{
		if (contacts[input -1].Full())
			contacts[input - 1].Print_Contact();
	}
}
