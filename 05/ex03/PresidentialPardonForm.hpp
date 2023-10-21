#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm(std::string target);
    void beSigned(Bureaucrat &b);
};

#endif