/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:56:29 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 10:56:30 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>


class Zombie{

private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce( void );
};

void		randomChump( std::string name );
Zombie*		newZombie( std::string name );
#endif
