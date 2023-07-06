#include <iostream>

void	toUpperCase(std::string &str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;return 0;
	}
	i = 1;
	while (i < ac)
	{
		std::string arg(av[i]);
		toUpperCase(arg);
		std::cout << arg;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
