/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:21 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/20 21:44:24 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERCLASS
#define CHARACTERCLASS

#include "ICharacter.hpp"
class AMateria;

class Character : public ICharacter{

private:
    AMateria *materias[4];
    std::string name;

public:
    Character(void);
    Character(Character &toCopy);
    ~Character(void);
    Character(std::string name);
    Character &operator=(Character &_new);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif