#ifndef AFORM_H
#define AFORM_H
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
    const std::string name;
    const int gradeToSign;
    const int gradeToExecute;
    bool signed_;

public:
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSigned_() const;
    void setSigned_();
    virtual void beSigned(Bureaucrat &b) = 0;
    void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, AForm const &obj);

#endif