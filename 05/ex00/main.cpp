#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b("yahya", 149);
        b.decrement();
        b.decrement();
        b.decrement();
        std::cout << b << std::endl;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}