#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _Target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		void executor() const;
};

#endif