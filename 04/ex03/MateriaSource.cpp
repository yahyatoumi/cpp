/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:48 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 01:23:21 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <stdio.h>

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++){
        if (this->materias[i])
            delete this->materias[i];
    }
}
MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++){
        this->materias[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
    if (this == &toCopy)
        return ;
    for (int i = 0; i < 4; i++){
        if (toCopy.materias[i])
            this->materias[i] = toCopy.materias[i]->clone();
    }
}
MateriaSource &MateriaSource::operator=(MateriaSource &_new)
{
    if (this == &_new)
        return *this;
    for (int i = 0; i < 4; i++){
        if (this->materias[i])
            delete this->materias[i];
        if (_new.materias[i])
        {
            this->materias[i] = _new.materias[i]->clone();
        }
        else
            this->materias[i] = NULL;
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria *materia)
{
    if (this->materias[3])
        return ;
    for (int i = 0; i < 4; i++){
        if (this->materias[i] == NULL){
            this->materias[i] = materia;
            return ;
        }
    }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    int latest = -1;
    for (int i = 0; i < 4; i++){
        if (this->materias[i] && this->materias[i]->getType() == type)
            latest = i;
    }
    if (latest != -1)
        return this->materias[latest];
    return NULL;
}