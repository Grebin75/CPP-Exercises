#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Shrubbe", 72, 45){
	_Target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("Shrubbe", 145, 137){
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

	//do something.
}
