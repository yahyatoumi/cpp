/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:28:08 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:28:09 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
ScavTrap::ScavTrap(ScavTrap &toCopy)
{
    this->setHitPointes(toCopy.getHitPointes());
    this->setEnergyPointes(toCopy.getEnergyPointes());
    this->setAttackDamage(toCopy.getAttackDamage());
    std::cout << "ScavTrap COPY constructor called!!" << std::endl;
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap DESTRUCTOR  called!!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &_new)
{
    std::cout << "ScavTrap assignment operator called!!" << std::endl;
    this->setHitPointes(_new.getHitPointes());
    this->setEnergyPointes(_new.getEnergyPointes());
    this->setAttackDamage(_new.getAttackDamage());
    this->setName(_new.getName());
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap [" << this->getName() << "] is now in Gate keeper mode" << std::endl;
}