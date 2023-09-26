#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbe", 145, 137){
	_Target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("Shrubbe", 145, 137){
	_Target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy){
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy){
	_Target = copy._Target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::executor() const{

	//do something.
}
