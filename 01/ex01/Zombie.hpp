/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:45 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:46 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>

class Zombie{

private:
	std::string name;

public:
	~Zombie();
	void	announce( void );
	void	set_name( std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif
