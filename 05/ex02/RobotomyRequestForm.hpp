#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    void beSigned(Bureaucrat &b);
    void execute(Bureaucrat const & executor) const;
};

#endif