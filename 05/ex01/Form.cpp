#include "Form.hpp"
#include "Bureaucrat.hpp"

// Form::Form(std::string name, int gradeToSign, int gradeToExecute)
// try : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
// {
//     Bureaucrat(name, gradeToSign);
// }
// catch (std::exception &e)
// {
//     std::cout << e.what() << "zzz" << std::endl;
// }

const char *Form::GradeTooHighException::what() const throw()
{
    return "form gradetoooohigh!!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "form gradetoooolow!!";
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

std::string Form::getName() const
{
    return this->name;
}
int Form::getGradeToSign() const
{
    return this->gradeToSign;
}
int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}
bool Form::getSigned_() const
{
    return this->signed_;
}

std::ostream &operator<<(std::ostream &o, Form const &obj)
{
    std::cout << obj.getName() << " : grade to sign " << obj.getGradeToSign() << " grade to execute " << obj.getGradeToExecute();
    if (obj.getSigned_())
        std::cout << " (signed)";
    else
        std::cout << " (not signed)";
    return o;
}

void Form::beSigned(Bureaucrat &b)
{
    b.signForm(*this);
    if (b.getGrade() <= this->gradeToSign)
        signed_ = true;
    else
        throw Form::GradeTooHighException();
}
