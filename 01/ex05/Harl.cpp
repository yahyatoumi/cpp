/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:10:59 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:00 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!--DEBUG" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!--INFO" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.--WARNING" << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.--ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	int index = 4;
	void (Harl::*func)(void);
	std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == options[i])
			index = i;
	}
	switch (index)
	{
	case 0:
		func = &Harl::debug;
		break;
	case 1:
		func = &Harl::info;
		break;
	case 2:
		func = &Harl::warning;
		break;
	case 3:
		func = &Harl::error;
		break;
	default:
		std::cout << "Complaine function received invalid argument" << std::endl;
		return;
	}
	(this->*func)();
}
