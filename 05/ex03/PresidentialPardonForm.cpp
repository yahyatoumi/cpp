#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Robotomyform", 25, 5)
{
    this->target = target;
}

void PresidentialPardonForm::beSigned(Bureaucrat &b)
{
    b.signForm(this);
    if (b.getGrade() <= this->getGradeToSign())
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        this->setSigned_();
    }
    else
        throw Bureaucrat::GradeTooLowException();
}