/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:27:09 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/16 22:27:10 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>

class ClapTrap{

private:
    std::string name;
    int hitPointes;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap(void);
    ClapTrap(ClapTrap const &_old);
    ~ClapTrap(void);
    ClapTrap & operator=(ClapTrap &_new);
    std::string getName(void) const;
    void setName(std::string name);
    int getHitPointes(void) const;
    int getEnergyPointes(void) const;
    int getAttackDamage(void) const;
    void setHitPointes(unsigned int amount);
    void setEnergyPointes(unsigned int amount);
    void setAttackDamage(unsigned int amount);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif