#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string AForm::getName() const
{
    return this->name;
}
int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}
int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}
bool AForm::getSigned_() const
{
    return this->signed_;
}

std::ostream &operator<<(std::ostream &o, AForm const &obj)
{
    std::cout << obj.getName() << " : grade to sign " << obj.getGradeToSign() << " grade to execute " << obj.getGradeToExecute();
    if (obj.getSigned_())
        std::cout << " (signed)";
    else
        std::cout << " (not signed)";
    return o;
}

void AForm::beSigned(Bureaucrat &b)
{
    b.signForm(this);
    if (b.getGrade() <= this->gradeToSign)
        signed_ = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

void AForm::setSigned_()
{
    this->signed_ = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    std::string gradeerr = executor.getName() + " can't execute " + this->name + " form";
    std::string notsigned = this->name + " is not signed to execute";
    if (executor.getGrade() > this->gradeToExecute)
        throw std::logic_error(gradeerr);
    if (!this->signed_)
        throw std::logic_error(notsigned);
    std::cout << "the form " << this->name << " has been signed by " << executor.getName() << std::endl;
}