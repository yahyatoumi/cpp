/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:16 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/20 23:50:55 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}
AMateria::AMateria(AMateria &toCopy)
{
    this->type = toCopy.type;
}
AMateria::~AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target){
    (void)target;
}