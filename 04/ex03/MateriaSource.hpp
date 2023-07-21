/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:50 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 01:17:39 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS
#define MATERIASOURCE_CLASS

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

private:
    AMateria *materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &toCopy);
    MateriaSource &operator=(MateriaSource &_new);
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif