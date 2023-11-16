#include <iostream>
#include <vector>
#include "PmergeMe.hpp"
#include <iomanip>


bool isAllDigits(std::string str)
{
    unsigned long i = 0;
    i = 0;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

int main(int ac, char **av)
{
    if (ac == 1)
        return 0;
    std::vector<std::vector<int> > v;
    int i = 1;
    while (i < ac)
    {
        if (!isAllDigits(av[i]))
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        i++;
    }
    std::cout << "Before: ";
    for(int j = 1; j < ac; j++)
        std::cout << " " << av[j];
    std::cout << std::endl;
    PmergeMe pm(av, ac);
}