#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}
Intern::Intern(Intern &toCopy)
{
    (void)toCopy;
}
Intern::~Intern()
{
}
Intern &Intern::operator=(Intern &toCopy)
{
    (void)toCopy;
    return *this;
}

int convert_to_int(std::string &st)
{

    return (st == "shrubbery creation" ? 0 : st == "robotomy request"  ? 1
                                         : st == "presidential pardon" ? 2
                                                                       : 3);
}

AForm *Intern::makeForm(std::string name, std::string target)
{

    AForm *formCreated = NULL;
    switch (convert_to_int(name))
    {
    case 0:
        formCreated = new ShrubberyCreationForm(target);
        std::cout << "Intern creates shrubbery creation form" << std::endl;
        break;
    case 1:
        formCreated = new RobotomyRequestForm(target);
        std::cout << "Intern creates robotomy request form" << std::endl;
        break;
    case 2:
        formCreated = new PresidentialPardonForm(target);
        std::cout << "Intern creates presidential pardon form" << std::endl;
        break;
    default:
        std::cout << "error: form name is not correct!!" << std::endl;
        throw std::logic_error("form name is not correct!!");
    }
    return formCreated;
}
