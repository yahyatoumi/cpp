/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:23 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/06 16:49:24 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
#define CONTACT_CLASS
#include <iostream>
#include <iomanip>

class Contact{
private:
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string number;
	std::string darkestSecret;

public:
	void createConatct(std::string fname, std::string lname, std::string nickname
		, std::string number, std::string darkestSecret);
	void	displayContact() const;
	void	displayDetails() const;
};

#endif
