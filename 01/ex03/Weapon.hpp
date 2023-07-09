#ifndef WEAPON_CLASS
#define WEAPON_CLASS

#include <iostream>

class Weapon{

private:
	std::string type;

public:
	Weapon(std::string type);
	const std::string &getType() const;
	void	setType(std::string type);
};


#endif
