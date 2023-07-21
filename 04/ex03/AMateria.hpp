/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:18 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 00:38:53 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS
#define AMATERIA_CLASS

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(AMateria &toCopy);
    virtual ~AMateria(void);
    AMateria(std::string const &type);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif