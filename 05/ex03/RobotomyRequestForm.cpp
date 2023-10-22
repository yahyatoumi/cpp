#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomyform", 72, 45)
{
    this->target = target;
}

void RobotomyRequestForm::beSigned(Bureaucrat &b)
{
    b.signForm(this);
    if (b.getGrade() <= this->getGradeToSign())
    {
        this->setSigned_();
    }
    else
    {
        std::cout << "robotomy failed" << std::endl;
        throw AForm::GradeTooHighException();
    }
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::string gradeerr = executor.getName() + " can't execute " + this->getName() + " form";
    std::string notsigned = this->getName() + " is not signed to execute";
    if (executor.getGrade() > this->getGradeToExecute())
        throw std::logic_error(gradeerr);
    if (!this->getSigned_())
        throw std::logic_error(notsigned);
    std::cout << "yoyoyoyoyo noise noise noise (Robotomyform making noises...)" << std::endl;
    std::cout << "the form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
    std::cout << this->target << " has been robotomized successfully 50\% of the time" << std::endl;
}