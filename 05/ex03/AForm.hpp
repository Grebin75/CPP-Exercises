#ifndef AFROM_HPP
#define AFROM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm{
	private:
		const std::string _Name;
		bool _Signed;
		const int _SignGrade;
		const int _ExecGrade;
	public:
		AForm();
		AForm(std::string Name, int SignGrade, int ExecGrade);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		virtual ~AForm();

		const std::string getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat &bc);
		void checkForm(Bureaucrat const & executor) const;
		void execute(Bureaucrat const & executor) const;
		virtual void executor() const = 0;


	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw ();
	};

	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw ();
	};

	class FormIsntSignedException : public std::exception{
		public:
			const char *what() const throw ();

	};

	class ExecuteErrorException : public std::exception{
		public:
			const char *what() const throw ();

	};
};
std::ostream& operator<<(std::ostream& out,  AForm const& AForm);

#endif