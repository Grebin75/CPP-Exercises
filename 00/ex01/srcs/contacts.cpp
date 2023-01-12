#include "../phonebook.hpp"

void  contact::Add_FirstName(str FirstName)
{
	Frist_Name = FirstName;
}

void  contact::Add_LastName(str LastName)
{
	Last_Name = LastName;
}

void  contact::Add_Nickname(str nickname)
{
	Nickname = nickname;
}

void  contact::Add_PhoneNum(str PhoneNum)
{
	Phone_Num = PhoneNum;
}

void  contact::Add_Secret(str secret)
{
	Secret = secret;
}

str	contact::Get_Info(str info)
{
	str	temp;

	if (info.length() >= 10)
	{
		temp = info.substr(0, 9);
		temp.append(".");
	}
	else
	{
		temp = info;
		while (temp.length() < 10)
			temp.insert(temp.length(), " ");
	}
	return temp;

}

void	contact::Print_All()
{
	str	temp;

	std::cout << "\n ---------- ---------- ---------- ---------- ----------" << std::endl;
	std::cout << "|FirstName |LastName  |Nickname  |PhoneNum  |DarkSecret|" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- ----------" << std::endl;
	std::cout << "|" << Get_Info(Frist_Name) << "|" << Get_Info(Last_Name);
	std::cout << "|" << Get_Info(Nickname) << "|" << Get_Info(Phone_Num) << "|" << Get_Info(Secret) << "|" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- ----------\n" << std::endl;

}