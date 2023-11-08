/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:21:04 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/07 19:36:09 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <iostream>

template <class T>
void easyfind(T t, int i)
{
    typename T::iterator itr;
    for (itr = t.begin(); itr != t.end(); itr++)
    {
        if (*itr == i)
        {
            std::cout << i << " found in container" << std::endl;
            return;
        }
    }
    throw std::logic_error("element not found in container");
}

#endif