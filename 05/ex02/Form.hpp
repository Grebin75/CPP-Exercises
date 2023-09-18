#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Bureaucrat.hpp"

class Form{
	private:
		const std::string _Name;
		bool _Signed;
		const int _SignGrade;
		const int _ExecGrade;
	public:
		Form();
		Form(std::string Name, int SignGrade, int ExecGrade);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

		const std::string getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat &bc);


	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw ();
	};

	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw ();
	};

};

std::ostream& operator<<(std::ostream& out,  Form const& form);
#endif
