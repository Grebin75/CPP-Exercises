#include "BitcoinExchange.hpp"


int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Try ./btc 'intput_file'." << std::endl;
		return 1; 
	}
	std::cout << std::fixed << std::setprecision(2);
	calcBTC(av[1]);
}