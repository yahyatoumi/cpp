#ifndef CHARACTERCLASS
#define CHARACTERCLASS

#include "ICharacter.hpp"

class Character : public ICharacter{

private:
    AMateria *materias[4];
    std::string name;

public:
    Character(void);
    Character(Character &toCopy);
    ~Character(void);
    Character(std::string name);
    Character &operator=(Character &_new);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif