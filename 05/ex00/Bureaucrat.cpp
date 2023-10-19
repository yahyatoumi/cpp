#include "Bureaucrat.hpp"

void Bureaucrat::increment()
{
    if (this->grade == 1)
        throw std::out_of_range("exception:: cant increment the grade is already 1!!!");
    this->grade--;
}
void Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw std::out_of_range("exception:: cant decrement the grade is already 150!!!");
    this->grade++;
}



Bureaucrat::Bureaucrat()
{
    throw std::invalid_argument("Bureaucrat must have a name!!");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw std::invalid_argument("Bureaucrat::GradeTooLowException");
    else if (grade < 1)
        throw std::invalid_argument("Bureaucrat::GradeTooHighException");
    this->grade = grade;
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