#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern{
	private:
	public:
		Intern();
		~Intern();
		Intern(const Intern &copy);
		Intern& operator= (const Intern &copy);

		AForm *makeForm(std::string form, std::string target);
		AForm *makeShrub(std::string target);
		AForm *makePres(std::string target);
		AForm *makeRobot(std::string target);
};

#endif