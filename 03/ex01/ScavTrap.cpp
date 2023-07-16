#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->setHitPointes(100);
    this->setEnergyPointes(50);
    this->setHitPointes(20);
    std::cout << "ScavTrap DEFAULT constructor called!!" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    this->setHitPointes(100);
    this->setEnergyPointes(50);
    this->setAttackDamage(20);
    this->setName(name);
    std::cout << "ScavTrap constructor WITH NAME called!!" << std::endl;
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap DESTRUCTOR constructor called!!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap [" << this->getName() << "] is now in Gate keeper mode" << std::endl;
}