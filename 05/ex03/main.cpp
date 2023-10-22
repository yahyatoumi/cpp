#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat b("yahya", 5);
        Intern intern;
        AForm *form = new ShrubberyCreationForm("yoyoyo");
        AForm *form2 = new RobotomyRequestForm("sisisisisisi");
        AForm *form3 = intern.makeForm("presidential pardon", "Kkkkkkkkkkkkkkkkkkk");
        std::cout << b << std::endl;
        form->beSigned(b);
        form2->beSigned(b);
        printf("cccccoclpopopop\n");
        form3->beSigned(b);
        // std::cout << f << std::endl;
        // f.beSigned(b);
        form->execute(b);
        form2->execute(b);
        form3->execute(b);
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}