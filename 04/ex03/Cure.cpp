#include "Cure.hpp"

Cure::Cure(void)
{
    this->type = "cure";
}
Cure::Cure(Cure &toCopy)
{
    this->type = toCopy.type;
}
Cure::~Cure(void)
{
}

Cure::Cure(std::string const &type)
{
    this->type = type;
}

Cure &Cure::operator=(Cure const &_new){
}

void Cure::use(ICharacter &target)
{
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
