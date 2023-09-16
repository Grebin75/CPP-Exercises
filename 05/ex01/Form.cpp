#include "Form.hpp"

Form::Form() : _Name("Default"), _Signed(false), _SignGrade(150), _ExecGrade(150){
	std::cout << "SIGNGRADE WAS SET AS " << _SignGrade << ", EXECGRADE WAS SET AS " << _ExecGrade << " AND NAME AS "  << _Name << "." << std::endl;
}

Form::Form(std::string Name, int SignGrade, int ExecGrade) : _Name(Name), _Signed(false), _SignGrade(SignGrade), _ExecGrade(ExecGrade){
	if (_ExecGrade > 150 || _SignGrade > 150)
		throw GradeTooLowException();
	if (_ExecGrade < 1 || _SignGrade < 1)
		throw GradeTooHighException();
	std::cout << "SIGNGRADE WAS SET AS " << _SignGrade << ", EXECGRADE WAS SET AS " << _ExecGrade << " AND NAME AS "  << _Name << "." << std::endl;
}

Form::Form(const Form& copy) : _Name(copy._Name), _Signed(copy._Signed), _SignGrade(copy._SignGrade), _ExecGrade(copy._ExecGrade) {
}

Form& Form::operator=(const Form& copy) {
	(void)copy;
	return *this;
}

Form::~Form(){
}

const std::string Form::getName() const {
	return this->_Name;
}

bool Form::isSigned() const {
	return this->_Signed;
}

int Form::getSignGrade() const {
	return this->_SignGrade;
}

int Form::getExecGrade() const {
	return this->_ExecGrade;
}


void Form::beSigned(Bureaucrat &bc){
	if (bc.getGrade() > _SignGrade)
		throw GradeTooLowException();
	_Signed = bc.signForm(_SignGrade, _Name, _Signed);
}


const char *Form::GradeTooHighException::what() const throw (){
	return "Forms Grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw (){
	return "Forms Grade is too low.";
}

std::ostream& operator<<(std::ostream& out, Form const& form){
	out << "Form Info:\n  Name: " << form.getName() << "\n  SignGrade: "
	<< form.getSignGrade() << "\n  ExecGrade: " << form.getExecGrade()
	<< "\n  Form is Signed: " << (form.isSigned() ? "Yes" : "No");
	return out;
}
