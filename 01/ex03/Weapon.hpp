/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:28 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:29 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS
#define WEAPON_CLASS

#include <iostream>

class Weapon{

private:
	std::string type;

public:
	Weapon(std::string type);
	const std::string &getType() const;
	void	setType(std::string type);
};


#endif
