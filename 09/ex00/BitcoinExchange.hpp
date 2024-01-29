#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <string>
#include <fstream>

void calcBTC(char *file);
void checkLine(std::string line);
std::map<std::string, float>& readBase(std::map<std::string, float>& BTC);


/* class MyException: public std::exception {
	private:
		std::string _message;
	public:
 		explicit MyException(const std::string& message);
   		const char *what() const throw(){
     	   return _message.c_str();
    	}
}; */

#endif