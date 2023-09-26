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

void AForm::checkForm(const Bureaucrat& executor) const{
	if (getSignGrade() < executor.getGrade() || getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
	if (!isSigned())
		throw FormIsntSignedException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!executor.executeForm(*this))
		throw ExecuteErrorException();
	this->executor();
}

const char *AForm::GradeTooHighException::what() const throw (){
	return "Form grade is too high.";
}

const char *AForm::GradeTooLowException::what() const throw (){
	return "Form grade is too low.";
}

const char *AForm::FormIsntSignedException::what() const throw (){
	return "Form isnt signed.";
}

const char *AForm::ExecuteErrorException::what() const throw (){
	return "Error while executing form.";
}

std::ostream& operator<<(std::ostream& out, AForm const& AForm){
	out << "Form Info:\n  Name: " << AForm.getName() << "\n  SignGrade: "
	<< AForm.getSignGrade() << "\n  ExecGrade: " << AForm.getExecGrade()
	<< "\n  Form is Signed: " << (AForm.isSigned() ? "Yes" : "No");
	return out;
}
