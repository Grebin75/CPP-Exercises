#include "Intern.hpp"

Intern::Intern(){

}

Intern::Intern(const Intern& copy){
	(void)copy;
	return;
}

Intern &Intern::operator=(const Intern& copy){
	(void)copy;
	return *this;
}

AForm *Intern::makePres(std::string target){
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeShrub(std::string target){
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobot(std::string target){
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeForm(std::string form, std::string target){
	std::string names[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm *(Intern::*func[3])(std::string target) = {&Intern::makeRobot, &Intern::makeShrub, &Intern::makePres};
	for (int i = 0; i < 3; i++)
	{
		if (form == names[i])
			return (this->*func[i])(target);
	}	
	std::cout << "Invalid form name." << std::endl;
	return 0;
}

Intern::~Intern(){

}