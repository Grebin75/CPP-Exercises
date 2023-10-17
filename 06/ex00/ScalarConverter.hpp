#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>

class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		static int setType(std::string av);
		static int intCheck(std::string av);
		static int floatCheck(std::string av);
		static int doubleCheck(std::string av);
	
	public:
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter();
		static void convert(std::string av);
};
#endif