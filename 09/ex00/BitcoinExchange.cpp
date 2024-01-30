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
	getline(input, line);
	if (line != "date | value")
	{
		input.close();
		return (void)(std::cout << "Error: Missing 'date | value' at the beginning of the file" << std::endl);
	}
	while (!input.eof()){
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

bool isLeap(int Year){
	if (Year % 4 == 0)
		if ((Year % 100 == 0 && Year % 400 == 0) || Year % 100 != 0)
				return true;
	return false;
}

void checkDate(int Y, int M, int D, std::string line){
	std::string error;

	if((Y < 2009 || (Y == 2009 && (M == 1 && D == 1))) || Y > 2024){
		error = "Error: Year must be between 2009 and 2024 => " + line;
		throw std::runtime_error(error.c_str());
	}
	if ((M == 4 || M == 6 || M == 9 || M == 11) && (D <= 0 || D > 30)){
		error = "Error: April, June, September and November only have 30 days => " + line;
		throw std::runtime_error(error.c_str());
	}
	if (!(M == 4 || M == 6 || M == 9 || M == 11) && (D <= 0 || D > 31)){
		error = "Error: January, March, May, July, August, October and December only have 31 days => " + line;
		throw std::runtime_error(error.c_str());
	}
	if ((M == 2 && ((isLeap(Y) && (D <= 0 || D > 29)) || (!isLeap(Y) && (D <= 0 || D > 28))))){
		error = "Error: February only have 28 days on a non leap year and 29 days on a leap year => " + line;
		throw std::runtime_error(error.c_str());
	}
}

void checkLine(std::string line){
	std::string error;

	if (line.empty() || line.length() < 14 || line[10] != ' ' || line[11] != '|' || line[12] != ' ' || line[13] == ' '){
		error = "Error: bad input => " + line;
		throw std::runtime_error(error.c_str());
	}

	std::string date = line.substr(0, line.find(' '));
	int i = 0;
	i = line.find('-', i) + 1;
	int Year = atoi(line.substr(0, i).c_str());
	int Month = atoi(line.substr(i, line.find('-', i)).c_str());
	i = line.find('-', i) + 1;
	int Day = atoi(line.substr(i, line.find(' ')).c_str());
	i = line.find(' ', i) + 3;
	double Value = atof(line.substr(i).c_str());
	
	if (Value > 1000){
		error = "Error: A valid value must be between 0 and 1000 => " + line;
		throw std::runtime_error(error.c_str());
	}
	checkDate(Year, Month, Day, line);
	calc(date, Value);
}

/* void calc(std::string date, double Value){
	std::map<std::string, float> BTCbase;
	readBase(BTCbase);

} */





