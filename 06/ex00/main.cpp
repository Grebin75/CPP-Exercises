#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2 || !av[1][0])
	{
		std::cerr << "Invalid Argument." << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
}