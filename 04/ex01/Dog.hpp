#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

private:
    Brain *brain;

public:
    Dog(void);
    Dog(Dog &toCopy);
    ~Dog(void);
    Dog &operator=(Dog const &_new);
    void makeSound() const;
    Brain *getBrain(void);
};

#endif