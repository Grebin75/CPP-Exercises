#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Bureaucrat.hpp"
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string _Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};



#endif