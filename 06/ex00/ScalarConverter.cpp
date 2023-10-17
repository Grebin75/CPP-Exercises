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
	std::cout << "Type: " << setType(av) << std::endl;
	//setType(av);
}


int ScalarConverter::intCheck(std::string av){
	int i = (av[0] == '-' || av[0] == '+');
	for (; av[i]; i++){
		if(!isdigit(av[i]))
			return 0;
	}
	return 1;
}

int ScalarConverter::doubleCheck(std::string av){
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
	return ((dot) ? 1 : 0);
}

int ScalarConverter::floatCheck(std::string av){
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
			return 0;
		}
	}
	return ((av[i] == 'f' && dot) ? 1 : 0);
}

int ScalarConverter::setType(std::string av){
	if (av.length() == 1 && (av[0] < '0' || av[0] > '9'))
		return 1;
	if (intCheck(av))
		return 2;
	if (floatCheck(av))
		return 3;
	if (doubleCheck(av))
		return 4;
	return 0;
}

ScalarConverter::~ScalarConverter(){}