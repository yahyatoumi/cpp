/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:34 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/06 16:49:41 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS
#define PHONE_BOOK_CLASS
#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

class PhoneBook{
private:
	Contact contacts[8];
	int nOfContacts;

public:
	PhoneBook() : nOfContacts(0) {}

	void addContact(Contact contact);
	void displayContacts() const;
	void displayContactDetails(std::string index) const;
	static int	isdigits(std::string str);
	void	createNewContact();
};

#endif
