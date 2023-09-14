#include "Bureaucrat.hpp"


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
	std::cout << "--------------- // TEST 1 // ---------------" << std::endl;
	bureauCreater(20, "TEST 1");
	std::cout << "--------------- // TEST 1 FINISHED // ---------------\n" << std::endl;

	std::cout << "--------------- // TEST 2 // ---------------" << std::endl;
	bureauCreater(1, "TEST 2");
	std::cout << "--------------- // TEST 2 FINISHED // ---------------\n" << std::endl;

	std::cout << "--------------- // TEST 3 // ---------------" << std::endl;
	bureauCreater(150, "TEST 3");
	std::cout << "--------------- // TEST 3 FINISHED // ---------------\n" << std::endl;

		std::cout << "--------------- // TEST 4 // ---------------" << std::endl;
	bureauCreater(151, "TOO LOW");
	bureauCreater(0, "TOO HIGH");
	std::cout << "--------------- // TEST 4 FINISHED // ---------------\n" << std::endl;
};