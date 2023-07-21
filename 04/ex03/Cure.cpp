/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:23 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 00:12:15 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->type = "cure";
}
Cure::Cure(Cure &toCopy) : AMateria(toCopy)
{
    this->type = toCopy.type;
}
Cure::~Cure(void)
{
}

Cure::Cure(std::string const &type)
{
    this->type = type;
}

Cure &Cure::operator=(Cure const &_new){
    _new.getType();
    return *this;
}



Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " <<  target.getName() << " ’s wounds *" << std::endl;
}