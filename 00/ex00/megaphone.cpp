/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:17 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/07 19:25:13 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpperCase(std::string &str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;return 0;
	}
	i = 1;
	while (i < ac)
	{
		std::string arg(av[i]);
		toUpperCase(arg);
		std::cout << arg;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
