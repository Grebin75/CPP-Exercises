#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Shrubbe", 25, 5){
	_Target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("Shrubbe", 145, 137){
	_Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy){
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy){
	_Target = copy._Target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::executor() const{

	//do something.
}
