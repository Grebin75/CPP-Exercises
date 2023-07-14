#include "../Harl.hpp"

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

void Harl::complain(str level)
{
	str levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (++i < 4)
	{
    	if (!levels[i].compare(level))
		{
       		(this->*func[i])();
			break;
		}
	}
}