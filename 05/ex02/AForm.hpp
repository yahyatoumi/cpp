#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int gradeToSign;
    const int gradeToExecute;
    bool signed_;

public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSigned_() const;
    virtual void beSigned(Bureaucrat &b) = 0;
};

std::ostream &operator<<(std::ostream &o, Form const &obj);

#endif