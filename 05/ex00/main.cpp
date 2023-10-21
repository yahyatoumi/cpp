#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b("yahya", 150);
        Bureaucrat c = b;
        std::cout << c << std::endl;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}