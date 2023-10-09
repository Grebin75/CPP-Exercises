#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbe", 145, 137){
	_Target = "";

	_Tree =	"	 oxoxoo    ooxoo\n"
		"  ooxoxo oo  oxoxooo\n"
		" oooo xxoxoo ooo ooox\n"
		" oxo o oxoxo  xoxxoxo\n"
		"  oxo xooxoooo o ooo\n"
		"    ooo\\oo\\  /o/o\n"
		"        \\  \\/ /\n"
		"         |   /\n"
		"         |  |\n"
		"         | D|\n"
		"         |  |\n"
		"         |  |\n"
		"  ______/____\\____\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("Shrubbe", 145, 137){
	_Target = Target;
	_Tree =	"	 oxoxoo    ooxoo\n"
		"  ooxoxo oo  oxoxooo\n"
		" oooo xxoxoo ooo ooox\n"
		" oxo o oxoxo  xoxxoxo\n"
		"  oxo xooxoooo o ooo\n"
		"    ooo\\oo\\  /o/o\n"
		"        \\  \\/ /\n"
		"         |   /\n"
		"         |  |\n"
		"         | D|\n"
		"         |  |\n"
		"         |  |\n"
		"  ______/____\\____\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy){
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy){
	_Target = copy._Target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::executor() const{
	std::ofstream	out;
	out.open((_Target + "_shrubbery").c_str());
	if (!out.is_open())
	{
		std::cout << "Failed to create outfile" << std::endl;
		return ;
	}
	out << _Tree;
	out << _Tree;
	out.close();
}
