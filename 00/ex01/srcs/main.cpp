#include "../phonebook.hpp"

int		main()
{
	contact contact, contact2;
	

	contact.Add_FirstName("Henrique");
	contact.Add_LastName("Grebin");
	contact.Add_Nickname("Grebinolas");
	contact.Add_PhoneNum("961408273");
	contact.Add_Secret("NULL");

	contact.Print_All();
}