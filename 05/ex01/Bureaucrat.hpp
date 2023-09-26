#pragma once

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Form.hpp"


class Form;

class Bureaucrat{
	private:
		int _Grade;
		const std::string _Name;

	public:
		Bureaucrat();
		Bureaucrat(int Grade, std::string Name);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat();
		
		struct GradeTooHighException : public std::exception{
			public:
			  const char * what () const throw ();
		};

		struct GradeTooLowException : public std::exception{
			public:
			  const char * what () const throw ();
		};

		int getGrade() const;
		const std::string getName() const;
		void downGrade(int Amount);
		void upGrade(int Amount);

		bool signForm(int signGrade, std::string formName, bool Signed);
};

std::ostream& operator<<(std::ostream& out,  Bureaucrat const& bureaucrat);
	