
#ifndef EX01_CLASSES
#define EX01_CLASSES
#include <iostream>
#include <iomanip>

class Contact
{

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

class PhoneBook
{

private:
	Contact contacts[8];
	int nOfContacts;

public:
	PhoneBook() : nOfContacts(0) {}

	void addContact(Contact &contact);
	void displayContacts() const;
	void displayContactDetails(std::string index) const;
	static int	isdigits(std::string str);
	void	createNewContact();
};

#endif
