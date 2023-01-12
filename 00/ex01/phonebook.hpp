#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>

typedef std::string	str;

class contact{
	private:
		str 		Frist_Name;
		str 		Last_Name;
		str 		Nickname;
		str			Phone_Num;
		str 		Secret;
		str			Get_Info(str info);
	
	public:
		void	Add_FirstName(str FirstName);
		void	Add_LastName(str LastName);
		void	Add_Nickname(str nickname);
		void	Add_PhoneNum(str PhoneNum);
		void	Add_Secret(str secret);
		void	Print_All();

};

class phonebook{
	private:
		contact contacts[8];
	public:
};
#endif 
