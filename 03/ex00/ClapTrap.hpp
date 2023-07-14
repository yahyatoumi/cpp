#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>

class ClapTrap{

private:
    std::string name;
    int hitPointes = 10;
    int energyPoints = 10;
    int attackDamage = 0;

public:
    ClapTrap(void);
    ClapTrap(ClapTrap const &_old);
    ~ClapTrap(void);
    ClapTrap & operator=(ClapTrap &_new);
    std::string getName(void) const;
    int getHitPointes(void) const;
    void setHitPointes(unsigned int amount);
    void setEnergyPointes(unsigned int amount);
    void setAttackDamage(unsigned int amount);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif