#ifndef ICECLASS
#define ICECLASS

#include "AMateria.hpp"

class Ice : public AMateria{

public:
    Ice(void);
    Ice(Ice &toCopy);
    ~Ice(void);
    Ice(std::string const &type);
    Ice &operator=(Ice const &_new);
    
    Ice *clone() const;
    void use(ICharacter &target);
};

#endif