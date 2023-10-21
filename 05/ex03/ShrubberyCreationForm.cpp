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
        throw Bureaucrat::GradeTooLowException();

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