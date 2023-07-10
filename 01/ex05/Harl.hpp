#ifndef HARL_CLASS
#define HARL_CLASS

#include <iostream>

class Harl
{

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(std::string level);
};

#endif
