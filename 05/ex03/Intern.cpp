#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
        break;
    case 1:
        formCreated = new RobotomyRequestForm(target);
        break;
    case 2:
        formCreated = new PresidentialPardonForm(target);
        break;
    case 3:
        std::cout << "error: form name is not correct!!" << std::endl;
        return NULL;
        break;
    default:
        std::cout << "Intern creates shrubbery creation form" << std::endl;
    }
    return formCreated;
}
