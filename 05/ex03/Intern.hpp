#ifndef INTERN
#define INTERN
#include "AForm.hpp"

class AForm;

class Intern{
public:
    Intern();
    Intern(Intern &toCopy);
    ~Intern();
    Intern &operator=(Intern &toCopy);
    AForm *makeForm(std::string name, std::string target);
};

#endif
