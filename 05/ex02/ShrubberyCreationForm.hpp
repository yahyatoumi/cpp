#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string target);
    void beSigned(Bureaucrat &b);
    void execute(Bureaucrat const & executor) const;
};

#endif