#ifndef CTA_CLASS
#define CTA_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

private:
    Brain *brain;

public:
    Cat(void);
    Cat(Cat &toCopy);
    ~Cat(void);
    Cat &operator=(Cat const &_new);
    void makeSound() const;
    Brain *getBrain(void);
};

#endif