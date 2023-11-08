/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:33:24 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/08 14:33:28 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(15);
    mstack.push(15);
    mstack.push(15);
    mstack.push(15);
    mstack.push(15);

    MutantStack<int>::iterator itr = mstack.begin();
    while(itr != mstack.end())
    {
        std::cout << *itr << std::endl;
        itr++;
    }
    return 0;
}
