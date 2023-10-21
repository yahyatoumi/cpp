#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "gradetoooohigh!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "gradetoooolow!!";
}

void Bureaucrat::increment()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}
void Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw GradeTooLowException();

    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat()
{
    throw std::invalid_argument("Bureaucrat must have a name!!");
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &toCopy) : name(toCopy.name)
{
    this->grade = toCopy.grade;
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toCopy)
{
    this->grade = toCopy.grade;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return o;
}

void Bureaucrat::signForm(Form &form)
{
    if (this->getGrade() <= form.getGradeToSign())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << form.getName() << std::endl;
}