/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:27:26 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:27:27 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap c1("c1"), c2;

    c1.setName("CP1");
    c2.setName("CP2");
    c1.attack(c2.getName());
    c2.takeDamage(1);
    c2.beRepaired(2);
    ClapTrap c3 = c2;
    std::cout << c1.getName() << " has " << c1.getHitPointes() << " hit pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getHitPointes() << " hit pointes" << std::endl;
    std::cout << c1.getName() << " has " << c1.getEnergyPointes() << " energy pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getEnergyPointes() << " energy pointes" << std::endl;
    std::cout << c1.getName() << " has " << c1.getAttackDamage() << " attack damage pointes" << std::endl;
    std::cout << c2.getName() << " has " << c2.getAttackDamage() << " attack damage pointes" << std::endl;
    ScavTrap s1("ST1");
    std::cout << s1.getName() << " has " << s1.getHitPointes() << " hit pointes" << std::endl;
    std::cout << s1.getName() << " has " << s1.getEnergyPointes() << " energy pointes" << std::endl;
    std::cout << s1.getName() << " has " << s1.getAttackDamage() << " attack damage pointes" << std::endl;
    s1.guardGate();
}