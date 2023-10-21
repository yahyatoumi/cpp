#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomyform", 72, 45)
{
    this->target = target;
}

void RobotomyRequestForm::beSigned(Bureaucrat &b)
{
    std::cout << "yoyoyoyoyo noise noise noise (Robotomyform making noises...)" << std::endl;
    b.signForm(this);
    if (b.getGrade() <= this->getGradeToSign())
    {
        std::cout << this->target << " has been robotomized successfully 50\% of the time" << std::endl;
        this->setSigned_();
    }
    else
    {
        std::cout << "robotomy failed" << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
}