/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:27:47 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:27:48 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName(void) const
{
    return this->name;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPointes(unsigned int _new)
{
    this->hitPointes = _new;
}
void ClapTrap::setEnergyPointes(unsigned int _new)
{
    this->energyPoints = _new;
}
void ClapTrap::setAttackDamage(unsigned int _new)
{
    this->attackDamage = _new;
}

int ClapTrap::getHitPointes(void) const
{
    return this->hitPointes;
}

int ClapTrap::getEnergyPointes(void) const
{
    return this->energyPoints;
}
int ClapTrap::getAttackDamage(void) const
{
    return this->attackDamage;
}

ClapTrap::ClapTrap(void) : hitPointes(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap DEFAULT constructor called!!" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : name(name), hitPointes(10), energyPoints(10), attackDamage(0)
{
}
ClapTrap::ClapTrap(ClapTrap const &_new)
{
    std::cout << "ClapTrap COPY constructor called!!" << std::endl;
    this->name = _new.getName();
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap DESTRUCTOR called!!" << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap &_new)
{
    std::cout << "ClapTrap assignment operator called!!" << std::endl;
    this->name = _new.getName();
    this->hitPointes = _new.getHitPointes();
    this->energyPoints = _new.getEnergyPointes();
    this->attackDamage = _new.getAttackDamage();
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "cant attack!!, no energy pointes!!" << std::endl;
        return;
    }
    if (this->hitPointes <= 0)
    {
        std::cout << "cant attack!!, no hit pointes!!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ClapTrap " << this->name << " attacks" << target << ", causing " << this->attackDamage << " pointes of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "cant attack!!, no energy pointes!!" << std::endl;
        return;
    }
    if (this->hitPointes <= 0)
    {
        std::cout << "cant attack!!, no hit pointes!!" << std::endl;
        return;
    }
    this->hitPointes -= amount;
    std::cout << this->name << " toke " << amount << " pointes damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "cant attack!!, no energy pointes!!" << std::endl;
        return;
    }
    if (this->hitPointes <= 0)
    {
        std::cout << "cant attack!!, no hit pointes!!" << std::endl;
        return;
    }
    this->hitPointes += amount;
    this->energyPoints--;
    std::cout << this->name << " repaired with " << amount << " pointes..." << std::endl;
}