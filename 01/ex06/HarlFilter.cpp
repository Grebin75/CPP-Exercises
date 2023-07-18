#include "HarlFilter.hpp"


Harl::Harl(){
	this->func[0] = &Harl::debug;
	this->func[1] = &Harl::info;
	this->func[2] = &Harl::warning;
	this->func[3] = &Harl::error;
}

Harl::~Harl(){
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


unsigned int Harl::str2int(const char* str, int h)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}



void Harl::complain(const char *level)
{
	//int debug = str2int("DEBUG", 0);

	/* std::cout << str2int("DEBUG", 0) << std::endl;
	std::cout << str2int("INFO", 0) << std::endl;
	std::cout << str2int("WARNING", 0) << std::endl;
	std::cout << str2int("ERROR", 0) << std::endl; */


   switch (str2int(level, 0))
   {
		case 209478068:
			(this->*func[0])();
		case 2089022635:
			(this->*func[1])();
		case 47734607:
			(this->*func[2])();
		case 229190685:
		{
			(this->*func[3])();
			break;
		}
		default:
			std::cout << "Type a valid level. DEBUG, INFO, WARNING, ERROR\n";
	}

   }
