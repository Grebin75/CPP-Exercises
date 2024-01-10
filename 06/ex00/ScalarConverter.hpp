#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <float.h>
#include <climits>
#include <limits>

class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
	
	public:
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter();
		static void convert(std::string av);

		class InvalidArg : public std::exception{
		public:
			const char *what() const throw ();
	};
};

int typeSelecter(std::string av);
bool intCheck(std::string av);
bool floatCheck(std::string av);
bool doubleCheck(std::string av);
int pseudoCheck(std::string av);
void printChar(std::string av);
void printInt(std::string av);
void printFloat(std::string av);
void printDouble(std::string av);
void printPFloat(std::string av);
void printPDouble(std::string av);
#endif