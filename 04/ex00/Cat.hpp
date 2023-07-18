#ifndef CTA_CLASS
#define CTA_CLASS

#include "Animal.hpp"

class Cat : public Animal{

protected:

public:
    Cat(void);
    Cat(Cat &toCopy);
    ~Cat(void);
    Cat &operator=(Cat const &_new);
    void makeSound() const;
};

#endif