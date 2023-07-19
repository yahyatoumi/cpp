#include "AMateria.hpp"

AMateria::AMateria(void)
{
}
AMateria::AMateria(AMateria &toCopy)
{
    this->type = toCopy.type;
}
AMateria::~AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
std::string const &AMateria::getType() const
{
    return this->type;
} // Returns the materia type

void AMateria::use(ICharacter &target){
    
}