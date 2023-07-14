#include "ClapTrap.hpp"

std::string ClapTrap::getName(void) const
{
    return this->name;
}

void ClapTrap::setHitPointes(unsigned int _new) 
{
    this->hitPointes = _new;
}
void ClapTrap::setEnergyPointes(unsigned int _new) 
{
    this->energyPoints = _new;
}
void ClapTrap::setAttackDamage(unsigned int _new) 
{
    this->attackDamage = _new;
}

int ClapTrap::getHitPointes(void) const{
    return this->hitPointes;
}


ClapTrap::ClapTrap(void) : hitPointes(10), energyPoints(10), attackDamage(0)
{
}
ClapTrap::ClapTrap(ClapTrap const &_new)
{
    this->name = _new.getName();
}
ClapTrap::~ClapTrap(void)
{
}
ClapTrap &ClapTrap::operator=(ClapTrap &_new)
{
    this->name = _new.getName();
}

void ClapTrap::attack(const std::string &target)
{
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
}
void ClapTrap::beRepaired(unsigned int amount)
{
}