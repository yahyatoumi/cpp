/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:26 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/07 18:56:51 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "enter a command : ";
		if (!std::getline(std::cin, command))
			exit(0);
		if (command == "ADD"){
			book.createNewContact();
		}
		else if (command == "SEARCH"){
			book.displayContacts();
		}
		else if (command == "EXIT")
			exit(0);
	}
}
