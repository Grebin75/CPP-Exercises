#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}


ScalarConverter::ScalarConverter(const ScalarConverter& copy){
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy){
	(void)copy;
	return *this;
}

void ScalarConverter::convert(std::string av){
	int type = typeSelecter(av);
	try{
		switch (type){
			case 1:
				return printChar(av);
			case 2:
				return printInt(av);
			case 3:
				return printFloat(av);
			case 4:
				return printDouble(av);
			case 5:
				return printPDouble(av);
			case 6:
				return printPFloat(av);
			default:
				throw ScalarConverter::InvalidArg();
		}
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void printChar(std::string av){
	std::cout << "Char: '" << av[0] << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(av[0]) << std::endl;
	std::cout << "Float: " << static_cast<float>(av[0]) << ".0f" << std::endl;
	std::cout << "Double: "<< static_cast<double>(av[0]) << ".0" << std::endl;
}

void printInt(std::string av){
	long test = std::strtol(av.c_str(), NULL, 10);
	if (test > std::numeric_limits<int>::max() || test < std::numeric_limits<int>::min())
		throw ScalarConverter::InvalidArg();
	int num = atoi(av.c_str());
	char c = static_cast<char>(num);
	if (num >= 32 && num <= 126)
		std::cout << "Char: '" << c << "'" << std::endl;
	else
		std::cout << "Char: " << ((num < 0 || num > 127) ? "Impossible" : "Non displayable") << std::endl;
	std::cout << "Int: " << num << std::endl;
	std::cout << "Float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(num) << ".0" << std::endl;
}

void printFloat(std::string av){
	float num = strtof(av.c_str(), NULL);
	if (num == HUGE_VALF || num == -HUGE_VALF)
		throw ScalarConverter::InvalidArg();
	char	c = static_cast<char>(num);
	int 	i = static_cast<int>(num);

	if (num >= 32 && num <= 126)
		std::cout << "Char: '" << c << "'" << std::endl;
	else
		std::cout << "Char: " << ((num < 0 || num > 127) ? "Impossible" : "Non displayable") << std::endl;
	if (num >= INT_MAX || num <= INT_MIN)
		std::cout << "Int: " << "Impossible" << std::endl;
	else
		std::cout << "Int: " << i << std::endl;
	std::cout << "Float: " << num << ((num == i) ? ".0f" : "f") << std::endl;
	std::cout << "Double: " << static_cast<double>(num) << ((num == i) ? ".0" : "") << std::endl;
}

void printDouble(std::string av){
	double	num = strtod(av.c_str(), NULL);

	if (num == HUGE_VAL || num == -HUGE_VAL)
		throw ScalarConverter::InvalidArg();

	char	c = static_cast<char>(num);
	int 	i = static_cast<int>(num);

	if (num >= 32 && num <= 126)
		std::cout << "Char: '" << c << "'" << std::endl;
	else
		std::cout << "Char: " << ((num < 0 || num > 127) ? "Impossible" : "Non displayable") << std::endl;
	if (num >= INT_MAX || num <= INT_MIN)
		std::cout << "Int: " << "Impossible" << std::endl;
	else
		std::cout << "Int: " << i << std::endl;
	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
		std::cout << "Float: " << "Impossible" << std::endl;
	else
		std::cout << "Float: " << static_cast<float>(num) << ((num == i) ? ".0f" : "f") << std::endl;
	std::cout << "Double: " << num << ((num == i) ? ".0" : "") << std::endl;
	

}
void printPDouble(std::string av){
	std::cout << "Char: " << "Impossible\n";
	std::cout << "Int: " << "Impossible\n";
	if (av == "inf")
		return (void)(std::cout << "Float: " << static_cast<float>(strtod(av.c_str(), NULL)) << "f\nDouble: inf" << std::endl);
	if (av == "-inf")
		return (void)(std::cout << "Float: " << static_cast<float>(strtod(av.c_str(), NULL)) << "f\nDouble: -inf" << std::endl);
	if (av == "nan")
		return (void)(std::cout << "Float: " << static_cast<float>(strtod(av.c_str(), NULL)) << "f\nDouble: nan" << std::endl);
}

void printPFloat(std::string av){
	std::cout << "Char: " << "Impossible\n";
	std::cout << "Int: " << "Impossible\n";
	if (av == "inff")
		return (void)(std::cout << "Float: inff\n" << "Double: " << static_cast<double>(strtof(av.c_str(), NULL))<< std::endl);
	if (av == "-inff")
		return (void)(std::cout << "Float: -inff\n" << "Double: " << static_cast<double>(strtof(av.c_str(), NULL))<< std::endl);
	if (av == "nanf")
		return (void)(std::cout << "Float: nanf\n" << "Double: " <<  static_cast<double>(strtof(av.c_str(), NULL))<< std::endl);
}



const char *ScalarConverter::InvalidArg::what() const throw (){
	return "Invalid/Overflow argument.\nTry with a char/int/float/double.";
}

ScalarConverter::~ScalarConverter(){}


void ex(std::string av){
	int type = typeSelecter(av);
	(void)type;
	/* switch (type){
		case 0:
			write char
		case 1:
			write int
		case 2:
			write float
		case 3:
			write double
		case ...
	} */
}

int typeSelecter(std::string av){
	if (av.length() == 1 && (av[0] < '0' || av[0] > '9')) 
		return 1;
	if (intCheck(av)) 
		return 2;
	if (floatCheck(av)) 
		return 3;
	if (doubleCheck(av))
		return 4;
	return pseudoCheck(av);
	
	
}

bool intCheck(std::string av){
	int i = (av[0] == '-' || av[0] == '+');
	for (; av[i]; i++){
		if(!isdigit(av[i]))
			return false;
	}
	return true;
}

bool doubleCheck(std::string av){
	int i = (av[0] == '-' || av[0] == '+');
	bool dot = false;

	for (; av[i]; i++){
		if(!isdigit(av[i])){
			if (av[i] == '.'){
				if (dot)
					return 0;
				dot = true;
				continue;
			}
			return 0;
		}
	}
	return ((dot) ? true : false);
}

bool floatCheck(std::string av){
	int i = (av[0] == '-' || av[0] == '+');
	bool dot = false;

	for (; av[i]; i++){
		if(!isdigit(av[i])){
			if (av[i] == '.'){
				if (dot)
					return 0;
				dot = true;
				continue;
			}
			else if (av[i] == 'f' && (int)av.length() - 1 == i && isdigit(av[i - 1]))
				break ;
			return false;
		}
	}
	return ((av[i] == 'f' && dot) ? true : false);
}

int pseudoCheck(std::string av){

	std::string	pseudo[6] = {"inf", "-inf", "nan", "inff", "-inff", "nanf"};

	for (int i = 0; i < 6; i++)
		if (pseudo[i] == av)
			return ((i > 2) + 5);
	return 0;
}