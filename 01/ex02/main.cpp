#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string adress : " << &string << std::endl;
	std::cout << "pointer adress : " << &stringPTR << std::endl;
	std::cout << "refrence adress : " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}
