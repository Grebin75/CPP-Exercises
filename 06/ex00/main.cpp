#include "ScalarConverter.hpp"

int main(int ac, char **av){
	std::cout << static_cast<int>(float(2147483647.0f)) << std::endl;
	std::cout << static_cast<int>(2147483647.0f) << std::endl;
	std::cout << atof("2147483647.0f") << std::endl;
	std::cout << static_cast<int>((float)atof("2147483647.0f")) << std::endl;
	if (ac != 2 || !av[1][0])
	{
		std::cerr << "Invalid Argument." << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
}