
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
  