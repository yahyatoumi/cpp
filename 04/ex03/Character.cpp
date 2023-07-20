/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:20 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 00:25:30 by ytoumi           ###   ########.fr       */
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
    printf("called euip\n");
    if (this->materias[3])
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            printf("i == %i\n", i);
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
        printf("%s\n", this->materias[idx]->getType().c_str());
        this->materias[idx]->use(target);
    }
}

Character::Character(std::string name)
{
    this->name = name;
}