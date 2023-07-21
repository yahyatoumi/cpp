/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:30 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/20 21:36:33 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICECLASS
#define ICECLASS

#include "AMateria.hpp"

class Ice : public AMateria{

public:
    Ice(void);
    Ice(Ice &toCopy);
    ~Ice(void);
    Ice(std::string const &type);
    Ice &operator=(Ice const &_new);
    
    Ice *clone() const;
    void use(ICharacter &target);
};

#endif