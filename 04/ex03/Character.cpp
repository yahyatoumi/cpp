/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:20 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 01:06:12 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
}

Character::Character(Character &toCopy)
{
    for (int i = 0; i < 4; i++)
    {
        if (toCopy.materias[i])
        {
            this->materias[i] = toCopy.materias[i]->clone();
        }
    }
}

Character::~Character(void)
{
}

Character &Character::operator=(Character &_new)
{
    for (int i = 0; i < 4; i++)
    {
        if (_new.materias[i])
        {
            this->materias[i] = _new.materias[i]->clone();
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (this->materias[3])
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (this->materias[idx] == NULL)
        return;
    this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->materias[idx])
    {
        this->materias[idx]->use(target);
    }
}

Character::Character(std::string name)
{
    this->name = name;
}