/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:33:45 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/07 16:32:04 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <set>

int main()
{
    std::vector<int> v(5);
    std::set<int> s;

    v[0] = 1;
    v[1] = 5;
    v[2] = 120;
    v[3] = 11;
    v[4] = 13;
    try{
    easyfind(v, 1);
    }catch(std::exception &e)
    {
        std::cout << "catch 1 : " << e.what() << std::endl;
    }
    try{
    easyfind(v, 13);
    }catch(std::exception &e)
    {
        std::cout << "catch 2 : " << e.what() << std::endl;
    }
}