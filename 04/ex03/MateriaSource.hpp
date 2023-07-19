#ifndef MATERIASOURCECLASS
#define MATERIASOURCECLASS

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

private:
    AMateria *materias[4];
public:
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif