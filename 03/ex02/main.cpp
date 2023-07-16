#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap c1("c1"), c2;

    c1.setName("CP1");
    c2.setName("CP2");
    c1.attack(c2.getName());
    c2.takeDamage(1);
    c2.beRepaired(2);

    std::cout << c1.getName() << " has " << c1.getHitPointes() << " hit pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getHitPointes() << " hit pointes" << std::endl;
    std::cout << c1.getName() << " has " << c1.getEnergyPointes() << " hit pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getEnergyPointes() << " hit pointes" << std::endl;
    std::cout << c1.getName() << " has " << c1.getAttackDamage() << " hit pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getAttackDamage() << " hit pointes" << std::endl;
    ScavTrap s1("ST1");
    std::cout << s1.getName() << " has " << s1.getHitPointes() << " hit pointes" << std::endl;
    std::cout << s1.getName() << " has " << s1.getEnergyPointes() << " energy pointes" << std::endl;
    std::cout << s1.getName() << " has " << s1.getAttackDamage() << " attack damage pointes" << std::endl;
    s1.guardGate();
    FragTrap t1("ST1");
    std::cout << t1.getName() << " has " << t1.getHitPointes() << " hit pointes" << std::endl;
    std::cout << t1.getName() << " has " << t1.getEnergyPointes() << " energy pointes" << std::endl;
    std::cout << t1.getName() << " has " << t1.getAttackDamage() << " attack damage pointes" << std::endl;
}