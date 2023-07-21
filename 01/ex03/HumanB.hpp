/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:19 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:20 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS
#define HUMANB_CLASS

#include "Weapon.hpp"

class HumanB{

private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &weapon);
};


#endif
