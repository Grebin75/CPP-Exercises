#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class Form{
	private:
		const std::string _Name;
		bool _Signed;
		const int _SignGrade;
		const int _ExecGrade;

};

std::ostream& operator<<(std::ostream& out,  Form const& form);
#endif