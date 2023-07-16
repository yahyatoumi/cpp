#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    void guardGate();
};
 
#endif