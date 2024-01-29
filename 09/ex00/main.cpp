#include "BitcoinExchange.hpp"


int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Try ./btc 'intput_file'." << std::endl;
		return 1; 
	}

	std::map<std::string, float> BTCbase;
	calcBTC(av[1]);
	/* readBase(BTCbase);
	std::map<std::string, float>::iterator it = BTCbase.begin();
 
    while (it != BTCbase.end()) {
        std::cout << "Date: " << it->first
             << " Value: " << it->second << std::endl;
        ++it;
    } */
}