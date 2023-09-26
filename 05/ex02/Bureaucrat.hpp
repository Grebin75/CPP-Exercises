#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include "AForm.hpp"


class AForm;

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
		
		int getGrade() const;
		const std::string getName() const;
		void downGrade(int Amount);
		void upGrade(int Amount);

		bool signForm(int signGrade, std::string formName, bool Signed);
		bool executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception{
			public:
			  const char * what () const throw ();
		};

		class GradeTooLowException : public std::exception{
			public:
			  const char * what () const throw ();
		};
};

std::ostream& operator<<(std::ostream& out,  Bureaucrat const& bureaucrat);

#endif