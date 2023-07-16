#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->setHitPointes(100);
    this->setEnergyPointes(100);
    this->setAttackDamage(30);
}
FragTrap::FragTrap(std::string name)
{
    this->setHitPointes(100);
    this->setEnergyPointes(100);
    this->setAttackDamage(30);
    this->setName(name);
}
FragTrap::~FragTrap(void)
{
}
void FragTrap::highFivesGuys(void)
{
}