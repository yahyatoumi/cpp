/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:20 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/06 16:49:21 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void Contact::createConatct(std::string fname, std::string lname, std::string nickname, std::string number, std::string darkestSecret)
{
	this->fname = fname;
	this->lname = lname;
	this->nickname = nickname;
	this->number = number;
	this->darkestSecret = darkestSecret;
}

void Contact::displayContact() const
{
	if (!this->fname.length())
		return;
	if (this->fname.length() < 11)
		std::cout << "|" << std::setw(10) << this->fname << "|";
	else
		std::cout << "|" << this->fname.substr(0, 9) << ".|";
	if (this->lname.length() < 11)
		std::cout << std::setw(10) << this->lname << "|";
	else
		std::cout << this->lname.substr(0, 9) << ".|";
	if (this->nickname.length() < 11)
		std::cout << std::setw(10) << this->nickname << "|";
	else
		std::cout << this->nickname.substr(0, 9) << ".|";
	if (this->number.length() < 11)
		std::cout << std::setw(10) << this->number << "|";
	else
		std::cout << this->number.substr(0, 9) << ".|";
	if (this->darkestSecret.length() < 11)
		std::cout << std::setw(10) << this->darkestSecret << "|";
	else
		std::cout << this->darkestSecret.substr(0, 9) << ".|";
	std::cout << std::endl;
	for (int i = 0; i < 63; i++)
		std::cout << "-";
	std::cout << std::endl;
}

void Contact::displayDetails() const
{
	std::cout << this->fname << std::endl;
	std::cout << this->lname << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->number << std::endl;
	std::cout << this->darkestSecret << std::endl;
}
