#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential form", 25, 5)
{
    this->target = target;
}

void PresidentialPardonForm::beSigned(Bureaucrat &b)
{
    b.signForm(this);
    if (b.getGrade() <= this->getGradeToSign())
        this->setSigned_();
    else
        throw PresidentialPardonForm::GradeTooHighException();
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    std::string gradeerr = executor.getName() + " can't execute " + this->getName() + " form";
    std::string notsigned = this->getName() + " is not signed to execute";
    if (executor.getGrade() > this->getGradeToExecute())
        throw PresidentialPardonForm::GradeTooHighException();
    if (!this->getSigned_())
        throw std::logic_error(notsigned);
    std::cout << "the form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}