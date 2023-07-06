#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		if (!std::getline(std::cin, command))
			exit(0);
		if (command == "ADD")
		{
			book.createNewContact();
		}
		else if (command == "SEARCH")
		{
			book.displayContacts();
		}
		else if (command == "EXIT")
			exit(0);
	}
}
