#ifndef HUMANA_CLASS
#define HUMANA_CLASS

#include "Weapon.hpp"

class HumanA{

private:
	Weapon &weapon;
	std::string name;

public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};


#endif
