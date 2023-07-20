/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:25 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/20 21:36:26 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURECLASS
#define CURECLASS

#include "AMateria.hpp"

class Cure : public AMateria{

public:
    Cure(void);
    Cure(Cure &toCopy);
    ~Cure(void);
    Cure(std::string const &type);
    Cure &operator=(Cure const &_new);
    Cure *clone() const;
    void use(ICharacter &target);
};

#endif