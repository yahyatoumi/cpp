#ifndef AMATERIA_CLASS
#define AMATERIA_CLASS

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(AMateria &toCopy);
    virtual ~AMateria(void);
    AMateria(std::string const &type);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif