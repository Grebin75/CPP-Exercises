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
		static int setType(std::string av);
		static int intCheck(std::string av);
		static int floatCheck(std::string av);
		static int doubleCheck(std::string av);
		static int pseudoCheck(std::string av);
		static void printChar(std::string av);
		static void printInt(std::string av);
		static void printFloat(std::string av);
		static void printDouble(std::string av);
		static void printPFloat(std::string av);
		static void printPDouble(std::string av);
	
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
#endif