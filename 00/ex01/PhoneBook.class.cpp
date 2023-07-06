#include <iostream>
#include "PhoneBook.class.hpp"



void PhoneBook::addContact(Contact contact)
{
	if (this->nOfContacts < 8)
	{
		this->contacts[nOfContacts] = contact;
		nOfContacts++;
	}
	else
	{
		for (int i = 0; i < 8 - 1; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = contact;
	}
}



void PhoneBook::displayContacts() const
{
	std::string index;

	if (!this->nOfContacts){
		std::cout << "list is empty!!" << std::endl;
		return;
	}
	for (int i = 0; i < 63; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << " index |first name| last name|  nickname|    number|    secret|" << std::endl;
	for (int i = 0; i < 63; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < this->nOfContacts; i++){
		std::cout << "   " << this->nOfContacts << "   ";
		contacts[i].displayContact();
	}
	std::cout << "index : ";
	if (!std::getline(std::cin, index))
		exit(0);
	displayContactDetails(index);
}

void PhoneBook::displayContactDetails(std::string index) const
{
	int i = std::atoi(index.c_str());
	if (i < 1 || i > 8 || index.length() > 1)
	{
		std::cout << "the index Must Be a number < 8 && > 0!!" << std::endl;
		return;
	}
	if (i > this->nOfContacts)
	{
		std::cout << "Out of Range!!!!" << std::endl;
		return;
	}
	contacts[i - 1].displayDetails();
}

int PhoneBook::isdigits(std::string str)
{
	for (unsigned long i = 0; (unsigned long)i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return 0;
	}
	return 1;
}

void PhoneBook::createNewContact()
{
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string number = "x";
	std::string darkestSecret;

	std::cout << "enter first Name : ";
	if (!std::getline(std::cin, fname))
		exit(0);
	while (!fname.length())
	{
		std::cout << "cant have empty fields!!!" << std::endl;
		std::cout << "enter first Name : ";
		if (!std::getline(std::cin, fname))
			exit(0);
	}
	std::cout << "last Name : ";
	if (!std::getline(std::cin, lname))
		exit(0);
	while (!lname.length())
	{
		std::cout << "cant have empty fields!!!" << std::endl;
		std::cout << "last Name : ";
		if (!std::getline(std::cin, lname))
			exit(0);
	}
	std::cout << "nickname : ";
	if (!std::getline(std::cin, nickname))
		exit(0);
	while (!nickname.length())
	{
		std::cout << "cant have empty fields!!!" << std::endl;
		std::cout << "nickname : ";
		if (!std::getline(std::cin, nickname))
			exit(0);
	}
	std::cout << "number : ";
	if (!std::getline(std::cin, number))
		exit(0);
	while (!number.length() || !PhoneBook::isdigits(number))
	{
		std::cout << "must enter a valid NUmber!! : " << std::endl;
		std::cout << "number : ";
		if (!std::getline(std::cin, number))
			exit(0);
	}
	std::cout << "Darkest Secret : ";
	if (!std::getline(std::cin, darkestSecret))
		exit(0);
	while (!darkestSecret.length())
	{
		std::cout << "cant have empty fields!!!" << std::endl;
		std::cout << "Darkest Secret : ";
		if (!std::getline(std::cin, darkestSecret))
			exit(0);
	}
	Contact con;
	con.createConatct(fname, lname, nickname, number, darkestSecret);
	addContact(con);
}
