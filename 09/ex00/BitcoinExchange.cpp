#include "BitcoinExchange.hpp"


std::map<std::string, float>& readBase(std::map<std::string, float>& BTC){

	std::ifstream   BTCbase("data.csv");
	std::string 	date;
	std::string 	value;

	std::getline(BTCbase, date);

	while (BTCbase){
		std::getline(BTCbase, date, ',');
		std::getline(BTCbase, value);
		BTC[date] = strtof(value.c_str(), NULL);
	}
	BTCbase.close();
	return BTC;
} 

void calcBTC(char *file){
	std::ifstream  input(file);
	std::string line;

	if (!input.is_open())
		return (void)(std::cout << "Error: Invalid input file" << std::endl);
	if (input)
		getline(input, line);
	if (line != "date | value")
	{
		input.close();
		return (void)(std::cout << "Error: Missing 'date | value' at the beginning of the file" << std::endl);
	}

	while (input){
		try{
			getline(input, line);
			checkLine(line);
		}
		catch (std::runtime_error &error){
			std::cerr << error.what() << '\n';
		}
	}
	input.close();
}

void checkLine(std::string line){
	std::string error;
	if (line.empty() || line.length() < 14 || line[10] != ' ' || line[11] != '|' || line[12] != ' ' || line[13] == ' ')
	{
		error = "Error: bad input => " + line;
		throw std::runtime_error(error.c_str());
	}
	
}


