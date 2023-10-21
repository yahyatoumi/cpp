#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b("yahya", 141);
        Form f("form", 140, 100);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        f.beSigned(b);
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}