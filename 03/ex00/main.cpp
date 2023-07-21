/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:27:13 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:27:14 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1, c2;

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
}