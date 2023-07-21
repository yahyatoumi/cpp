/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:28 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 00:12:20 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    this->type = "ice";
}
Ice::Ice(Ice &toCopy) : AMateria(toCopy)
{
    this->type = toCopy.type;
}
Ice::~Ice(void)
{
}

Ice::Ice(std::string const &type)
{
    this->type = type;
}

Ice &Ice::operator=(Ice const &_new){
    _new.getType();
    return *this;
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}


