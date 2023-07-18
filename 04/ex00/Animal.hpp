#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>

class Animal{

protected:
    std::string type;

public:
    Animal(void);
    Animal(Animal const &toCopy);
    virtual ~Animal(void);
    Animal &operator=(Animal const &_new);
    virtual void makeSound() const;
    std::string getType(void) const;
    void setType(std::string type);
};

#endif