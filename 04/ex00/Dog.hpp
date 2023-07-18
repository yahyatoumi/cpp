#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"

class Dog : public Animal{

protected:

public:
    Dog(void);
    Dog(Dog &toCopy);
    ~Dog(void);
    Dog &operator=(Dog const &_new);
    void makeSound() const;
};

#endif