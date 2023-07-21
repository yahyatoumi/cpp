/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:14 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:15 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS
#define HUMANA_CLASS

#include "Weapon.hpp"

class HumanA{

private:
	Weapon &weapon;
	std::string name;

public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};


#endif
