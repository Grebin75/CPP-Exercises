#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Pardon", 25, 5){
	_Target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("Pardon", 25, 5){
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
	std::cout << _Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
