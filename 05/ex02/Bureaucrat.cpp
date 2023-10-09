#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Grade(150), _Name("Default"){
	std::cout << "GRADE WAS SET AS " << _Grade << " AND NAME AS "  << _Name << "." << std::endl;
}

Bureaucrat::Bureaucrat(int Grade, std::string Name) : _Name(Name){
	if (Grade > 150)
		throw GradeTooLowException();
	if (Grade < 1)
		throw GradeTooHighException();
	_Grade = Grade;
	std::cout << "GRADE WAS SET AS " << _Grade << " AND NAME AS "  << _Name << "." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _Grade(copy._Grade) , _Name(copy._Name){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy){
	_Grade = copy._Grade;
	return *this;
}

int Bureaucrat::getGrade() const{
	return this->_Grade;
}

const std::string Bureaucrat::getName() const{
	return this->_Name;
}


void Bureaucrat::upGrade(int Amount){
	if ((_Grade - Amount) < 1)
		throw GradeTooHighException();
	_Grade -= Amount;
	std::cout << "GRADE WAS UPGRADED BY " << Amount << "." << std::endl;
}

void Bureaucrat::downGrade(int Amount){
	if ((_Grade + Amount) > 150)
		throw GradeTooLowException();
	_Grade += Amount;
	std::cout << "GRADE WAS DOWNGRADED BY " << Amount << "." << std::endl;
}

bool Bureaucrat::signForm(int signGrade, std::string formName, bool Signed){
	if (!Signed && _Grade <= signGrade){
		std::cout << _Name << " signed " << formName << std::endl;
		return true;
	}
	std::cout << _Name << " couldn’t sign " << formName << " because is already signed" << std::endl;
	return true;
}

void Bureaucrat::executeForm(AForm const & form) const{
	if (form.isSigned() && _Grade <= form.getExecGrade()){
		std::cout << _Name << " executed " << form.getName() << std::endl;
		return ;
	}
	!form.isSigned() ? throw AForm::FormIsntSignedException() : throw AForm::GradeTooHighException();
}


const char *Bureaucrat::GradeTooHighException::what() const throw (){
	return "Grade is too high. Max grade is 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw (){
	return "Grade is too low. Minimum grade is 150.";
}

Bureaucrat::~Bureaucrat(){
}

std::ostream& operator<<(std::ostream& out,  Bureaucrat const& bureaucrat){
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
