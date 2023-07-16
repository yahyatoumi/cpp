/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:27:55 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:27:56 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "ScavTrap CONSTRUCTOR called!!" << std::endl;
    this->setHitPointes(100);
    this->setEnergyPointes(100);
    this->setAttackDamage(30);
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "ScavTrap CONSTRUCTOR WITH NAME called!!" << std::endl;
    this->setHitPointes(100);
    this->setEnergyPointes(100);
    this->setAttackDamage(30);
    this->setName(name);
}
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap DESTRUCTOR called!!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &_new)
{
    std::cout << "FragTrap assignment operator called!!" << std::endl;
    this->setHitPointes(_new.getHitPointes());
    this->setEnergyPointes(_new.getEnergyPointes());
    this->setAttackDamage(_new.getAttackDamage());
    this->setName(_new.getName());
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap [" << this->getName() << ": HIGHHHHHHH FIVEEEEE GUUUYS!!" << std::endl;
}