#ifndef HARL_H
# define HARL_H

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
	
	public:
		Harl();
		~Harl();
		void complain(str level);
};


#endif