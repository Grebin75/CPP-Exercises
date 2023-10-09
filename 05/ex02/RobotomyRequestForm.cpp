#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45){
	_Target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("Robotomy", 72, 45){
	_Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy){
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy){
	_Target = copy._Target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::executor() const{
	srand(time(NULL));
	std::cout << "*Drilling noises*\n";
	if (rand() % 2)
		return ((void) (std::cout << _Target << " has been successfully robotomized." << std::endl));
	return ((void) (std::cout << _Target << " robotization failed." << std::endl));
}
