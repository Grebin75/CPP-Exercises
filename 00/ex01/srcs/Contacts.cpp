#include "../Contacts.hpp"

Contact::Contact(){
}

void  Contact::Set_FirstName(str First_Name)
{
	this->Frist_Name = First_Name;
}

void  Contact::Set_LastName(str Last_Name)
{
	this->Last_Name = Last_Name;
}

void  Contact::Set_Nickname(str Nickname)
{
	this->Nickname = Nickname;
}

void  Contact::Set_PhoneNum(str Phone_Num)
{
	this->Phone_Num = Phone_Num;
}

void  Contact::Set_Secret(str Secret)
{
	this->Secret = Secret;
}

str		Contact::Get_Info(str info)
{
	if (!info.compare("First"))
		return (Frist_Name);
	if (!info.compare("Last"))
		return (Last_Name);
	if (!info.compare("Nick"))
		return (Nickname);
	return (NULL);
}

bool	Contact::Full()
{
	if (Frist_Name.empty())
		return (false);
	return (true);
}

void	Contact::Print_Contact() {
	str input;

	system("clear");
	std::cout << "First Name: " << this->Frist_Name << std::endl;
	std::cout << "Last Name: " << this->Last_Name << std::endl;
	std::cout << "Nickame: " << this->Nickname << std::endl;
	std::cout << "Phone Num: " << this->Phone_Num << std::endl;
	std::cout << "Secret: " << this->Secret << std::endl;

	std::cout << "Type DONE to back to menu.\n";
	while (!std::cin.eof())
	{
		std::cin >> input;
		if (!input.compare("DONE"))
			break;
	}

}
