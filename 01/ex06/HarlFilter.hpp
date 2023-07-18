#ifndef HARLFILTER_H
# define HARLFILTER_H

# include <iostream>
# include <string>
# include <cstdlib>

typedef std::string str;

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*func[4])();
		unsigned int str2int(const char* str, int h);

	public:
		Harl();
		~Harl();
		void complain(const char * level);
};


#endif
