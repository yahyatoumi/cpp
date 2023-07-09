#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon){
	std::cout << &weapon << " address of the weapon " << std::endl;
	this->weapon = &weapon;
}

void HumanB::attack(){
	std::cout << this->name << "  attacks with their " << this->weapon->getType() << std::endl;
}
