#include "Form.hpp"


void tester(int ExecGrade, int SignGrade,  std::string Name){

		try{
			Bureaucrat b(15, "Test");
			Form form(Name, SignGrade, ExecGrade);

			form.beSigned(b);
			//form.beSigned(b);
			std::cout << form << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
		catch (Bureaucrat::GradeTooLowException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
		catch (Form::GradeTooHighException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
		catch (Form::GradeTooLowException &error){
			std::cerr << error.what() << std::endl;
			return ;
		}
}


int main(){
	std::cout << "--------------- // TEST 1 // ---------------" << std::endl;
	tester(60, 60 , "TEST 1");
	std::cout << "--------------- // TEST 1 FINISHED // ---------------\n" << std::endl;
	
	std::cout << "--------------- // TEST 2 // ---------------" << std::endl;
	tester(60, 15 , "TEST 1");
	std::cout << "--------------- // TEST 2 FINISHED // ---------------\n" << std::endl;

	std::cout << "--------------- // TEST 3 // ---------------" << std::endl;
	tester(60, 1 , "TEST 1");
	std::cout << "--------------- // TEST 3 FINISHED // ---------------\n" << std::endl;

	std::cout << "--------------- // TEST 4 // ---------------" << std::endl;
	tester(151, 1, "a");
	tester(0, 1, "a");
	tester(1, 151, "a");
	tester(1,0, "a");
	std::cout << "--------------- // TEST 4 FINISHED // ---------------\n" << std::endl;
};
