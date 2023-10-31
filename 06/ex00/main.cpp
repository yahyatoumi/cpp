#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string param(av[1]);
        ScalarConverter::convert(param);
    }
}