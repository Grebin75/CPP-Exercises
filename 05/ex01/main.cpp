#include "Form.hpp"


// This test will awalys try to upgrade and downgrade by 10 to check the exceptions.
void bureauCreater(int Grade, std::string Name){

		try{
			Bureaucrat test(Grade, Name);
			test.upGrade(10);
			std::cout << test << std::endl;
			test.downGrade(10);
			if (Grade == 150)
				test.downGrade(10);
			std::cout << test << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
		catch (Bureaucrat::GradeTooLowException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
}


int main(){
	Form form("Human Rights", 1, 1);
	std::cout << form << std::endl;
};
