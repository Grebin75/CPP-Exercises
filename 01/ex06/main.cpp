#include "HarlFilter.hpp"

int main (int argc, char **argv)
{
	Harl		Harl;
	str	ac;

	if (argc != 2)
	{
		std::cout << "Please select one of the 4 levels" << std::endl;
		std::cout << "1st -> DEBUG | 2nd -> INFO | 3rd -> WARNING | 4th -> ERROR" << std::endl;
		exit (EXIT_FAILURE);
	}
	if (!argv[1])
		return (1);
	Harl.complain(argv[1]);
	return (0);
}
