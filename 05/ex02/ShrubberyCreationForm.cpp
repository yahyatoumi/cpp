#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubform", 145, 137)
{
    this->target = target;
}

void ShrubberyCreationForm::beSigned(Bureaucrat &b)
{
    b.signForm(this);
    if (b.getGrade() <= this->getGradeToSign())
        this->setSigned_();
    else
        throw ShrubberyCreationForm::GradeTooHighException();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string gradeerr = executor.getName() + " can't execute " + this->getName() + " form";
    std::string notsigned = this->getName() + " is not signed to execute";
    if (executor.getGrade() > this->getGradeToExecute())
        throw ShrubberyCreationForm::GradeTooHighException();
    if (!this->getSigned_())
        throw std::logic_error(notsigned);
    std::cout << "the form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
        std::ofstream outputFile(this->target + "_shrubbery");

    if (outputFile.is_open())
    {
        outputFile << "   ^\n";
        outputFile << "  ^^^\n";
        outputFile << " ^^^^^\n";
        outputFile << "^^^^^^^\n";
        outputFile << "   |   \n";
        outputFile << "   |   \n";

        outputFile.close();
    }
    else
    {
        std::cerr << "Error couldn't open a file." << std::endl;
    }
}