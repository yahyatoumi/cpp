#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "bureacraut gradetoooohigh!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "bureacraut gradetoooolow!!";
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

void Bureaucrat::signForm(AForm *form)
{
    if (this->getGrade() <= form->getGradeToSign())
        std::cout << this->name << " signed " << form->getName() << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << form->getName() << "because his grade is low" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
    std::string gradeerr = this->getName() + " can't execute " + form.getName() + " form";
    std::string notsigned = form.getName() + " is not signed to execute";
    if (this->getGrade() > form.getGradeToExecute())
        throw Bureaucrat::GradeTooLowException();
    if (!form.getSigned_())
        throw std::logic_error(notsigned);
    std::cout << "the Bureaucrat " << this->name << " just signed " << form.getName() << std::endl;
}
