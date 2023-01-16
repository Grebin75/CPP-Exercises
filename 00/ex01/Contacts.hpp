#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <cstdlib>

typedef std::string	str;

class Contact{
	private:
		str			Frist_Name;
		str			Last_Name;
		str			Nickname;
		str			Phone_Num;
		str			Secret;
		str			Ident_Info(str info);

	public:
		void		Set_FirstName(str First_Name);
		void		Set_LastName(str Last_Name);
		void		Set_Nickname(str Nickname);
		void		Set_PhoneNum(str PhoneNum);
		void		Set_Secret(str Secret);
		void		Print_Contact();
		str			Get_Info(str info);
		bool		Full();
		Contact();

};

#endif
