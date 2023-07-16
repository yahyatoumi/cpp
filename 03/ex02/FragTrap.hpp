#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    void highFivesGuys(void);
};
 
#endif