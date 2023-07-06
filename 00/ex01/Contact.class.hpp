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
