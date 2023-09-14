#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>


class Bureaucrat{
	private:
		int _Grade;
		const std::string _Name;

	public:
		Bureaucrat();
		Bureaucrat(int Grade, std::string Name);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat();
		
		struct GradeTooHighException : public std::exception{
			public:
			  const char * what () const throw () {
      			return "Grade is too high. Max grade is 1.";
		}
		};

		struct GradeTooLowException : public std::exception{
			public:
			  const char * what () const throw () {
      			return "Grade is too low. Minimum grade is 150.";
   			}
		};

		int getGrade() const;
		const std::string getName() const;
		void downGrade(int Amount);
		void upGrade(int Amount);
};

std::ostream& operator<<(std::ostream& out,  Bureaucrat const& bureaucrat);
	
#endif