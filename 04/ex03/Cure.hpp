#ifndef CURECLASS
#define CURECLASS

#include "AMateria.hpp"

class Cure : public AMateria{

public:
    Cure(void);
    Cure(Cure &toCopy);
    ~Cure(void);
    Cure(std::string const &type);
    Cure &operator=(Cure const &_new);
    Cure *clone() const;
    void use(ICharacter &target);
};

#endif