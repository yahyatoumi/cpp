/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:36:44 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/21 01:29:16 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
class Character;

void ff(){
    system("leaks out");
}

int main()
{
    atexit(ff);
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    IMateriaSource *src2 = new MateriaSource();
    *src2 = *src;
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src2->createMateria("ice");
    me->equip(tmp);
    tmp = src2->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    delete src2;
    return 0;
}