#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string _Target;
		std::string _Tree;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		void executor() const;
};
#endif