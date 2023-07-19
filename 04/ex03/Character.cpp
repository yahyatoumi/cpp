#include "Character.hpp"

Character::Character(void)
{
    std::string str = "none";
    const std::string& ref = str;
    for (int i = 0; i < 4; i++) {
        materias[i] = new Ice(ref);
    }
}
Character::Character(Character &toCopy)
{
    for (int i = 0; i < 4; i++)
    {
        if (toCopy.materias[i])
        {
            this->materias[i] = toCopy.materias[i]->clone();
        }
    }
}
Character::~Character(void)
{
    for (int i = 0; i < 4; i++){
        delete this->materias[i];
    }
}
Character &Character::operator=(Character &_new)
{
    for (int i = 0; i < 4; i++)
    {
        if (_new.materias[i])
        {
            this->materias[i] = _new.materias[i]->clone();
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return this->name;
}
void Character::equip(AMateria *m)
{
    if (this->materias[0]->getType() != "none")
    {
        delete this->materias[0];
        this->materias[0]= m;
    }
    else if (this->materias[1]->getType() != "none")
    {
        delete this->materias[1];
        this->materias[1]= m;
    }
    else if (this->materias[2]->getType() != "none")
    {
        delete this->materias[2];
        this->materias[2] = m;
    }
    else if (this->materias[3]->getType() != "none")
    {
        delete this->materias[3];
        this->materias[3] = m;
    }
}
void Character::unequip(int idx)
{
    if (this->materias[idx] == NULL)
        return;
    this->materias[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (this->materias[idx])
        this->materias[idx]->use(target);
}

Character::Character(std::string name)
{
    this->name = name;
}