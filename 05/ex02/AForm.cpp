#include "AForm.hpp"

AForm::AForm() : _Name("Default"), _Signed(false), _SignGrade(150), _ExecGrade(150){
	std::cout << "SIGNGRADE WAS SET AS " << _SignGrade << ", EXECGRADE WAS SET AS " << _ExecGrade << " AND NAME AS "  << _Name << "." << std::endl;
}

AForm::AForm(std::string Name, int SignGrade, int ExecGrade) : _Name(Name), _Signed(false), _SignGrade(SignGrade), _ExecGrade(ExecGrade){
	if (_ExecGrade > 150 || _SignGrade > 150)
		throw GradeTooLowException();
	if (_ExecGrade < 1 || _SignGrade < 1)
		throw GradeTooHighException();
	std::cout << "SIGNGRADE WAS SET AS " << _SignGrade << ", EXECGRADE WAS SET AS " << _ExecGrade << " AND NAME AS "  << _Name << "." << std::endl;
}

AForm::AForm(const AForm& copy) : _Name(copy._Name), _Signed(copy._Signed), _SignGrade(copy._SignGrade), _ExecGrade(copy._ExecGrade) {
}

AForm& AForm::operator=(const AForm& copy) {
	(void)copy;
	return *this;
}

AForm::~AForm(){
}

const std::string AForm::getName() const {
	return this->_Name;
}

bool AForm::isSigned() const {
	return this->_Signed;
}

int AForm::getSignGrade() const {
	return this->_SignGrade;
}

int AForm::getExecGrade() const {
	return this->_ExecGrade;
}


void AForm::beSigned(Bureaucrat &bc){
	if (bc.getGrade() > _SignGrade)
		throw GradeTooLowException();
	_Signed = bc.signForm(_SignGrade, _Name, _Signed);
}

bool AForm::checkForm(const Bureaucrat& executor) const{
	if (getSignGrade() < executor.getGrade() || getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
	return (_Signed);
}

const char *AForm::GradeTooHighException::what() const throw (){
	return "AForms Grade is too high.";
}

const char *AForm::GradeTooLowException::what() const throw (){
	return "AForms Grade is too low.";
}

std::ostream& operator<<(std::ostream& out, AForm const& AForm){
	out << "Form Info:\n  Name: " << AForm.getName() << "\n  SignGrade: "
	<< AForm.getSignGrade() << "\n  ExecGrade: " << AForm.getExecGrade()
	<< "\n  Form is Signed: " << (AForm.isSigned() ? "Yes" : "No");
	return out;
}
